#include <cmath>
#include <iostream>
#include <limits>

#include "decoder.h"

const char* expected_servicedata[] = {
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Jia round\",\"model_id\":\"LYWSDCGQ\",\"tempc\":26,\"tempf\":78.8,\"hum\":61.4}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Jia round\",\"model_id\":\"LYWSDCGQ\",\"hum\":61.4}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Jia round\",\"model_id\":\"LYWSDCGQ\",\"batt\":81}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Jia round\",\"model_id\":\"LYWSDCGQ\",\"batt\":62}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Jia round\",\"model_id\":\"LYWSDCGQ\",\"tempc\":27.4,\"tempf\":81.32}",
    "{\"brand\":\"Xiaomi\",\"model\":\"CG_THP\",\"model_id\":\"CGP1W\",\"tempc\":26.4,\"tempf\":79.52,\"hum\":64.7,\"pres\":100.63}",
    "{\"brand\":\"Xiaomi\",\"model\":\"CG_THP\",\"model_id\":\"CGP1W\",\"tempc\":27.1,\"tempf\":80.78,\"hum\":64.8,\"pres\":100.63}",
    "{\"brand\":\"Xiaomi\",\"model\":\"CG_THP\",\"model_id\":\"CGP1W\",\"tempc\":25.2,\"tempf\":77.36,\"hum\":58.6,\"pres\":100.86}",
    "{\"brand\":\"Xiaomi\",\"model\":\"CG_round_v2\",\"model_id\":\"CGG1\",\"tempc\":27.4,\"tempf\":81.32}",
    "{\"brand\":\"Xiaomi\",\"model\":\"CG_round_v2\",\"model_id\":\"CGG1\",\"tempc\":27.2,\"tempf\":80.96,\"hum\":63.8}",
    "{\"brand\":\"Xiaomi\",\"model\":\"CG_round_v1\",\"model_id\":\"CGG1\",\"tempc\":27.4,\"tempf\":81.32,\"hum\":62.6,\"batt\":13}",
    "{\"brand\":\"Xiaomi\",\"model\":\"CG_round_v1\",\"model_id\":\"CGG1\",\"tempc\":23.5,\"tempf\":74.3,\"hum\":28.3,\"batt\":100}",
    "{\"brand\":\"Xiaomi\",\"model\":\"CG_round_v1\",\"model_id\":\"CGG1\",\"tempc\":24.4,\"tempf\":75.92,\"hum\":31.5,\"batt\":100}",
    "{\"brand\":\"Xiaomi\",\"model\":\"CG_alarm_clock\",\"model_id\":\"CGD1\",\"tempc\":26.6,\"tempf\":79.88,\"hum\":63.9}",
    "{\"brand\":\"Xiaomi\",\"model\":\"CG_alarm_clock\",\"model_id\":\"CGD1\",\"tempc\":26.9,\"tempf\":80.42,\"hum\":67}",
    "{\"brand\":\"Xiaomi\",\"model\":\"CG_alarm_clock\",\"model_id\":\"CGD1\",\"tempc\":27,\"tempf\":80.6,\"hum\":65.7}",
    "{\"brand\":\"Qingping\",\"model\":\"TH lite\",\"model_id\":\"CGDK2\",\"tempc\":23.2,\"tempf\":73.76,\"hum\":91.1}",
    "{\"brand\":\"Qingping\",\"model\":\"TH lite\",\"model_id\":\"CGDK2\",\"tempc\":23.3,\"tempf\":73.94,\"hum\":54.1}",
    "{\"brand\":\"Qingping\",\"model\":\"TH lite\",\"model_id\":\"CGDK2\",\"tempc\":23.3,\"tempf\":73.94,\"hum\":54.1}",
    "{\"brand\":\"Qingping\",\"model\":\"Door sensor\",\"model_id\":\"CGH1\",\"open\":true}",
    "{\"brand\":\"Qingping\",\"model\":\"Door sensor\",\"model_id\":\"CGH1\",\"open\":false}",
    "{\"brand\":\"Qingping\",\"model\":\"Door sensor\",\"model_id\":\"CGH1\",\"open\":true}",
    "{\"brand\":\"Qingping\",\"model\":\"Door sensor\",\"model_id\":\"CGH1\",\"open\":false}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Formaldehyde detector\",\"model_id\":\"JQJCY01YM\",\"batt\":94}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Formaldehyde detector\",\"model_id\":\"JQJCY01YM\",\"hum\":59.5}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Formaldehyde detector\",\"model_id\":\"JQJCY01YM\",\"for\":0.08}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Formaldehyde detector\",\"model_id\":\"JQJCY01YM\",\"tempc\":19.6,\"tempf\":67.28}",
    "{\"brand\":\"Xiaomi\",\"model\":\"LYWSD03MMC\",\"model_id\":\"LYWSD03MMC_ATC\",\"tempc\":32.5,\"tempf\":90.5,\"hum\":62,\"batt\":81,\"volt\":2.939}",
    "{\"brand\":\"Xiaomi\",\"model\":\"LYWSD03MMC\",\"model_id\":\"LYWSD03MMC_PVVX\",\"tempc\":21.12,\"tempf\":70.016,\"hum\":50.53,\"batt\":100,\"volt\":3.143}",
    "{\"brand\":\"Qingping\",\"model\":\"Motion & Light\",\"model_id\":\"CGPR1\",\"lux\":0}",
    "{\"brand\":\"Xiaomi\",\"model\":\"RoPot\",\"model_id\":\"HHCCPOT002\",\"moi\":3}",
    "{\"brand\":\"Xiaomi\",\"model\":\"RoPot\",\"model_id\":\"HHCCPOT002\",\"fer\":1}",
    "{\"brand\":\"Xiaomi\",\"model\":\"MiLamp\",\"model_id\":\"MUE4094RT\",\"pres\":true,\"darkness\":29}",
};

const char* expected_mfg[] = {
    "{\"brand\":\"Inkbird\",\"model\":\"TH Sensor\",\"model_id\":\"IBS-TH1\",\"tempc\":26.62,\"tempf\":79.916,\"hum\":53.79,\"batt\":89}",
    "{\"brand\":\"GENERIC\",\"model\":\"TPMS\",\"model_id\":\"TPMS\",\"count\":1,\"pres\":222.708,\"tempc\":31.96,\"tempf\":89.528,\"batt\":51,\"alarm\":false}",
    "{\"brand\":\"GENERIC\",\"model\":\"iBeacon\",\"model_id\":\"IBEACON\",\"mfid\":\"4c00\",\"uuid\":\"426c7565436861726d426561636f6e73\",\"major\":3838,\"minor\":4949,\"txpower\":-59}",
    "{\"brand\":\"GENERIC\",\"model\":\"iBeacon\",\"model_id\":\"IBEACON\",\"mfid\":\"4c00\",\"uuid\":\"fda50693a4e24fb1afcfc6eb07647825\",\"major\":1,\"minor\":2,\"volt\":2.6}",
    "{\"brand\":\"GENERIC\",\"model\":\"ThermoBeacon\",\"model_id\":\"WS02/WS08\",\"tempc\":31.3125,\"tempf\":88.3625,\"hum\":70.75,\"volt\":3.160}",
    "{\"brand\":\"GENERIC\",\"model\":\"ThermoBeacon\",\"model_id\":\"WS02/WS08\",\"tempc\":25.125,\"tempf\":77.225,\"hum\":55.75,\"volt\":3}}",
    "{\"brand\":\"Govee\",\"model\":\"Bluetooth BBQ Thermometer\",\"model_id\":\"H5055\",\"tempc1\":23,\"tempf1\":73.4,\"tempc2\":115,\"tempf2\":239,\"batt\":70}",
    "{\"brand\":\"Govee\",\"model\":\"Bluetooth BBQ Thermometer\",\"model_id\":\"H5055\",\"tempc3\":86,\"tempf3\":186.8,\"tempc4\":145,\"tempf4\":293,\"batt\":65}",
    "{\"brand\":\"Govee\",\"model\":\"Bluetooth BBQ Thermometer\",\"model_id\":\"H5055\",\"tempc5\":92,\"tempf5\":197.6,\"tempc6\":55,\"tempf6\":131,\"batt\":97}",
    "{\"brand\":\"Govee\",\"model\":\"Bluetooth BBQ Thermometer\",\"model_id\":\"H5055\",\"tempc6\":84,\"tempf6\":183.2,\"batt\":83}",
    "{\"brand\":\"Govee\",\"model\":\"Smart Thermo Hygrometer\",\"model_id\":\"H5075\",\"tempc\":26.8,\"tempf\":80.24,\"hum\":52.6,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Thermo Hygrometer\",\"model_id\":\"H5072\",\"tempc\":27.5,\"tempf\":81.5,\"hum\":53.1,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Smart Thermo Hygrometer\",\"model_id\":\"H5102\",\"tempc\":21.9,\"tempf\":71.42,\"hum\":40.6,\"batt\":100}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-4XS\",\"tempc\":26,\"tempf\":78.8,\"tempc2\":26,\"tempf2\":78.8,\"tempc3\":25,\"tempf3\":77,\"tempc4\":25,\"tempf4\":77}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-4XS\",\"tempc\":26,\"tempf\":78.8,\"tempc3\":60,\"tempf3\":140,\"tempc4\":53,\"tempf4\":127.4}",
    "{\"brand\":\"Inkbird\",\"model\":\"TH Sensor\",\"model_id\":\"IBS-TH2/P01B\",\"tempc\":26.62,\"tempf\":79.916,\"hum\":53.79,\"batt\":89}",
    "{\"brand\":\"Inkbird\",\"model\":\"TH Sensor\",\"model_id\":\"IBS-TH2/P01B\",\"tempc\":-11.62,\"tempf\":11.084,\"hum\":53.79,\"batt\":89}",
    "{\"brand\":\"Inkbird\",\"model\":\"TH Sensor\",\"model_id\":\"IBS-TH2/P01B\",\"tempc\":26.92,\"tempf\":80.456,\"batt\":0}",
    "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"avg\":2.376,\"avgu\":\"kW\",\"sum\":21.2928,\"sumu\":\"kWh\",\"batt\":70}",
    "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"avg\":2.376,\"avgu\":\"kW\",\"sum\":21.2928,\"sumu\":\"kWh\",\"batt\":10,\"lowbatt\":true}",
    "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"avg\":2.376,\"avgu\":\"kW\",\"sum\":21.2928,\"sumu\":\"kWh\",\"batt\":100}",
    "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"avg\":2.376,\"avgu\":\"kW\",\"sum\":21.2928,\"sumu\":\"kWh\",\"batt\":100}",
    "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"avg\":5.304,\"avgu\":\"kW\",\"sum\":18.8804,\"sumu\":\"kWh\",\"batt\":50}",
    "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"avg\":0.900545785,\"avgu\":\"m³\",\"sum\":8.070345664,\"sumu\":\"m³\",\"batt\":60}",
    "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"avg\":2.010309278,\"avgu\":\"m³\",\"sum\":7.156003639,\"sumu\":\"m³\",\"batt\":20,\"lowbatt\":true}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X\",\"tempc\":23,\"tempf\":73.4,\"tempc2\":23,\"tempf2\":73.4}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X\",\"tempc\":28,\"tempf\":82.4,\"tempc2\":32,\"tempf2\":89.6}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X\",\"tempc2\":65,\"tempf2\":149}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X\",\"tempc\":22,\"tempf\":71.6,\"tempc2\":21,\"tempf2\":69.8}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X\",\"tempc2\":58,\"tempf2\":136.4}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X\",\"tempc\":22,\"tempf\":71.6,\"tempc2\":20.7,\"tempf2\":69.26}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X\",\"tempc\":33.2,\"tempf\":91.76,\"tempc2\":33.5,\"tempf2\":92.3}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X\",\"tempc2\":33.5,\"tempf2\":92.3}",
    "{\"brand\":\"Inkbird/Tenergy\",\"model\":\"iBBQ/SOLIS6\",\"model_id\":\"IBT-6XS/SOLIS-6\",\"tempc\":21,\"tempf\":69.8,\"tempc2\":20,\"tempf2\":68,\"tempc4\":21,\"tempf4\":69.8}",
    "{\"brand\":\"Ruuvi\",\"model\":\"RuuviTag\",\"model_id\":\"RuuviTag_RAWv1\",\"hum\":20.5,\"tempc\":26.3,\"tempf\":79.34,\"pres\":1027.66,\"accx\":-1,\"accy\":-1.726,\"accz\":0.714,\"volt\":2.899}",
    "{\"brand\":\"Ruuvi\",\"model\":\"RuuviTag\",\"model_id\":\"RuuviTag_RAWv1\",\"hum\":127.5,\"tempc\":127.99,\"tempf\":262.382,\"pres\":1155.35,\"accx\":32.767,\"accy\":32.767,\"accz\":32.767,\"volt\":65.535}",
    "{\"brand\":\"Ruuvi\",\"model\":\"RuuviTag\",\"model_id\":\"RuuviTag_RAWv1\",\"hum\":0,\"tempc\":-127.99,\"tempf\":-198.382,\"pres\":500,\"accx\":-32.767,\"accy\":-32.767,\"accz\":-32.767,\"volt\":0}",
    "{\"brand\":\"Ruuvi\",\"model\":\"RuuviTag\",\"model_id\":\"RuuviTag_RAWv2\",\"tempc\":24.3,\"tempf\":75.74,\"hum\":53.49,\"pres\":1000.44,\"accx\":0.004,\"accy\":-0.004,\"accz\":1.036,\"volt\":2.977,\"tx\":4,\"mov\":66,\"seq\":205}",
    "{\"brand\":\"Ruuvi\",\"model\":\"RuuviTag\",\"model_id\":\"RuuviTag_RAWv2\",\"tempc\":163.835,\"tempf\":326.903,\"hum\":163.8350,\"pres\":1155.34,\"accx\":32.767,\"accy\":32.767,\"accz\":32.767,\"volt\":3.646,\"tx\":20,\"mov\":254,\"seq\":65534}",
    "{\"brand\":\"Ruuvi\",\"model\":\"RuuviTag\",\"model_id\":\"RuuviTag_RAWv2\",\"tempc\":-163.835,\"tempf\":-262.903,\"hum\":0,\"pres\":500,\"accx\":-32.767,\"accy\":-32.767,\"accz\":-32.767,\"volt\":1.6,\"tx\":-40,\"mov\":0,\"seq\":0}",
    "{\"brand\":\"BlueMaestro\",\"model\":\"TempoDisc\",\"model_id\":\"BM_V23\",\"tempc\":23.9,\"tempf\":75.02,\"hum\":43.5,\"tempc2_dp\":10.8,\"tempf2_dp\":51.44,\"volt\":2.56}",
    "{\"brand\":\"GENERIC\",\"model\":\"MS-CDP\",\"model_id\":\"MS-CDP\",\"device\":\"Windows 10 Desktop\",\"salt\":\"ac6d90ec\",\"hash\":\"0132b3204cd39c7ced3e48436ba15dc6\"}",
    "{\"brand\":\"Inkbird/Tenergy\",\"model\":\"iBBQ/SOLIS6\",\"model_id\":\"IBT-6XS/SOLIS-6\",\"tempc\":20,\"tempf\":68,\"tempc2\":20,\"tempf2\":68,\"tempc4\":21,\"tempf4\":69.8}",
    "{\"brand\":\"GENERIC\",\"model\":\"BM2 Battery Monitor\",\"model_id\":\"BM2\",\"batt\":100}",
    "{\"brand\":\"GENERIC\",\"model\":\"BM2 Battery Monitor\",\"model_id\":\"BM2\",\"batt\":68}",
    "{\"brand\":\"SmartDry\",\"model\":\"Laundry Sensor\",\"model_id\":\"SDLS\",\"tempc\":34.210289,\"tempf\":93.5785202,\"hum\":100,\"shake\":false,\"shake_count\":82,\"volt\":2.952,\"wake\":true}",
    "{\"brand\":\"SmartDry\",\"model\":\"Laundry Sensor\",\"model_id\":\"SDLS\",\"tempc\":21.97295189,\"tempf\":71.5513134,\"hum\":97.91998291,\"shake\":true,\"shake_count\":8,\"volt\":2.951,\"wake\":true}",
    "{\"brand\":\"SmartDry\",\"model\":\"Laundry Sensor\",\"model_id\":\"SDLS\",\"tempc\":31.79714203,\"tempf\":89.23485565,\"hum\":99.49163818,\"shake\":false,\"shake_count\":51,\"volt\":2.956,\"wake\":true}",
    "{\"brand\":\"SmartDry\",\"model\":\"Laundry Sensor\",\"model_id\":\"SDLS\",\"tempc\":29.57704544,\"tempf\":85.23868179,\"hum\":55.99645996,\"shake\":false,\"shake_count\":74,\"volt\":2.929,\"wake\":true}",
    "{\"brand\":\"SmartDry\",\"model\":\"Laundry Sensor\",\"model_id\":\"SDLS\",\"tempc\":29.57704544,\"tempf\":85.23868179,\"hum\":55.99645996,\"shake\":false,\"shake_count\":74,\"volt\":2.929,\"wake\":false}",
    "{\"brand\":\"SmartDry\",\"model\":\"Laundry Sensor\",\"model_id\":\"SDLS\",\"tempc\":29.57704544,\"tempf\":85.23868179,\"hum\":55.99645996,\"shake\":false,\"shake_count\":74,\"volt\":2.929,\"wake\":false}",
};

const char* expected_uuid_mfgsvcdata[] = {
    "{\"brand\":\"Xiaomi/Amazfit\",\"model\":\"Mi Band/Smart Watch\",\"model_id\":\"MB/SW\",\"steps\":9101,\"act_bpm\":125}",
    "{\"brand\":\"Radioland\",\"model\":\"RDL52832\",\"model_id\":\"RDL52832\",\"mfid\":\"4c00\",\"uuid\":\"fda50693a4e24fb1afcfc6eb07647825\",\"major\":1,\"minor\":2,\"txpower\":-40,\"tempc\":24.2265625,\"tempf\":75.6078125,\"hum\":47.19921875,\"accx\":-0.02,\"accy\":0.01,\"accz\":0.97}",
    "{\"brand\":\"Radioland\",\"model\":\"RDL52832\",\"model_id\":\"RDL52832\",\"mfid\":\"4c00\",\"uuid\":\"fda50693a4e24fb1afcfc6eb07647825\",\"major\":1,\"minor\":2,\"txpower\":-40,\"tempc\":25.296875,\"tempf\":77.534375,\"hum\":58.22265625,\"accx\":0.14,\"accy\":0.09,\"accz\":-0.98}",
    "{\"brand\":\"Radioland\",\"model\":\"RDL52832\",\"model_id\":\"RDL52832\",\"mfid\":\"4c00\",\"uuid\":\"fda50693a4e24fb1afcfc6eb07647825\",\"major\":1,\"minor\":2,\"txpower\":-40,\"tempc\":26.2734375,\"tempf\":79.2921875,\"hum\":61.203125,\"accx\":0.2,\"accy\":-0.96,\"accz\":0.15}",
};

const char* expected_uuid[] = {
    "{\"brand\":\"Xiaomi/Amazfit\",\"model\":\"Mi Band/Smart Watch\",\"model_id\":\"MB/SW\",\"steps\":7842}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Smart_Scale\",\"model_id\":\"XMTZC01HM/XMTZC04HM\",\"weighing_mode\":\"person\",\"unit\":\"kg\",\"weight\":61.75}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Smart_Scale\",\"model_id\":\"XMTZC01HM/XMTZC04HM\",\"weighing_mode\":\"object\",\"unit\":\"kg\",\"weight\":9.55}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Smart_Scale\",\"model_id\":\"XMTZC01HM/XMTZC04HM\",\"weighing_mode\":\"person\",\"unit\":\"kg\",\"weight\":61.75}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Smart_Scale\",\"model_id\":\"XMTZC01HM/XMTZC04HM\",\"weighing_mode\":\"object\",\"unit\":\"kg\",\"weight\":9.55}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Smart_Scale\",\"model_id\":\"XMTZC01HM/XMTZC04HM\",\"weighing_mode\":\"person\",\"unit\":\"lb\",\"weight\":131.7}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Smart_Scale\",\"model_id\":\"XMTZC01HM/XMTZC04HM\",\"weighing_mode\":\"object\",\"unit\":\"lb\",\"weight\":19.1}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Smart_Scale\",\"model_id\":\"XMTZC01HM/XMTZC04HM\",\"weighing_mode\":\"person\",\"unit\":\"lb\",\"weight\":131.7}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Smart_Scale\",\"model_id\":\"XMTZC01HM/XMTZC04HM\",\"weighing_mode\":\"object\",\"unit\":\"lb\",\"weight\":19.1}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Body_Composition_Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"weighing_mode\":\"person\",\"unit\":\"kg\",\"weight\":72.45,\"impedance\":503}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Body_Composition_Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"weighing_mode\":\"person\",\"unit\":\"kg\",\"weight\":72.45}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Body_Composition_Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"weighing_mode\":\"object\",\"unit\":\"kg\",\"weight\":5.1}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Body_Composition_Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"weighing_mode\":\"person\",\"unit\":\"lb\",\"weight\":140.65,\"impedance\":503}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Body_Composition_Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"weighing_mode\":\"person\",\"unit\":\"lb\",\"weight\":140.65}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Body_Composition_Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"weighing_mode\":\"object\",\"unit\":\"lb\",\"weight\":12.3}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Body_Composition_Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"weighing_mode\":\"person\",\"unit\":\"kg\",\"weight\":72.45,\"impedance\":503}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Body_Composition_Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"weighing_mode\":\"person\",\"unit\":\"kg\",\"weight\":72.45}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Body_Composition_Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"weighing_mode\":\"object\",\"unit\":\"kg\",\"weight\":5.1}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Body_Composition_Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"weighing_mode\":\"person\",\"unit\":\"lb\",\"weight\":140.65,\"impedance\":503}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Body_Composition_Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"weighing_mode\":\"person\",\"unit\":\"lb\",\"weight\":140.65}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi_Body_Composition_Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"weighing_mode\":\"object\",\"unit\":\"lb\",\"weight\":12.3}",
    "{\"brand\":\"Mokosmart\",\"model\":\"Beacon\",\"model_id\":\"Mokobeacon\",\"batt\":100,\"x_axis\":-24576,\"y_axis\":-3841,\"z_axis\":-8189}",
    "{\"brand\":\"Mokosmart\",\"model\":\"BeaconX Pro\",\"model_id\":\"MBXPRO\",\"tempc\":27.4,\"tempf\":81.32,\"hum\":49.4,\"volt\":3.247}",
    "{\"brand\":\"GENERIC\",\"model\":\"GAEN\",\"model_id\":\"GAEN\",\"rpi\":\"e7c6d34c71e48baf278bd99be74685bc\",\"aem\":\"a78126ab\"}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Bot\",\"model_id\":\"X1\",\"mode\":\"on/off\",\"state\":\"off\",\"batt\":91}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Bot\",\"model_id\":\"X1\",\"mode\":\"on/off\",\"state\":\"on\",\"batt\":76}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Bot\",\"model_id\":\"X1\",\"mode\":\"onestate\",\"state\":\"on\",\"batt\":91}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Meter (Plus)\",\"model_id\":\"THX1/W230150X\",\"tempc\":25.8,\"tempf\":78.44,\"hum\":59,\"batt\":58}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Meter (Plus)\",\"model_id\":\"THX1/W230150X\",\"tempc\":-25.3,\"tempf\":-13.54,\"hum\":56,\"batt\":58}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Meter (Plus)\",\"model_id\":\"THX1/W230150X\",\"tempc\":26.7,\"tempf\":80.06,\"hum\":56,\"batt\":58}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Meter (Plus)\",\"model_id\":\"THX1/W230150X\",\"tempc\":25.5,\"tempf\":77.9,\"hum\":56,\"batt\":84}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Meter (Plus)\",\"model_id\":\"THX1/W230150X\",\"tempc\":25.2,\"tempf\":77.36,\"hum\":56,\"batt\":84}",
    "{\"brand\":\"rbaron\",\"model\":\"b-parasite\",\"model_id\":\"BPv1.0-1.2\",\"tempc\":25.6,\"tempf\":78.08,\"hum\":90.00076295,\"moi\":49.99923705,\"volt\":3.1}",
    "{\"brand\":\"rbaron\",\"model\":\"b-parasite\",\"model_id\":\"BPv1.0-1.2\",\"tempc\":22.7,\"tempf\":72.86,\"hum\":65.00038148,\"moi\":42.00045777,\"lux\":12500,\"volt\":2.95}",
    "{\"brand\":\"rbaron\",\"model\":\"b-parasite\",\"model_id\":\"BPv1.0-1.2\",\"tempc\":25.6,\"tempf\":78.08,\"hum\":90.00076295,\"moi\":49.99923705,\"volt\":3.1}",
    "{\"brand\":\"rbaron\",\"model\":\"b-parasite\",\"model_id\":\"BPv1.0-1.2\",\"tempc\":22.7,\"tempf\":72.86,\"hum\":65.00038148,\"moi\":42.00045777,\"lux\":12500,\"volt\":2.95}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Curtain\",\"model_id\":\"W070160X\",\"motion\":false,\"position\":25,\"calibrated\":true,\"lightlevel\":7,\"batt\":76}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Curtain\",\"model_id\":\"W070160X\",\"motion\":true,\"position\":25,\"calibrated\":false,\"lightlevel\":10,\"batt\":85}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Cleargrass clock\",\"model_id\":\"LYWSD02\",\"tempc\":25.6,\"tempf\":78.08}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Cleargrass clock\",\"model_id\":\"LYWSD02\",\"hum\":69}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Cleargrass clock\",\"model_id\":\"LYWSD02\",\"tempc\":26.5,\"tempf\":79.7}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Cleargrass clock\",\"model_id\":\"LYWSD02\",\"batt\":8}",
    "{\"brand\":\"Xiaomi/VegTrug\",\"model\":\"MiFlora\",\"model_id\":\"HHCCJCY01HHCC\",\"lux\":9971}",
    "{\"brand\":\"Xiaomi/VegTrug\",\"model\":\"MiFlora\",\"model_id\":\"HHCCJCY01HHCC\",\"moi\":30}",
    "{\"brand\":\"Xiaomi/VegTrug\",\"model\":\"MiFlora\",\"model_id\":\"HHCCJCY01HHCC\",\"tempc\":32,\"tempf\":89.6}",
    "{\"brand\":\"Xiaomi/VegTrug\",\"model\":\"MiFlora\",\"model_id\":\"HHCCJCY01HHCC\",\"fer\":0}",
    "{\"brand\":\"Xiaomi/VegTrug\",\"model\":\"MiFlora\",\"model_id\":\"HHCCJCY01HHCC\",\"tempc\":32,\"tempf\":89.6}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Motion Sensor\",\"model_id\":\"W110150X\",\"movement\":false,\"led\":false,\"sensingdistance\":\"middle\",\"lightlevel\":\"dark\",\"batt\":55}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Motion Sensor\",\"model_id\":\"W110150X\",\"movement\":true,\"led\":true,\"scopetested\":false,\"sensingdistance\":\"long\",\"lightlevel\":\"bright\",\"batt\":85}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Contact Sensor\",\"model_id\":\"W120150X\",\"contact\":\"closed\",\"movement\":true,\"lightlevel\":\"bright\",\"batt\":92}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Contact Sensor\",\"model_id\":\"W120150X\",\"contact\":\"open\",\"movement\":false,\"lightlevel\":\"dark\",\"batt\":87}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Contact Sensor\",\"model_id\":\"W120150X\",\"contact\":\"timeout not closed\",\"movement\":true,\"lightlevel\":\"bright\",\"scopetested\":false,\"batt\":65}",
    "{\"brand\":\"Qingping\",\"model\":\"Air Monitor Lite\",\"model_id\":\"CGDN1\",\"tempc\":29,\"tempf\":84.2,\"hum\":33.2,\"pm25\":113,\"pm10\":114,\"co2\":1005}",
    "{\"brand\":\"Qingping\",\"model\":\"Air Monitor Lite\",\"model_id\":\"CGDN1\",\"tempc\":24.9,\"tempf\":76.82,\"hum\":43.7,\"pm25\":381,\"pm10\":390,\"co2\":765}",
    "{\"brand\":\"Qingping\",\"model\":\"Air Monitor Lite\",\"model_id\":\"CGDN1\",\"tempc\":24.6,\"tempf\":76.28,\"hum\":42.7,\"pm25\":164,\"pm10\":215,\"co2\":711}",
    "{\"brand\":\"GENERIC\",\"model\":\"Service data\",\"model_id\":\"ServiceData\",\"batt\":33}",
};

// Service data test input [test name] [data]
const char* test_servicedata[][2] = {
    {"Mi jia round sensor", "5020aa0137dfaa33342d580d100404016602"},
    {"Mi jia round sensor", "5020aa018ddfaa33342d580610026602"},
    {"Mi jia round sensor", "5020aa0155aabbccddeeff0a100151"},
    {"Mi jia round sensor", "5020aa01123c0338342d580a10013e"},
    {"Mi jia round sensor", "5020aa018ddfaa33342d580410021201"},
    {"Cleargrass THP sensor", "08094c0140342d5801040801870207024f2702015c"},
    {"Cleargrass THP sensor", "08094c0140342d5801040f01880207024f2702015c"},
    {"Cleargrass THP sensor", "08094c0140342d580104fc004a0207026627020120"},
    {"Cleargrass round sensor", "5030470341743e10342d580410021201"},
    {"Cleargrass round sensor", "5030470383743e10342d580d100410017e02"},
    {"Cleargrass round sensor", "0807743e10342d5801041201720202010d"},
    {"Cleargrass round sensor", "8816YYYYYYYYYYYY0104eb001b01020164"},
    {"Cleargrass round sensor", "8816xxxxxxxxxxxx0104f4003b01020164"},
    {"Cleargrass alarm clock", "080caffd50342d5801040a017f0202012a"},
    {"Cleargrass alarm clock", "080caffd50342d5801040d019e0202012a"},
    {"Cleargrass alarm clock", "080caffd50342d5801040e01910202012a"},
    {"Qingping TH lite", "8810799111342d580104e8008f0302010b"},
    {"Qingping TH lite", "8810799111342d580104e9001d0202010b"},
    {"Qingping TH lite", "0810799111342d580104e9001d0202010b"},
    {"Qingping Door Open", "0804751060342d580201600f012b0f0100"},
    {"Qingping Door Close", "0804751060342d580201600f01420f0101"},
    {"Qingping Door Open Action", "4804751060342d580401000f01cb"},
    {"Qingping Door Close Action", "4804751060342d580401010f01d5"},
    {"Formaldehyde detector", "5020df02383a5c014357480a10015e"},
    {"Formaldehyde detector", "5020df02283a5c014357480610025302"},
    {"Formaldehyde detector", "5020df025b3a5c014357481010020800"},
    {"Formaldehyde detector", "5120df023e3a5c01435748041002c400"},
    {"LYWSD03MMC_ATC", "a4c138d5d49801453e510b7b62"},
    {"LYWSD03MMC_PVVX", "5601cf38c1a44008bd13470c64cc0f"},
    {"Qingping Motion & Light", "0812443660342d580201530f0118090400000000"},
    {"RoPot", "71205d0183d20c6d8d7cc40d08100103"},
    {"RoPot", "71205d0188d20c6d8d7cc40d0910020100"},
    {"MiLamp", "4030dd031d0300010100"},
};

TheengsDecoder::BLE_ID_NUM test_svcdata_id_num[]{
  TheengsDecoder::BLE_ID_NUM::LYWSDCGQ,
  TheengsDecoder::BLE_ID_NUM::LYWSDCGQ,
  TheengsDecoder::BLE_ID_NUM::LYWSDCGQ,
  TheengsDecoder::BLE_ID_NUM::LYWSDCGQ,
  TheengsDecoder::BLE_ID_NUM::LYWSDCGQ,
  TheengsDecoder::BLE_ID_NUM::CGP1W,
  TheengsDecoder::BLE_ID_NUM::CGP1W,
  TheengsDecoder::BLE_ID_NUM::CGP1W,
  TheengsDecoder::BLE_ID_NUM::CGG1_V2,
  TheengsDecoder::BLE_ID_NUM::CGG1_V2,
  TheengsDecoder::BLE_ID_NUM::CGG1_V1,
  TheengsDecoder::BLE_ID_NUM::CGG1_V1,
  TheengsDecoder::BLE_ID_NUM::CGG1_V1,
  TheengsDecoder::BLE_ID_NUM::CGD1,
  TheengsDecoder::BLE_ID_NUM::CGD1,
  TheengsDecoder::BLE_ID_NUM::CGD1,
  TheengsDecoder::BLE_ID_NUM::CGDK2,
  TheengsDecoder::BLE_ID_NUM::CGDK2,
  TheengsDecoder::BLE_ID_NUM::CGDK2,
  TheengsDecoder::BLE_ID_NUM::CGH1,
  TheengsDecoder::BLE_ID_NUM::CGH1,
  TheengsDecoder::BLE_ID_NUM::CGH1,
  TheengsDecoder::BLE_ID_NUM::CGH1,
  TheengsDecoder::BLE_ID_NUM::JQJCY01YM,
  TheengsDecoder::BLE_ID_NUM::JQJCY01YM,
  TheengsDecoder::BLE_ID_NUM::JQJCY01YM,
  TheengsDecoder::BLE_ID_NUM::JQJCY01YM,
  TheengsDecoder::BLE_ID_NUM::LYWSD03MMC_ATC,
  TheengsDecoder::BLE_ID_NUM::LYWSD03MMC_PVVX,
  TheengsDecoder::BLE_ID_NUM::CGPR1,
  TheengsDecoder::BLE_ID_NUM::HHCCPOT002,
  TheengsDecoder::BLE_ID_NUM::HHCCPOT002,
  TheengsDecoder::BLE_ID_NUM::MUE4094RT,
};

// manufacturer data test input [test name] [device name] [data]
const char* test_mfgdata[][3] = {
    {"Inkbird TH1", "sps", "660a03150110805908"},
    {"TPMS", "TPMS1_10CA8F", "000180eaca10ca8ff46503007c0c00003300"},
    {"iBeacon", "BlueCharm_135727", "4c000215426c7565436861726d426561636f6e730efe1355c5"},
    {"iBeacon", "NRF51822", "4c000215fda50693a4e24fb1afcfc6eb07647825000100021a"},
    {"WS02/WS08", "ThermoBeacon", "100000001a110000f770580cf5016c0443090000"},
    {"WS02/WS08", "ThermoBeacon", "11000000ae0a000023dcb80b92017c03cdbb0300"},
    {"H5055", "GVH5055", "cf040400461b061700ffff2c01067300ffff2c010000"},
    {"H5055", "GVH5055", "cf040400417f065600ffff2c01069100ffff2c010"},
    {"H5055", "GVH5055", "cf04040061bf065c00ffff2c01063700ffff2c010000"},
    {"H5055", "GVH5055", "cf040400538f06ffffffff2c01065400ffff2c010"},
    {"H5075", "GVH5075_1234", "88ec000418ee6400"},
    {"H5072", "GVH5072_1234", "88ec0004344b6400"},
    {"H5102", "GVH5102_1234", "0100010103590e64"},
    {"IBT-4XS", "iBBQ", "0000000010082c40abe604010401fa00fa00"},
    {"IBT-4XS", "iBBQ", "0000000010082c40abe60401f6ff58021202"},
    {"Inkbird TH2", "tps", "660a03150110805908"},
    {"Inkbird TH2", "tps", "76fb03150110805908"},
    {"Inkbird P01B", "tps", "840affff00a6060008"},
    {"iNodeEM", "electricity", "90826300f0cf0000c409820080"},
    {"iNodeEM", "electricity", "94826300f0cf0000c409260080"},
    {"iNodeEM", "electricity", "90826300f0cf0000c409b60080"},
    {"iNodeEM", "electricity", "92826300f0cf0000c409160080"},
    {"iNodeEM", "electricity", "9082dd0061b80000c4096b0080"},
    {"iNodeEM", "water", "90826300f0cf0000c419760080"},
    {"iNodeEM", "water", "9682dd0061b80000c4193b0080"},
    {"IBT-2X", "iBBQ", "00000000fc45c30c458ee600e600"},
    {"IBT-2X", "iBBQ", "00000000fc45c30c458e18014001"},
    {"IBT-2X", "iBBQ", "00000000fc45c30c458ef6ff8a02"},
    {"IBT-2X", "iBBQ", "00000000fc45c30d38a8dc00d200"},
    {"IBT-2X", "iBBQ", "00000000fc45c30d38a8f6ff4402"},
    {"IBT-2XS", "xBBQ", "01000000fc45c30d38a8dc00cf00"},
    {"IBT-2XS", "xBBQ", "010000004a11000076724c014f01"},
    {"IBT-2XS", "xBBQ", "010000004a1100007672ffff4f01"},
    {"IBT-6XS", "iBBQ", "000000003403de2745cdd200c800f6ffd200f6fff6ff"},
    {"RuuviTag RAWv1", "RuuviTag", "990403291A1ECE1EFC18F94202CA0B53"},
    {"RuuviTag RAWv1", "RuuviTag maximum values", "990403FF7F63FFFF7FFF7FFF7FFFFFFF"},
    {"RuuviTag RAWv1", "RuuviTag minimum values", "99040300FF6300008001800180010000"},
    {"RuuviTag RAWv2", "RuuviTag", "99040512FC5394C37C0004FFFC040CAC364200CDCBB8334C884F"},
    {"RuuviTag RAWv2", "RuuviTag maximum values", "9904057FFFFFFEFFFE7FFF7FFF7FFFFFDEFEFFFECBB8334C884F"},
    {"RuuviTag RAWv2", "RuuviTag minimum values", "9904058001000000008001800180010000000000CBB8334C884F"},
    {"BM_V23", "V23", "330117560e10177000ef01b3006c0100"},
    {"MS-CDP", "Windows 10 Desktop", "060001092002ac6d90ec0132b3204cd39c7ced3e48436ba15dc6314778"},
    {"SOLIS_6", "iBBQ", "000000000cb2b71b5b18c800c800f6ffd200f6fff6ff"},
    {"BM2", "Battery Monitor", "4c000215655f83caae16a10a702e31f30d58dd82f644000064"},
    {"BM2", "Battery Monitor", "4c000215655f83caae16a10a702e31f30d58dd82f441423144"},
    {"SmartDry", "Laundry Sensor", "ae0156d708420000c84252006907"},
    {"SmartDry", "Laundry Sensor", "ae019bc8af4108d7c34208016807"},
    {"SmartDry", "Laundry Sensor", "ae018c60fe41b8fbc64233006d07"},
    {"SmartDry", "Laundry Sensor", "ae01ca9dec4160fc5f424a005207"},
    {"SmartDry", "Laundry Sensor", "ae01ca9dec4160fc5f424a005200"},
    {"SmartDry", "Laundry Sensor", "ae01ca9dec4160fc5f424a005206"},
};

TheengsDecoder::BLE_ID_NUM test_mfgdata_id_num[]{
  TheengsDecoder::BLE_ID_NUM::IBSTH1,
  TheengsDecoder::BLE_ID_NUM::TPMS,
  TheengsDecoder::BLE_ID_NUM::IBEACON,
  TheengsDecoder::BLE_ID_NUM::IBEACON,
  TheengsDecoder::BLE_ID_NUM::THERMOBEACON,
  TheengsDecoder::BLE_ID_NUM::THERMOBEACON,
  TheengsDecoder::BLE_ID_NUM::H5055,
  TheengsDecoder::BLE_ID_NUM::H5055,
  TheengsDecoder::BLE_ID_NUM::H5055,
  TheengsDecoder::BLE_ID_NUM::H5055,
  TheengsDecoder::BLE_ID_NUM::H5075,
  TheengsDecoder::BLE_ID_NUM::H5072,
  TheengsDecoder::BLE_ID_NUM::H5102,
  TheengsDecoder::BLE_ID_NUM::IBT4XS,
  TheengsDecoder::BLE_ID_NUM::IBT4XS,
  TheengsDecoder::BLE_ID_NUM::IBSTH2,
  TheengsDecoder::BLE_ID_NUM::IBSTH2,
  TheengsDecoder::BLE_ID_NUM::IBSTH2,
  TheengsDecoder::BLE_ID_NUM::INODEEM,
  TheengsDecoder::BLE_ID_NUM::INODEEM,
  TheengsDecoder::BLE_ID_NUM::INODEEM,
  TheengsDecoder::BLE_ID_NUM::INODEEM,
  TheengsDecoder::BLE_ID_NUM::INODEEM,
  TheengsDecoder::BLE_ID_NUM::INODEEM,
  TheengsDecoder::BLE_ID_NUM::INODEEM,
  TheengsDecoder::BLE_ID_NUM::IBT_2X,
  TheengsDecoder::BLE_ID_NUM::IBT_2X,
  TheengsDecoder::BLE_ID_NUM::IBT_2X,
  TheengsDecoder::BLE_ID_NUM::IBT_2X,
  TheengsDecoder::BLE_ID_NUM::IBT_2X,
  TheengsDecoder::BLE_ID_NUM::IBT_2X,
  TheengsDecoder::BLE_ID_NUM::IBT_2X,
  TheengsDecoder::BLE_ID_NUM::IBT_2X,
  TheengsDecoder::BLE_ID_NUM::IBT6XS_SOLIS,
  TheengsDecoder::BLE_ID_NUM::RUUVITAG_RAWV1,
  TheengsDecoder::BLE_ID_NUM::RUUVITAG_RAWV1,
  TheengsDecoder::BLE_ID_NUM::RUUVITAG_RAWV1,
  TheengsDecoder::BLE_ID_NUM::RUUVITAG_RAWV2,
  TheengsDecoder::BLE_ID_NUM::RUUVITAG_RAWV2,
  TheengsDecoder::BLE_ID_NUM::RUUVITAG_RAWV2,
  TheengsDecoder::BLE_ID_NUM::BM_V23,
  TheengsDecoder::BLE_ID_NUM::MS_CDP,
  TheengsDecoder::BLE_ID_NUM::IBT6XS_SOLIS,
  TheengsDecoder::BLE_ID_NUM::BM2,
  TheengsDecoder::BLE_ID_NUM::BM2,
  TheengsDecoder::BLE_ID_NUM::SMARTDRY,
  TheengsDecoder::BLE_ID_NUM::SMARTDRY,
  TheengsDecoder::BLE_ID_NUM::SMARTDRY,
  TheengsDecoder::BLE_ID_NUM::SMARTDRY,
  TheengsDecoder::BLE_ID_NUM::SMARTDRY,
  TheengsDecoder::BLE_ID_NUM::SMARTDRY,
};

// uuid test input [test name] [uuid] [manufacturer data] [service data]
const char* test_uuid_mfgsvcdata[][4] = {
    {"MiBand", "fee0", "57010202017dffffffffffffffffffffffffff02de7b8490725c2", "8d230000"},
    {"RDL52832", "0318", "4c000215fda50693a4e24fb1afcfc6eb0764782500010002d8", "183a2f33010000020000000100000907"},
    {"RDL52832", "0318", "4c000215fda50693a4e24fb1afcfc6eb0764782500010002d8", "194c3a39000001040000000901000908"},
    {"RDL52832", "0318", "4c000215fda50693a4e24fb1afcfc6eb0764782500010002d8", "1a463d34000002000100090600000105"},
};

TheengsDecoder::BLE_ID_NUM test_uuid_mfgsvcdata_id_num[]{
  TheengsDecoder::BLE_ID_NUM::MIBAND,
  TheengsDecoder::BLE_ID_NUM::RDL52832,
  TheengsDecoder::BLE_ID_NUM::RDL52832,
  TheengsDecoder::BLE_ID_NUM::RDL52832,
};

// uuid test input [test name] [uuid] [data source] [data]
const char* test_uuid[][4] = {
    {"MiBand", "fee0", "servicedata", "a21e0000"},
    {"Mi_Smart_Scale", "0x181d", "servicedata", "223e30e607020e10293a"},
    {"Mi_Smart_Scale", "0x181d", "servicedata", "627607e607020e10293a"},
    {"Mi_Smart_Scale", "0x181d", "servicedata", "a23e30e607020e10293a"},
    {"Mi_Smart_Scale", "0x181d", "servicedata", "e27607e607020e10293a"},
    {"Mi_Smart_Scale", "0x181d", "servicedata", "237233e607020e10293a"},
    {"Mi_Smart_Scale", "0x181d", "servicedata", "637607e607020e10293a"},
    {"Mi_Smart_Scale", "0x181d", "servicedata", "a37233e607020e10293a"},
    {"Mi_Smart_Scale", "0x181d", "servicedata", "e37607e607020e10293a"},
    {"Mi_Body_Scale_2", "0x181b", "servicedata", "0226e607020e10293af7019a38"},
    {"Mi_Body_Scale_2", "0x181b", "servicedata", "0224e607020e10293a00009a38"},
    {"Mi_Body_Scale_2", "0x181b", "servicedata", "0624e607020e10293a0000fc03"},
    {"Mi_Body_Scale_2", "0x181b", "servicedata", "0326e607020e10293af701f136"},
    {"Mi_Body_Scale_2", "0x181b", "servicedata", "0324e607020e10293a0000f136"},
    {"Mi_Body_Scale_2", "0x181b", "servicedata", "0724e607020e10293a0000ce04"},
    {"Mi_Body_Scale_2", "0x181b", "servicedata", "02a6e607020e10293af7019a38"},
    {"Mi_Body_Scale_2", "0x181b", "servicedata", "02a4e607020e10293a00009a38"},
    {"Mi_Body_Scale_2", "0x181b", "servicedata", "06a4e607020e10293a0000fc03"},
    {"Mi_Body_Scale_2", "0x181b", "servicedata", "03a6e607020e10293af701f136"},
    {"Mi_Body_Scale_2", "0x181b", "servicedata", "03a4e607020e10293a0000f136"},
    {"Mi_Body_Scale_2", "0x181b", "servicedata", "07a4e607020e10293a0000ce04"},
    {"Mokobeacon", "0xff01", "servicedata", "64000000005085a000f0ffe003"},
    {"MokoXPro", "feab", "servicedata", "70000a011201ee0caf03def14635998a"},
    {"GAEN", "fd6f", "servicedata", "e7c6d34c71e48baf278bd99be74685bca78126ab"},
    {"Switchbot_S1", "0d00", "servicedata", "48d0db"},
    {"Switchbot_S1", "0d00", "servicedata", "4890cc"},
    {"Switchbot_S1", "0d00", "servicedata", "48005b"},
    {"Switchbot_Meter_Plus", "fd3d", "servicedata", "6900ba18993b"},
    {"Switchbot_Meter_Plus", "fd3d", "servicedata", "6900ba031938"},
    {"Switchbot_Meter_Plus", "fd3d", "servicedata", "6900ba379ab8"},
    {"Switchbot_Meter", "0d00", "servicedata", "540054459938"},
    {"Switchbot_Meter", "0d00", "servicedata", "5400d40299b8"},
    {"bParasite", "181a", "servicedata", "10c30c1c6400e6667fffaabbccddeeff"},
    {"bParasite", "181a", "servicedata", "11c30b8658aca6666b85aabbccddeeff30d4"},
    {"bParasite", "181a", "servicedata", "20c30c1c0a00e6667fffaabbccddeeff"},
    {"bParasite", "181a", "servicedata", "21c30b8608dea6666b85aabbccddeeff30d4"},
    {"Switchbot_Curtain", "0d00", "servicedata", "63c04c1970"},
    {"Switchbot_Curtain", "0d00", "servicedata", "63805599a0"},
    {"Cleargrass clock", "fe95", "servicedata", "70205b04756ab883c8593f090410020001"},
    {"Cleargrass clock", "fe95", "servicedata", "70205b04dc6ab883c8593f09061002b202"},
    {"Cleargrass clock", "fe95", "servicedata", "70205b04756ab883c8593f090410020901"},
    {"Cleargrass clock", "fe95", "servicedata", "70205b04859638b1002ee7090a100108"},
    {"Mi flora", "fe95", "servicedata", "712098004a63b6658d7cc40d071003f32600"},
    {"Mi flora", "fe95", "servicedata", "712098005763b6658d7cc40d0810011e"},
    {"Mi flora", "fe95", "servicedata", "712098000163b6658d7cc40d0410024001"},
    {"Mi flora", "fe95", "servicedata", "712098000863b6658d7cc40d0910020000"},
    {"VegTrug flora", "fe95", "servicedata", "7120bc030163b6658d7cc40d0410024001"},
    {"Switchbot_MotionSensor", "0d00", "servicedata", "73b037000045"},
    {"Switchbot_MotionSensor", "0d00", "servicedata", "7340d50000f2"},
    {"Switchbot_Contact", "0d00", "servicedata", "64c05c010000000000"},
    {"Switchbot_Contact", "0d00", "servicedata", "6480d7020000000000"},
    {"Switchbot_Contact", "0d00", "servicedata", "6440c1050000000000"},
    {"Qingping Air Monitor Lite", "0xfdcd", "servicedata", "080eaabbccddeeff010422014c011204710072001302ed03"},
    {"Qingping Air Monitor Lite", "0xfdcd", "servicedata", "880eaabbccddeeff0104f900b50112047d0186011302fd02"},
    {"Qingping Air Monitor Lite", "0xfdcd", "servicedata", "880eaabbccddeeff0104f600ab011204a400d7001302c702"},
    {"Service data", "0x180f", "servicedata", "21"},
};

TheengsDecoder::BLE_ID_NUM test_uuid_id_num[]{
  TheengsDecoder::BLE_ID_NUM::MIBAND,
  TheengsDecoder::BLE_ID_NUM::XMTZC04HM,
  TheengsDecoder::BLE_ID_NUM::XMTZC04HM,
  TheengsDecoder::BLE_ID_NUM::XMTZC04HM,
  TheengsDecoder::BLE_ID_NUM::XMTZC04HM,
  TheengsDecoder::BLE_ID_NUM::XMTZC04HM,
  TheengsDecoder::BLE_ID_NUM::XMTZC04HM,
  TheengsDecoder::BLE_ID_NUM::XMTZC04HM,
  TheengsDecoder::BLE_ID_NUM::XMTZC04HM,
  TheengsDecoder::BLE_ID_NUM::XMTZC05HM,
  TheengsDecoder::BLE_ID_NUM::XMTZC05HM,
  TheengsDecoder::BLE_ID_NUM::XMTZC05HM,
  TheengsDecoder::BLE_ID_NUM::XMTZC05HM,
  TheengsDecoder::BLE_ID_NUM::XMTZC05HM,
  TheengsDecoder::BLE_ID_NUM::XMTZC05HM,
  TheengsDecoder::BLE_ID_NUM::XMTZC05HM,
  TheengsDecoder::BLE_ID_NUM::XMTZC05HM,
  TheengsDecoder::BLE_ID_NUM::XMTZC05HM,
  TheengsDecoder::BLE_ID_NUM::XMTZC05HM,
  TheengsDecoder::BLE_ID_NUM::XMTZC05HM,
  TheengsDecoder::BLE_ID_NUM::XMTZC05HM,
  TheengsDecoder::BLE_ID_NUM::MOKOBEACON,
  TheengsDecoder::BLE_ID_NUM::MOKOBEACONXPRO,
  TheengsDecoder::BLE_ID_NUM::GAEN,
  TheengsDecoder::BLE_ID_NUM::SBS1,
  TheengsDecoder::BLE_ID_NUM::SBS1,
  TheengsDecoder::BLE_ID_NUM::SBS1,
  TheengsDecoder::BLE_ID_NUM::SBMT,
  TheengsDecoder::BLE_ID_NUM::SBMT,
  TheengsDecoder::BLE_ID_NUM::SBMT,
  TheengsDecoder::BLE_ID_NUM::SBMT,
  TheengsDecoder::BLE_ID_NUM::SBMT,
  TheengsDecoder::BLE_ID_NUM::BPARASITE,
  TheengsDecoder::BLE_ID_NUM::BPARASITE,
  TheengsDecoder::BLE_ID_NUM::BPARASITE,
  TheengsDecoder::BLE_ID_NUM::BPARASITE,
  TheengsDecoder::BLE_ID_NUM::SBCU,
  TheengsDecoder::BLE_ID_NUM::SBCU,
  TheengsDecoder::BLE_ID_NUM::LYWSD02,
  TheengsDecoder::BLE_ID_NUM::LYWSD02,
  TheengsDecoder::BLE_ID_NUM::LYWSD02,
  TheengsDecoder::BLE_ID_NUM::LYWSD02,
  TheengsDecoder::BLE_ID_NUM::HHCCJCY01HHCC,
  TheengsDecoder::BLE_ID_NUM::HHCCJCY01HHCC,
  TheengsDecoder::BLE_ID_NUM::HHCCJCY01HHCC,
  TheengsDecoder::BLE_ID_NUM::HHCCJCY01HHCC,
  TheengsDecoder::BLE_ID_NUM::HHCCJCY01HHCC,
  TheengsDecoder::BLE_ID_NUM::SBMS,
  TheengsDecoder::BLE_ID_NUM::SBMS,
  TheengsDecoder::BLE_ID_NUM::SBCS,
  TheengsDecoder::BLE_ID_NUM::SBCS,
  TheengsDecoder::BLE_ID_NUM::SBCS,
  TheengsDecoder::BLE_ID_NUM::CGDN1,
  TheengsDecoder::BLE_ID_NUM::CGDN1,
  TheengsDecoder::BLE_ID_NUM::CGDN1,
  TheengsDecoder::BLE_ID_NUM::SERVICE_DATA,
};

template <typename T>
static bool floatEqual(T f1, T f2) {
  return (fabs(f1 - f2) <= std::numeric_limits<T>::epsilon() * fmax(fabs(f1), fabs(f2)));
}

bool checkResult(JsonObject result, JsonObject expected) {
  if (result.size() != expected.size()) {
    std::cout << "Key:value count mismatch, result " << result.size() << ", expected " << expected.size() << std::endl;
    std::cout << "Expected: ";
    serializeJson(expected, std::cout);
    std::cout << std::endl;
    std::cout << "Got JSON: ";
    serializeJson(result, std::cout);
    return false;
  }

  for (JsonPair kv : expected) {
    if (result[kv.key()] != kv.value()) {
      if (kv.value().is<double>() || kv.value().is<float>()) {
        if (floatEqual(kv.value().as<float>(), result[kv.key()].as<float>())) {
          continue;
        }
      }

      printf("%s test failed at key: %s\n", result["name"].as<const char*>(), kv.key().c_str());
      std::cout << "Expected: ";
      serializeJson(expected, std::cout);
      std::cout << std::endl;
      std::cout << "Got JSON: ";
      serializeJson(result, std::cout);
      return false;
    }
  }
  return true;
}

int main() {
  StaticJsonDocument<2048> doc;
  JsonObject bleObject;
  TheengsDecoder decoder;
  int decode_res = -1;

  for (unsigned int i = 0; i < sizeof(test_servicedata) / sizeof(test_servicedata[0]); ++i) {
    doc.clear();
    std::cout << "trying " << test_servicedata[i][0] << " : " << test_servicedata[i][1] << std::endl;
    doc["servicedata"] = test_servicedata[i][1];
    bleObject = doc.as<JsonObject>();

    decode_res = decoder.decodeBLEJson(bleObject);
    if (decode_res == test_svcdata_id_num[i]) {
      std::cout << "Found : " << decode_res << " ";
      bleObject.remove("servicedata");
      serializeJson(doc, std::cout);
      std::cout << std::endl;

      StaticJsonDocument<2048> doc_exp;
      JsonObject expected = doc_exp.to<JsonObject>();
      deserializeJson(doc_exp, expected_servicedata[i]);

      if (!checkResult(bleObject, expected)) {
        return 1;
      }

      std::string brand = decoder.getTheengAttribute(expected["model_id"].as<const char*>(), "brand");
      std::string model = decoder.getTheengAttribute(expected["model_id"].as<const char*>(), "model");
      if (brand == "" || model == "") {
        std::cout << "Error reading attributes" << std::endl;
        return 1;
      }
      std::cout << "model: " << model << ",  brand: " << brand << std::endl;

      DeserializationError error = deserializeJson(doc_exp, decoder.getTheengProperties(bleObject["model_id"].as<const char*>()));
      if (error) {
        std::cout << "trying " << test_mfgdata[i][0] << " : " << test_mfgdata[i][1] << " : " << test_mfgdata[i][2] << std::endl;
        return 1;
      }

      std::cout << "Properties: ";
      serializeJson(doc_exp, std::cout);
      std::cout << std::endl;
    } else {
      std::cout << "FAILED! Error parsing: " << test_servicedata[i][0] << " : " << test_servicedata[i][1] << std::endl;
      return 1;
    }
  }

  for (unsigned int i = 0; i < sizeof(test_mfgdata) / sizeof(test_mfgdata[0]); ++i) {
    doc.clear();
    std::cout << "trying " << test_mfgdata[i][0] << " : " << test_mfgdata[i][1] << " : " << test_mfgdata[i][2] << std::endl;
    doc["name"] = test_mfgdata[i][1];
    doc["manufacturerdata"] = test_mfgdata[i][2];
    bleObject = doc.as<JsonObject>();

    decode_res = decoder.decodeBLEJson(bleObject);
    if (decode_res == test_mfgdata_id_num[i]) {
      std::cout << "Found : " << decode_res << " ";
      bleObject.remove("name");
      bleObject.remove("manufacturerdata");
      serializeJson(doc, std::cout);
      std::cout << std::endl;

      StaticJsonDocument<2048> doc_exp;
      JsonObject expected = doc_exp.to<JsonObject>();
      deserializeJson(doc_exp, expected_mfg[i]);

      if (!checkResult(bleObject, expected)) {
        return 1;
      }

      std::string brand = decoder.getTheengAttribute(expected["model_id"].as<const char*>(), "brand");
      std::string model = decoder.getTheengAttribute(expected["model_id"].as<const char*>(), "model");
      if (brand == "" || model == "") {
        std::cout << "Error reading attributes" << std::endl;
        return 1;
      }
      std::cout << "model: " << model << ",  brand: " << brand << std::endl;

      DeserializationError error = deserializeJson(doc_exp, decoder.getTheengProperties(bleObject["model_id"].as<const char*>()));
      if (error) {
        std::cout << "deserializeJson() failed: " << error << std::endl;
        return 1;
      }

      std::cout << "Properties: ";
      serializeJson(doc_exp, std::cout);
      std::cout << std::endl;
    } else {
      std::cout << "FAILED! Error parsing: " << test_mfgdata[i][0]
                << " : " << test_mfgdata[i][1] << " : "
                << test_mfgdata[i][2] << "decode res: " << decode_res << std::endl;
      return 1;
    }
  }

  for (unsigned int i = 0; i < sizeof(test_uuid_mfgsvcdata) / sizeof(test_uuid_mfgsvcdata[0]); ++i) {
    doc.clear();
    std::cout << "trying " << test_uuid_mfgsvcdata[i][0] << " : " << test_uuid_mfgsvcdata[i][1] << std::endl;
    doc["servicedatauuid"] = test_uuid_mfgsvcdata[i][1];
    doc["manufacturerdata"] = test_uuid_mfgsvcdata[i][2];
    doc["servicedata"] = test_uuid_mfgsvcdata[i][3];
    bleObject = doc.as<JsonObject>();

    decode_res = decoder.decodeBLEJson(bleObject);
    if (decode_res == test_uuid_mfgsvcdata_id_num[i]) {
      std::cout << "Found : " << decode_res << " ";
      bleObject.remove("servicedatauuid");
      bleObject.remove("manufacturerdata");
      bleObject.remove("servicedata");
      serializeJson(doc, std::cout);
      std::cout << std::endl;

      StaticJsonDocument<2048> doc_exp;
      JsonObject expected = doc_exp.to<JsonObject>();
      deserializeJson(doc_exp, expected_uuid_mfgsvcdata[i]);

      if (!checkResult(bleObject, expected)) {
        return 1;
      }

      std::string brand = decoder.getTheengAttribute(expected["model_id"].as<const char*>(), "brand");
      std::string model = decoder.getTheengAttribute(expected["model_id"].as<const char*>(), "model");
      if (brand == "" || model == "") {
        std::cout << "Error reading attributes" << std::endl;
        return 1;
      }
      std::cout << "model: " << model << ",  brand: " << brand << std::endl;

      DeserializationError error = deserializeJson(doc_exp, decoder.getTheengProperties(bleObject["model_id"].as<const char*>()));
      if (error) {
        std::cout << "deserializeJson() failed: " << error << std::endl;
        return 1;
      }
      std::cout << "Properties: ";
      serializeJson(doc_exp, std::cout);
      std::cout << std::endl;
    } else {
      std::cout << "FAILED! Error parsing: " << test_uuid_mfgsvcdata[i][0] << " : " << test_uuid_mfgsvcdata[i][1] << " : " << test_uuid_mfgsvcdata[i][2] << " : " << test_uuid_mfgsvcdata[i][3] << std::endl;
      serializeJson(doc, std::cout);
      std::cout << std::endl;
      return 1;
    }
  }

  for (unsigned int i = 0; i < sizeof(test_uuid) / sizeof(test_uuid[0]); ++i) {
    doc.clear();
    std::cout << "trying " << test_uuid[i][0] << " : " << test_uuid[i][1] << std::endl;
    doc[test_uuid[i][2]] = test_uuid[i][3];
    doc["servicedatauuid"] = test_uuid[i][1];
    bleObject = doc.as<JsonObject>();

    decode_res = decoder.decodeBLEJson(bleObject);
    if (decode_res == test_uuid_id_num[i]) {
      std::cout << "Found : " << decode_res << " ";
      bleObject.remove("servicedatauuid");
      bleObject.remove(test_uuid[i][2]);
      serializeJson(doc, std::cout);
      std::cout << std::endl;

      StaticJsonDocument<2048> doc_exp;
      JsonObject expected = doc_exp.to<JsonObject>();
      deserializeJson(doc_exp, expected_uuid[i]);

      if (!checkResult(bleObject, expected)) {
        return 1;
      }

      std::string brand = decoder.getTheengAttribute(expected["model_id"].as<const char*>(), "brand");
      std::string model = decoder.getTheengAttribute(expected["model_id"].as<const char*>(), "model");
      if (brand == "" || model == "") {
        std::cout << "Error reading attributes" << std::endl;
        return 1;
      }
      std::cout << "model: " << model << ",  brand: " << brand << std::endl;

      DeserializationError error = deserializeJson(doc_exp, decoder.getTheengProperties(bleObject["model_id"].as<const char*>()));
      if (error) {
        std::cout << "deserializeJson() failed: " << error << std::endl;
        return 1;
      }
      std::cout << "Properties: ";
      serializeJson(doc_exp, std::cout);
      std::cout << std::endl;
    } else {
      std::cout << "FAILED! Error parsing: " << test_uuid[i][0] << " : " << test_uuid[i][1] << " : " << test_uuid[i][2] << " : " << test_uuid[i][3] << std::endl;
      serializeJson(doc, std::cout);
      std::cout << std::endl;
      return 1;
    }
  }

  if (decoder.testDocMax() < 0) {
    return 1;
  }
}
