#include <cmath>
#include <iostream>
#include <limits>

#include "decoder.h"

const char* expected_servicedata[] = {
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Jia round\",\"model_id\":\"LYWSDCGQ\",\"type\":\"THB\",\"tempc\":26,\"tempf\":78.8,\"hum\":61.4}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Jia round\",\"model_id\":\"LYWSDCGQ\",\"type\":\"THB\",\"hum\":61.4}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Jia round\",\"model_id\":\"LYWSDCGQ\",\"type\":\"THB\",\"batt\":81}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Jia round\",\"model_id\":\"LYWSDCGQ\",\"type\":\"THB\",\"batt\":62}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Jia round\",\"model_id\":\"LYWSDCGQ\",\"type\":\"THB\",\"tempc\":27.4,\"tempf\":81.32}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Formaldehyde detector\",\"model_id\":\"JQJCY01YM\",\"type\":\"AIR\",\"batt\":94}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Formaldehyde detector\",\"model_id\":\"JQJCY01YM\",\"type\":\"AIR\",\"hum\":59.5}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Formaldehyde detector\",\"model_id\":\"JQJCY01YM\",\"type\":\"AIR\",\"for\":0.08}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Formaldehyde detector\",\"model_id\":\"JQJCY01YM\",\"type\":\"AIR\",\"tempc\":19.6,\"tempf\":67.28}",
    "{\"brand\":\"Xiaomi\",\"model\":\"RoPot\",\"model_id\":\"HHCCPOT002\",\"type\":\"PLANT\",\"moi\":3}",
    "{\"brand\":\"Xiaomi\",\"model\":\"RoPot\",\"model_id\":\"HHCCPOT002\",\"type\":\"PLANT\",\"fer\":1}",
    "{\"brand\":\"Xiaomi\",\"model\":\"MiLamp\",\"model_id\":\"MUE4094RT\",\"type\":\"CTMO\",\"cont\":true,\"pres\":true,\"darkness\":29}",
    "{\"brand\":\"April Brother\",\"model\":\"N03\",\"model_id\":\"ABN03\",\"type\":\"THBX\",\"track\":true,\"tempc\":-2.625,\"tempf\":27.275,\"hum\":63.5,\"lux\":350,\"batt\":100,}",
};

const char* expected_mfg[] = {
    "{\"brand\":\"Inkbird\",\"model\":\"T(H) Sensor\",\"model_id\":\"IBS-TH1/TH2/P01B\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":26.62,\"tempf\":79.916,\"hum\":53.79,\"batt\":89}",
    "{\"brand\":\"Inkbird\",\"model\":\"T(H) Sensor\",\"model_id\":\"IBS-TH1/TH2/P01B\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":25.44,\"tempf\":77.792,\"extprobe\":true,\"hum\":51.18,\"batt\":48}",
    "{\"brand\":\"GENERIC\",\"model\":\"iBeacon\",\"model_id\":\"IBEACON\",\"type\":\"BCON\",\"mfid\":\"4c00\",\"uuid\":\"426c7565436861726d426561636f6e73\",\"major\":3838,\"minor\":4949,\"txpower\":-59}",
    "{\"brand\":\"GENERIC\",\"model\":\"iBeacon\",\"model_id\":\"IBEACON\",\"type\":\"BCON\",\"mfid\":\"4c00\",\"uuid\":\"fda50693a4e24fb1afcfc6eb07647825\",\"major\":1,\"minor\":2,\"volt\":2.6}",
    "{\"brand\":\"GENERIC\",\"model\":\"ThermoBeacon\",\"model_id\":\"WS02/WS08\",\"type\":\"THB\",\"cidc\":false,\"tempc\":31.3125,\"tempf\":88.3625,\"hum\":70.75,\"volt\":3.160,\"time\":2371}",
    "{\"brand\":\"GENERIC\",\"model\":\"ThermoBeacon\",\"model_id\":\"WS02/WS08\",\"type\":\"THB\",\"cidc\":false,\"tempc\":25.125,\"tempf\":77.225,\"hum\":55.75,\"volt\":3,\"time\":244685}",
    "{\"brand\":\"GENERIC\",\"model\":\"ThermoBeacon\",\"model_id\":\"WS02/WS08\",\"type\":\"THB\",\"cidc\":false,\"tempc\":13.75,\"tempf\":56.75,\"hum\":59.9375,\"volt\":3.236,\"time\":10034}",
    "{\"brand\":\"GENERIC\",\"model\":\"ThermoBeacon\",\"model_id\":\"WS02/WS08\",\"type\":\"THB\",\"cidc\":false,\"tempc\":22.75,\"tempf\":72.95,\"hum\":45.8125,\"volt\":2.836,\"time\":7525616}",
    "{\"brand\":\"GENERIC\",\"model\":\"ThermoBeacon\",\"model_id\":\"WS02/WS08\",\"type\":\"THB\",\"cidc\":false,\"tempc_max\":27.25,\"tempf_max\":81.05,\"time_max\":3188218,\"tempc_min\":18.375,\"tempf_min\":65.075,\"time_min\":6778822}",
    "{\"brand\":\"GENERIC\",\"model\":\"ThermoBeacon\",\"model_id\":\"WS02/WS08\",\"type\":\"THB\",\"cidc\":false,\"tempc_max\":29.6875,\"tempf_max\":85.4375,\"time_max\":106359,\"tempc_min\":24.125,\"tempf_min\":75.425,\"time_min\":54044}",
    "{\"brand\":\"GENERIC\",\"model\":\"ThermoBeacon\",\"model_id\":\"WS02/WS08\",\"type\":\"THB\",\"cidc\":false,\"tempc_max\":27,\"tempf_max\":80.6,\"time_max\":175,\"tempc_min\":24.1875,\"tempf_min\":75.5375,\"time_min\":217757}",
    "{\"brand\":\"Govee\",\"model\":\"Bluetooth BBQ Thermometer\",\"model_id\":\"H5055\",\"type\":\"BBQ\",\"cidc\":false,\"tempc1\":23,\"tempf1\":73.4,\"tempc2\":115,\"tempf2\":239,\"batt\":70}",
    "{\"brand\":\"Govee\",\"model\":\"Bluetooth BBQ Thermometer\",\"model_id\":\"H5055\",\"type\":\"BBQ\",\"cidc\":false,\"tempc3\":86,\"tempf3\":186.8,\"tempc4\":145,\"tempf4\":293,\"batt\":65}",
    "{\"brand\":\"Govee\",\"model\":\"Bluetooth BBQ Thermometer\",\"model_id\":\"H5055\",\"type\":\"BBQ\",\"cidc\":false,\"tempc5\":92,\"tempf5\":197.6,\"tempc6\":55,\"tempf6\":131,\"batt\":97}",
    "{\"brand\":\"Govee\",\"model\":\"Bluetooth BBQ Thermometer\",\"model_id\":\"H5055\",\"type\":\"BBQ\",\"cidc\":false,\"tempc6\":84,\"tempf6\":183.2,\"batt\":83}",
    "{\"brand\":\"Govee\",\"model\":\"Thermo Hygrometer\",\"model_id\":\"H5072/75\",\"type\":\"THB\",\"acts\":true,\"cidc\":false,\"tempc\":26.8,\"tempf\":80.24,\"hum\":52.6,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Thermo Hygrometer\",\"model_id\":\"H5072/75\",\"type\":\"THB\",\"acts\":true,\"cidc\":false,\"tempc\":-7.3481,\"tempf\":18.77342,\"hum\":8.9,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Thermo Hygrometer\",\"model_id\":\"H5072/75\",\"type\":\"THB\",\"acts\":true,\"cidc\":false,\"tempc\":27.5,\"tempf\":81.5,\"hum\":53.1,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Smart Thermo Hygrometer\",\"model_id\":\"H5101/02/74/77\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":21.9,\"tempf\":71.42,\"hum\":40.6,\"batt\":100}",
    "{\"brand\":\"Inkbird\",\"model\":\"T(H) Sensor\",\"model_id\":\"IBS-TH1/TH2/P01B\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":26.62,\"tempf\":79.916,\"hum\":82.17,\"batt\":89}",
    "{\"brand\":\"Inkbird\",\"model\":\"T(H) Sensor\",\"model_id\":\"IBS-TH1/TH2/P01B\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":-11.62,\"tempf\":11.084,\"batt\":89}",
    "{\"brand\":\"Inkbird\",\"model\":\"T(H) Sensor\",\"model_id\":\"IBS-TH1/TH2/P01B\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":2.27,\"tempf\":36.086,\"hum\":19.79,\"batt\":100}",
    "{\"brand\":\"Inkbird\",\"model\":\"T(H) Sensor\",\"model_id\":\"IBS-TH1/TH2/P01B\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":26.92,\"tempf\":80.456,\"batt\":96}",
    "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"type\":\"ENRG\",\"cidc\":false,\"avg\":2.376,\"avgu\":\"kW\",\"sum\":21.2928,\"sumu\":\"kWh\",\"batt\":70}",
    "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"type\":\"ENRG\",\"cidc\":false,\"avg\":2.376,\"avgu\":\"kW\",\"sum\":21.2928,\"sumu\":\"kWh\",\"batt\":10,\"lowbatt\":true}",
    "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"type\":\"ENRG\",\"cidc\":false,\"avg\":2.376,\"avgu\":\"kW\",\"sum\":21.2928,\"sumu\":\"kWh\",\"batt\":100}",
    "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"type\":\"ENRG\",\"cidc\":false,\"avg\":2.376,\"avgu\":\"kW\",\"sum\":21.2928,\"sumu\":\"kWh\",\"batt\":100}",
    "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"type\":\"ENRG\",\"cidc\":false,\"avg\":5.304,\"avgu\":\"kW\",\"sum\":18.8804,\"sumu\":\"kWh\",\"batt\":50}",
    "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"type\":\"ENRG\",\"cidc\":false,\"avg\":0.900545785,\"avgu\":\"m³\",\"sum\":8.070345664,\"sumu\":\"m³\",\"batt\":60}",
    "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"type\":\"ENRG\",\"cidc\":false,\"avg\":2.010309278,\"avgu\":\"m³\",\"sum\":7.156003639,\"sumu\":\"m³\",\"batt\":20,\"lowbatt\":true}",
    "{\"brand\":\"Ruuvi\",\"model\":\"RuuviTag\",\"model_id\":\"RuuviTag_RAWv1\",\"type\":\"ACEL\",\"track\":true,\"hum\":20.5,\"tempc\":26.3,\"tempf\":79.34,\"pres\":1027.66,\"accx\":-0.980665,\"accy\":-1.69262779,\"accz\":0.70019481,\"volt\":2.899}",
    "{\"brand\":\"Ruuvi\",\"model\":\"RuuviTag\",\"model_id\":\"RuuviTag_RAWv1\",\"type\":\"ACEL\",\"track\":true,\"hum\":127.5,\"tempc\":127.99,\"tempf\":262.382,\"pres\":1155.35,\"accx\":32.13345006,\"accy\":32.13345006,\"accz\":32.13345006,\"volt\":65.535}",
    "{\"brand\":\"Ruuvi\",\"model\":\"RuuviTag\",\"model_id\":\"RuuviTag_RAWv1\",\"type\":\"ACEL\",\"track\":true,\"hum\":0,\"tempc\":-127.99,\"tempf\":-198.382,\"pres\":500,\"accx\":-32.13345006,\"accy\":-32.13345006,\"accz\":-32.13345006,\"volt\":0}",
    "{\"brand\":\"Ruuvi\",\"model\":\"RuuviTag\",\"model_id\":\"RuuviTag_RAWv2\",\"type\":\"ACEL\",\"track\":true,\"tempc\":24.3,\"tempf\":75.74,\"hum\":53.49,\"pres\":1000.44,\"accx\":0.00392266,\"accy\":-0.00392266,\"accz\":1.01596894,\"volt\":2.977,\"tx\":4,\"mov\":66,\"seq\":205}",
    "{\"brand\":\"Ruuvi\",\"model\":\"RuuviTag\",\"model_id\":\"RuuviTag_RAWv2\",\"type\":\"ACEL\",\"track\":true,\"tempc\":163.835,\"tempf\":326.903,\"hum\":163.8350,\"pres\":1155.34,\"accx\":32.13345006,\"accy\":32.13345006,\"accz\":32.13345006,\"volt\":3.646,\"tx\":20,\"mov\":254,\"seq\":65534}",
    "{\"brand\":\"Ruuvi\",\"model\":\"RuuviTag\",\"model_id\":\"RuuviTag_RAWv2\",\"type\":\"ACEL\",\"track\":true,\"tempc\":-163.835,\"tempf\":-262.903,\"hum\":0,\"pres\":500,\"accx\":-32.13345006,\"accy\":-32.13345006,\"accz\":-32.13345006,\"volt\":1.6,\"tx\":-40,\"mov\":0,\"seq\":0}",
    "{\"brand\":\"Blue Maestro\",\"model\":\"Tempo Disc\",\"model_id\":\"TD3in1\",\"type\":\"THBX\",\"track\":true,\"tempc\":23.9,\"tempf\":75.02,\"hum\":43.5,\"tempc2_dp\":10.8,\"tempf2_dp\":51.44,\"batt\":86}",
    "{\"brand\":\"Blue Maestro\",\"model\":\"Tempo Disc\",\"model_id\":\"TD3in1\",\"type\":\"THBX\",\"track\":true,\"tempc\":-16.3,\"tempf\":2.66,\"hum\":78.3,\"tempc2_dp\":-19.2,\"tempf2_dp\":-2.56,\"batt\":67}",
    "{\"brand\":\"Blue Maestro\",\"model\":\"Tempo Disc\",\"model_id\":\"TD4in1\",\"type\":\"THBX\",\"track\":true,\"tempc\":22.3,\"tempf\":72.14,\"hum\":75.9,\"pres\":1013.5,\"batt\":58}",
    "{\"brand\":\"Blue Maestro\",\"model\":\"Tempo Disc\",\"model_id\":\"TD1in1\",\"type\":\"THB\",\"track\":true,\"tempc\":25.2,\"tempf\":77.36,\"batt\":100}",
    "{\"brand\":\"GENERIC\",\"model\":\"MS-CDP\",\"model_id\":\"MS-CDP\",\"type\":\"RMAC\",\"device\":\"Windows 10 Desktop\",\"salt\":\"ac6d90ec\",\"hash\":\"0132b3204cd39c7ced3e48436ba15dc6\"}",
    "{\"brand\":\"GENERIC\",\"model\":\"BM2 Battery Monitor\",\"model_id\":\"BM2\",\"type\":\"BATT\",\"acts\":true,\"batt\":100}",
    "{\"brand\":\"GENERIC\",\"model\":\"BM2 Battery Monitor\",\"model_id\":\"BM2\",\"type\":\"BATT\",\"acts\":true,\"batt\":68}",
    "{\"brand\":\"SmartDry\",\"model\":\"Laundry Sensor\",\"model_id\":\"SDLS\",\"type\":\"UNIQ\",\"cidc\":false,\"tempc\":34.210289,\"tempf\":93.5785202,\"hum\":100,\"shake\":82,\"volt\":2.952,\"wake\":true}",
    "{\"brand\":\"SmartDry\",\"model\":\"Laundry Sensor\",\"model_id\":\"SDLS\",\"type\":\"UNIQ\",\"cidc\":false,\"tempc\":21.97295189,\"tempf\":71.5513134,\"hum\":97.91998291,\"shake\":264,\"volt\":2.951,\"wake\":true}",
    "{\"brand\":\"SmartDry\",\"model\":\"Laundry Sensor\",\"model_id\":\"SDLS\",\"type\":\"UNIQ\",\"cidc\":false,\"tempc\":31.79714203,\"tempf\":89.23485565,\"hum\":99.49163818,\"shake\":51,\"volt\":2.956,\"wake\":true}",
    "{\"brand\":\"SmartDry\",\"model\":\"Laundry Sensor\",\"model_id\":\"SDLS\",\"type\":\"UNIQ\",\"cidc\":false,\"tempc\":29.57704544,\"tempf\":85.23868179,\"hum\":55.99645996,\"shake\":74,\"volt\":2.929,\"wake\":true}",
    "{\"brand\":\"SmartDry\",\"model\":\"Laundry Sensor\",\"model_id\":\"SDLS\",\"type\":\"UNIQ\",\"cidc\":false,\"tempc\":29.57704544,\"tempf\":85.23868179,\"hum\":55.99645996,\"shake\":74,\"volt\":2.929,\"wake\":false}",
    "{\"brand\":\"SmartDry\",\"model\":\"Laundry Sensor\",\"model_id\":\"SDLS\",\"type\":\"UNIQ\",\"cidc\":false,\"tempc\":29.57704544,\"tempf\":85.23868179,\"hum\":55.99645996,\"shake\":74,\"volt\":2.929,\"wake\":false}",
    "{\"brand\":\"April Brother\",\"model\":\"ABTemp\",\"model_id\":\"ABTemp\",\"type\":\"BCON\",\"track\":true,\"mfid\":\"4c00\",\"uuid\":\"b5b182c7eab14988aa99b5c1517008d9\",\"major\":1,\"batt\":100,\"tempc\":26,\"tempf\":78.8,\"txpower\":-59}",
    "{\"brand\":\"Oras\",\"model\":\"Hydractiva Digital\",\"model_id\":\"ADHS\",\"type\":\"ENRG\",\"cidc\":false,\"session\":36,\"seconds\":21,\"litres\":2.6,\"tempc\":41,\"tempf\":105.8,\"energy\":0.12}",
    "{\"brand\":\"ThermoPro\",\"model\":\"TH Sensor\",\"model_id\":\"TP35X/393\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":27.2,\"tempf\":80.96,\"hum\":71}",
    "{\"brand\":\"ThermoPro\",\"model\":\"TH Sensor\",\"model_id\":\"TP35X/393\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":37.4,\"tempf\":99.32,\"hum\":74}",
    "{\"brand\":\"ThermoPro\",\"model\":\"TH Sensor\",\"model_id\":\"TP35X/393\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":24.5,\"tempf\":76.1,\"hum\":50}",
    "{\"brand\":\"ThermoPro\",\"model\":\"TH Sensor\",\"model_id\":\"TP35X/393\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":24.6,\"tempf\":76.28,\"hum\":51}",
    "{\"brand\":\"ThermoPro\",\"model\":\"TH Sensor\",\"model_id\":\"TP35X/393\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":25.5,\"tempf\":77.9,\"hum\":53}",
    "{\"brand\":\"ThermoPro\",\"model\":\"TH Sensor\",\"model_id\":\"TP35X/393\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":21.2,\"tempf\":70.16,\"hum\":55}",
    "{\"brand\":\"Oria\",\"model\":\"TH Sensor\",\"model_id\":\"T301\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":25.6,\"tempf\":78.08,\"hum\":56,\"batt\":99}",
    "{\"brand\":\"Oria\",\"model\":\"TH Sensor\",\"model_id\":\"T301\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":25.3,\"tempf\":77.54,\"hum\":56,\"batt\":83}",
    "{\"brand\":\"Oria\",\"model\":\"TH Sensor\",\"model_id\":\"T301\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":26.2,\"tempf\":79.16,\"hum\":59,\"batt\":68}",
    "{\"brand\":\"Oria\",\"model\":\"TH Sensor\",\"model_id\":\"T201\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":25.89,\"tempf\":78.602,\"hum\":43.36,\"batt\":100}",
    "{\"brand\":\"Otio/BeeWi\",\"model\":\"Door & Window Sensor\",\"model_id\":\"BSDOO\",\"type\":\"CTMO\",\"cidc\":false,\"cont\":true,\"contact\":\"closed\",\"batt\":100}",
    "{\"brand\":\"Otio/BeeWi\",\"model\":\"Door & Window Sensor\",\"model_id\":\"BSDOO\",\"type\":\"CTMO\",\"cidc\":false,\"cont\":true,\"contact\":\"open\",\"batt\":100}",
    "{\"brand\":\"Sensirion\",\"model\":\"TH Sensor\",\"model_id\":\"SHT4X\",\"type\":\"THB\",\"tempc\":27.47005417,\"tempf\":81.44609751,\"hum\":43.37056535}",
    "{\"brand\":\"Sensirion\",\"model\":\"TH Sensor\",\"model_id\":\"SHT4X\",\"type\":\"THB\",\"tempc\":-10,\"tempf\":14,\"hum\":90.00404364}",
    "{\"brand\":\"Sensirion\",\"model\":\"TH Sensor\",\"model_id\":\"SHT4X\",\"type\":\"THB\",\"tempc\":-2.50171664,\"tempf\":27.49691005,\"hum\":65.00022889}",
    "{\"brand\":\"Sensirion\",\"model\":\"TH Sensor\",\"model_id\":\"SHT4X\",\"type\":\"THB\",\"tempc\":27.47005417,\"tempf\":81.44609751,\"hum\":43.37056535}",
    "{\"brand\":\"Sensirion\",\"model\":\"MyCO₂/CO₂ Gadget\",\"model_id\":\"SCD4X\",\"type\":\"AIR\",\"tempc\":-10,\"tempf\":14,\"hum\":76.80323491,\"co2\":745}",
    "{\"brand\":\"Sensirion\",\"model\":\"MyCO₂/CO₂ Gadget\",\"model_id\":\"SCD4X\",\"type\":\"AIR\",\"tempc\":25.63286793,\"tempf\":78.13916228,\"hum\":36.16083009,\"co2\":1035}",
    "{\"brand\":\"Sensirion\",\"model\":\"MyCO₂/CO₂ Gadget\",\"model_id\":\"SCD4X\",\"type\":\"AIR\",\"tempc\":28.14831769,\"tempf\":82.66697185,\"hum\":38.09872587,\"co2\":1434}",
    "{\"brand\":\"Govee\",\"model\":\"Smart Thermo Hygrometer\",\"model_id\":\"H5101/02/74/77\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":22,\"tempf\":71.6,\"hum\":69.1,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Smart Thermo Hygrometer\",\"model_id\":\"H5101/02/74/77\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":-7.2,\"tempf\":19.04,\"hum\":90.3,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Thermo Hygrometer\",\"model_id\":\"H5074\",\"type\":\"THB\",\"acts\":true,\"cidc\":false,\"tempc\":22.44,\"tempf\":72.392,\"hum\":74.59,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Thermo Hygrometer\",\"model_id\":\"H5074\",\"type\":\"THB\",\"acts\":true,\"cidc\":false,\"tempc\":-13.76,\"tempf\":7.232,\"hum\":60.92,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Thermo Hygrometer\",\"model_id\":\"H5074\",\"type\":\"THB\",\"acts\":true,\"cidc\":false,\"tempc\":25.87,\"tempf\":78.566,\"hum\":65.55,\"batt\":100}",
    "{\"brand\":\"Mopeka\",\"model\":\"Pro Check Sensor\",\"model_id\":\"M1017\",\"type\":\"UNIQ\",\"cidc\":false,\"tempc\":25,\"tempf\":77,\"lvl_cm\":15.4144725,\"lvl_in\":6.068689961,\"sync\":false,\"volt\":2.90625,\"batt\":100,\"quality\":3}",
    "{\"brand\":\"Mopeka\",\"model\":\"Pro Check Sensor\",\"model_id\":\"M1017\",\"type\":\"UNIQ\",\"cidc\":false,\"tempc\":25,\"tempf\":77,\"lvl_cm\":62.3919125,\"lvl_in\":24.56374508,\"sync\":false,\"volt\":2.84375,\"batt\":99.03846154,\"quality\":3}",
    "{\"brand\":\"Govee\",\"model\":\"Bluetooth BBQ Thermometer\",\"model_id\":\"H5055\",\"type\":\"BBQ\",\"cidc\":false,\"tempc1\":28,\"tempf1\":82.4,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Bluetooth BBQ Thermometer\",\"model_id\":\"H5055\",\"type\":\"BBQ\",\"cidc\":false,\"tempc2\":31,\"tempf2\":87.8,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Bluetooth BBQ Thermometer\",\"model_id\":\"H5055\",\"type\":\"BBQ\",\"cidc\":false,\"tempc4\":30,\"tempf4\":86,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Bluetooth BBQ Thermometer\",\"model_id\":\"H5055\",\"type\":\"BBQ\",\"cidc\":false,\"tempc6\":33,\"tempf6\":91.4,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Smart Air Quality Monitor\",\"model_id\":\"H5106\",\"type\":\"AIR\",\"cidc\":false,\"acts\":true,\"tempc\":24.8,\"tempf\":76.64,\"hum\":70,\"pm25\":1}",
    "{\"brand\":\"Govee\",\"model\":\"Smart Air Quality Monitor\",\"model_id\":\"H5106\",\"type\":\"AIR\",\"cidc\":false,\"acts\":true,\"tempc\":23.3,\"tempf\":73.94,\"hum\":74,\"pm25\":7}",
    "{\"brand\":\"Govee\",\"model\":\"Smart Air Quality Monitor\",\"model_id\":\"H5106\",\"type\":\"AIR\",\"cidc\":false,\"acts\":true,\"tempc\":23.2,\"tempf\":73.76,\"hum\":72,\"pm25\":12}",
    "{\"brand\":\"Govee\",\"model\":\"Smart Air Quality Monitor\",\"model_id\":\"H5106\",\"type\":\"AIR\",\"cidc\":false,\"acts\":true,\"tempc\":0.6,\"tempf\":33.08,\"hum\":94,\"pm25\":3}",
    "{\"brand\":\"Govee\",\"model\":\"Smart Air Quality Monitor\",\"model_id\":\"H5106\",\"type\":\"AIR\",\"cidc\":false,\"acts\":true,\"tempc\":-7.5,\"tempf\":18.5,\"hum\":76,\"pm25\":0}",
    "{\"brand\":\"Govee\",\"model\":\"Smart Air Quality Monitor\",\"model_id\":\"H5106\",\"type\":\"AIR\",\"cidc\":false,\"acts\":true,\"tempc\":-2.7,\"tempf\":27.14,\"hum\":94,\"pm25\":7}",
    "{\"brand\":\"Govee\",\"model\":\"Smart Air Quality Monitor\",\"model_id\":\"H5106\",\"type\":\"AIR\",\"cidc\":false,\"acts\":true,\"tempc\":-9.8,\"tempf\":14.36,\"hum\":64,\"pm25\":1}",
    "{\"brand\":\"Polar\",\"model\":\"Heart Rate Sensor\",\"model_id\":\"H10\",\"type\":\"BODY\",\"bpm\":70}",
    "{\"brand\":\"Polar\",\"model\":\"Heart Rate Sensor\",\"model_id\":\"H10\",\"type\":\"BODY\",\"bpm\":104}",
    "{\"brand\":\"Atomax\",\"model\":\"Skale I/II\",\"model_id\":\"SKALE\",\"type\":\"SCALE\",\"cidc\":false,\"weight\":123.9}",
    "{\"brand\":\"Atomax\",\"model\":\"Skale I/II\",\"model_id\":\"SKALE\",\"type\":\"SCALE\",\"cidc\":false,\"weight\":29.6}",
    "{\"brand\":\"Atomax\",\"model\":\"Skale I/II\",\"model_id\":\"SKALE\",\"type\":\"SCALE\",\"cidc\":false,\"weight\":-92.8}",
    "{\"brand\":\"Apple\",\"model\":\"Apple Continuity\",\"model_id\":\"APPLE_CONT\",\"type\":\"RMAC\",\"device\":\"Apple device\"}",
    "{\"brand\":\"Apple\",\"model\":\"Apple Continuity\",\"model_id\":\"APPLE_CONT\",\"type\":\"RMAC\",\"device\":\"Apple device\"}",
    "{\"brand\":\"Apple\",\"model\":\"Apple Continuity\",\"model_id\":\"APPLE_CONTAT\",\"type\":\"RMAC\",\"device\":\"Apple device\"}",
    "{\"brand\":\"Apple\",\"model\":\"Apple Continuity\",\"model_id\":\"APPLE_CONTAT\",\"type\":\"RMAC\",\"device\":\"Apple device\"}",
    "{\"brand\":\"Apple\",\"model\":\"Apple Continuity\",\"model_id\":\"APPLE_CONTAT\",\"type\":\"RMAC\",\"device\":\"Apple device\"}",
    "{\"brand\":\"iTAG\",\"model\":\"Smart Tracker\",\"model_id\":\"ITAG\",\"type\":\"TRACK\",\"cidc\":false,\"acts\":true,\"cont\":true,\"track\":true,\"device\":\"iTAG Tracker\"}",
    "{\"brand\":\"Tile\",\"model\":\"Smart Tracker\",\"model_id\":\"TILE\",\"type\":\"TRACK\",\"cidc\":false,\"acts\":true,\"cont\":true,\"track\":true,\"device\":\"Tile Tracker\"}",
};

const char* expected_name_uuid_mfgsvcdata[] = {
    "{\"brand\":\"Radioland\",\"model\":\"RDL52832\",\"model_id\":\"RDL52832\",\"type\":\"ACEL\",\"acts\":true,\"track\":true,\"mfid\":\"4c00\",\"uuid\":\"fda50693a4e24fb1afcfc6eb07647825\",\"major\":1,\"minor\":2,\"txpower\":-40,\"tempc\":24.2265625,\"tempf\":75.6078125,\"hum\":47.19921875,\"accx\":-0.196133,\"accy\":0.0980665,\"accz\":9.5124505}",
    "{\"brand\":\"Radioland\",\"model\":\"RDL52832\",\"model_id\":\"RDL52832\",\"type\":\"ACEL\",\"acts\":true,\"track\":true,\"mfid\":\"4c00\",\"uuid\":\"fda50693a4e24fb1afcfc6eb07647825\",\"major\":1,\"minor\":2,\"txpower\":-40,\"tempc\":25.296875,\"tempf\":77.534375,\"hum\":58.22265625,\"accx\":1.372931,\"accy\":0.8825985,\"accz\":-9.610517}",
    "{\"brand\":\"Radioland\",\"model\":\"RDL52832\",\"model_id\":\"RDL52832\",\"type\":\"ACEL\",\"acts\":true,\"track\":true,\"mfid\":\"4c00\",\"uuid\":\"fda50693a4e24fb1afcfc6eb07647825\",\"major\":1,\"minor\":2,\"txpower\":-40,\"tempc\":26.2734375,\"tempf\":79.2921875,\"hum\":61.203125,\"accx\":1.96133,\"accy\":-9.414384,\"accz\":1.4709975}",
    "{\"brand\":\"Radioland\",\"model\":\"RDL52832\",\"model_id\":\"RDL52832\",\"type\":\"ACEL\",\"acts\":true,\"track\":true,\"mfid\":\"4c00\",\"uuid\":\"fda50693a4e24fb1afcfc6eb07647825\",\"major\":1,\"minor\":2,\"txpower\":-40,\"tempc\":24.2265625,\"tempf\":75.6078125,\"hum\":47.19921875,\"accx\":-0.196133,\"accy\":0.0980665,\"accz\":9.5124505}",
    "{\"brand\":\"Radioland\",\"model\":\"RDL52832\",\"model_id\":\"RDL52832\",\"type\":\"ACEL\",\"acts\":true,\"track\":true,\"mfid\":\"4c00\",\"uuid\":\"fda50693a4e24fb1afcfc6eb07647825\",\"major\":1,\"minor\":2,\"txpower\":-40,\"tempc\":25.296875,\"tempf\":77.534375,\"hum\":58.22265625,\"accx\":1.372931,\"accy\":0.8825985,\"accz\":-9.610517}",
    "{\"brand\":\"Radioland\",\"model\":\"RDL52832\",\"model_id\":\"RDL52832\",\"type\":\"ACEL\",\"acts\":true,\"track\":true,\"mfid\":\"4c00\",\"uuid\":\"fda50693a4e24fb1afcfc6eb07647825\",\"major\":1,\"minor\":2,\"txpower\":-40,\"tempc\":26.2734375,\"tempf\":79.2921875,\"hum\":61.203125,\"accx\":1.96133,\"accy\":-9.414384,\"accz\":1.4709975}",
};

const char* expected_uuid_name_svcdata[] = {
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1_ATC1441\",\"type\":\"THB\",\"acts\":true,\"tempc\":22.4,\"tempf\":72.32,\"hum\":62,\"batt\":73,\"volt\":2.86}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1_ATC1441\",\"type\":\"THB\",\"acts\":true,\"tempc\":22.5,\"tempf\":72.5,\"hum\":62,\"batt\":74,\"volt\":2.869}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1_PVVX\",\"type\":\"THB\",\"acts\":true,\"tempc\":23.51,\"tempf\":74.318,\"hum\":60.58,\"batt\":75,\"volt\":2.877}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1_PVVX\",\"type\":\"THB\",\"acts\":true,\"tempc\":23.45,\"tempf\":74.21,\"hum\":60.8,\"batt\":74,\"volt\":2.869}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1_PVVX\",\"type\":\"THB\",\"acts\":true,\"tempc\":21.04,\"tempf\":69.872,\"hum\":48.85,\"batt\":92,\"volt\":3.034}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1\",\"type\":\"THB\",\"acts\":true,\"tempc\":23.7,\"tempf\":74.66,\"hum\":60.3}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1\",\"type\":\"THB\",\"acts\":true,\"batt\":72}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1\",\"type\":\"THB\",\"acts\":true,\"tempc\":27.2,\"tempf\":80.96,\"hum\":63.8}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1\",\"type\":\"THB\",\"acts\":true,\"tempc\":24.1,\"tempf\":75.38,\"hum\":49.4}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1\",\"type\":\"THB\",\"acts\":true,\"tempc\":27.4,\"tempf\":81.32}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1\",\"type\":\"THB\",\"acts\":true,\"hum\":49.4}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1\",\"type\":\"THB\",\"acts\":true,\"batt\":11}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"TH Lite\",\"model_id\":\"CGDK2_PVVX\",\"type\":\"THB\",\"acts\":true,\"tempc\":22.96,\"tempf\":73.328,\"hum\":43.58,\"batt\":100,\"volt\":2.962}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"TH Lite\",\"model_id\":\"CGDK2_ATC1441\",\"type\":\"THB\",\"acts\":true,\"tempc\":23,\"tempf\":73.4,\"hum\":43,\"batt\":100,\"volt\":2.929}",
    "{\"brand\":\"Xiaomi\",\"model\":\"TH Sensor\",\"model_id\":\"LYWSD03MMC/MJWSD05MMC_ATC\",\"type\":\"THB\",\"tempc\":32.5,\"tempf\":90.5,\"hum\":62,\"batt\":81,\"volt\":2.939}",
    "{\"brand\":\"Xiaomi\",\"model\":\"TH Sensor\",\"model_id\":\"LYWSD03MMC/MJWSD05MMC_ATC\",\"type\":\"THB\",\"tempc\":-4.5,\"tempf\":23.9,\"hum\":62,\"batt\":81,\"volt\":2.939}",
    "{\"brand\":\"Xiaomi\",\"model\":\"TH Sensor\",\"model_id\":\"LYWSD03MMC/MJWSD05MMC_PVVX\",\"type\":\"THB\",\"tempc\":21.12,\"tempf\":70.016,\"hum\":50.53,\"batt\":100,\"volt\":3.143}",
    "{\"brand\":\"Xiaomi\",\"model\":\"TH Sensor\",\"model_id\":\"LYWSD03MMC/MJWSD05MMC_PVVX\",\"type\":\"THB\",\"tempc\":19.23,\"tempf\":66.614,\"hum\":48.36,\"batt\":100,\"volt\":2.959}",
    "{\"brand\":\"Xiaomi\",\"model\":\"TH Sensor\",\"model_id\":\"LYWSD03MMC/MJWSD05MMC_PVVX\",\"type\":\"THB\",\"tempc\":-6.7,\"tempf\":19.94,\"hum\":50.53,\"batt\":100,\"volt\":3.143}",
    "{\"brand\":\"Xiaomi\",\"model\":\"TH Sensor\",\"model_id\":\"LYWSD03MMC/MJWSD05MMC_PVVX\",\"type\":\"THB\",\"tempc\":24.28,\"tempf\":75.704,\"hum\":43.65,\"batt\":100,\"volt\":3.125}",
};

const char* expected_uuid[] = {
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Smart Scale\",\"model_id\":\"XMTZC01HM/XMTZC04HM\",\"type\":\"SCALE\",\"weighing_mode\":\"person\",\"unit\":\"kg\",\"weight\":61.75}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Smart Scale\",\"model_id\":\"XMTZC01HM/XMTZC04HM\",\"type\":\"SCALE\",\"weighing_mode\":\"object\",\"unit\":\"kg\",\"weight\":9.55}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Smart Scale\",\"model_id\":\"XMTZC01HM/XMTZC04HM\",\"type\":\"SCALE\",\"weighing_mode\":\"person\",\"unit\":\"kg\",\"weight\":61.75}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Smart Scale\",\"model_id\":\"XMTZC01HM/XMTZC04HM\",\"type\":\"SCALE\",\"weighing_mode\":\"object\",\"unit\":\"kg\",\"weight\":9.55}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Smart Scale\",\"model_id\":\"XMTZC01HM/XMTZC04HM\",\"type\":\"SCALE\",\"weighing_mode\":\"person\",\"unit\":\"lb\",\"weight\":131.7}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Smart Scale\",\"model_id\":\"XMTZC01HM/XMTZC04HM\",\"type\":\"SCALE\",\"weighing_mode\":\"object\",\"unit\":\"lb\",\"weight\":19.1}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Smart Scale\",\"model_id\":\"XMTZC01HM/XMTZC04HM\",\"type\":\"SCALE\",\"weighing_mode\":\"person\",\"unit\":\"lb\",\"weight\":131.7}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Smart Scale\",\"model_id\":\"XMTZC01HM/XMTZC04HM\",\"type\":\"SCALE\",\"weighing_mode\":\"object\",\"unit\":\"lb\",\"weight\":19.1}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Body Composition Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"type\":\"SCALE\",\"weighing_mode\":\"person\",\"unit\":\"kg\",\"weight\":72.45,\"impedance\":503}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Body Composition Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"type\":\"SCALE\",\"weighing_mode\":\"person\",\"unit\":\"kg\",\"weight\":72.45}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Body Composition Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"type\":\"SCALE\",\"weighing_mode\":\"object\",\"unit\":\"kg\",\"weight\":5.1}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Body Composition Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"type\":\"SCALE\",\"weighing_mode\":\"person\",\"unit\":\"lb\",\"weight\":140.65,\"impedance\":503}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Body Composition Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"type\":\"SCALE\",\"weighing_mode\":\"person\",\"unit\":\"lb\",\"weight\":140.65}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Body Composition Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"type\":\"SCALE\",\"weighing_mode\":\"object\",\"unit\":\"lb\",\"weight\":12.3}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Body Composition Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"type\":\"SCALE\",\"weighing_mode\":\"person\",\"unit\":\"kg\",\"weight\":72.45,\"impedance\":503}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Body Composition Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"type\":\"SCALE\",\"weighing_mode\":\"person\",\"unit\":\"kg\",\"weight\":72.45}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Body Composition Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"type\":\"SCALE\",\"weighing_mode\":\"object\",\"unit\":\"kg\",\"weight\":5.1}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Body Composition Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"type\":\"SCALE\",\"weighing_mode\":\"person\",\"unit\":\"lb\",\"weight\":140.65,\"impedance\":503}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Body Composition Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"type\":\"SCALE\",\"weighing_mode\":\"person\",\"unit\":\"lb\",\"weight\":140.65}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Body Composition Scale\",\"model_id\":\"XMTZC02HM/XMTZC05HM\",\"type\":\"SCALE\",\"weighing_mode\":\"object\",\"unit\":\"lb\",\"weight\":12.3}",
    "{\"brand\":\"Mokosmart\",\"model\":\"Beacon\",\"model_id\":\"Mokobeacon\",\"type\":\"ACEL\",\"track\":true,\"batt\":100,\"x_axis\":-24.10082304,\"y_axis\":-3.766734265,\"z_axis\":-8.030665685}",
    "{\"brand\":\"Mokosmart\",\"model\":\"BeaconX Pro\",\"model_id\":\"MBXPRO\",\"type\":\"ACEL\",\"track\":true,\"tempc\":27.4,\"tempf\":81.32,\"hum\":49.4,\"volt\":3.247}",
    "{\"brand\":\"Mokosmart\",\"model\":\"BeaconX Pro\",\"model_id\":\"MBXPRO\",\"type\":\"ACEL\",\"track\":true,\"x_axis\":5.3348176,\"y_axis\":14.49815136,\"z_axis\":-1.50630144,\"volt\":3.065}",
    "{\"brand\":\"Mokosmart\",\"model\":\"BeaconX Pro\",\"model_id\":\"MBXPRO\",\"type\":\"ACEL\",\"track\":true,\"x_axis\":0.25105024,\"y_axis\":-0.18828768,\"z_axis\":15.75340256,\"volt\":3.065}",
    "{\"brand\":\"GENERIC\",\"model\":\"GAEN\",\"model_id\":\"GAEN\",\"type\":\"RMAC\",\"rpi\":\"e7c6d34c71e48baf278bd99be74685bc\",\"aem\":\"a78126ab\"}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Bot\",\"model_id\":\"X1\",\"type\":\"ACTR\",\"acts\":true,\"mode\":\"on/off\",\"state\":\"off\",\"batt\":91}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Bot\",\"model_id\":\"X1\",\"type\":\"ACTR\",\"acts\":true,\"mode\":\"on/off\",\"state\":\"on\",\"batt\":76}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Bot\",\"model_id\":\"X1\",\"type\":\"ACTR\",\"acts\":true,\"mode\":\"onestate\",\"state\":\"on\",\"batt\":91}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Meter (Plus)\",\"model_id\":\"THX1/W230150X\",\"type\":\"THB\",\"acts\":true,\"tempc\":25.8,\"tempf\":78.44,\"hum\":59,\"batt\":58}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Meter (Plus)\",\"model_id\":\"THX1/W230150X\",\"type\":\"THB\",\"acts\":true,\"tempc\":-25.3,\"tempf\":-13.54,\"hum\":56,\"batt\":58}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Meter (Plus)\",\"model_id\":\"THX1/W230150X\",\"type\":\"THB\",\"acts\":true,\"tempc\":26.7,\"tempf\":80.06,\"hum\":56,\"batt\":58}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Meter (Plus)\",\"model_id\":\"THX1/W230150X\",\"type\":\"THB\",\"acts\":true,\"tempc\":25.5,\"tempf\":77.9,\"hum\":56,\"batt\":84}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Meter (Plus)\",\"model_id\":\"THX1/W230150X\",\"type\":\"THB\",\"acts\":true,\"tempc\":25.2,\"tempf\":77.36,\"hum\":56,\"batt\":84}",
    "{\"brand\":\"rbaron\",\"model\":\"b-parasite\",\"model_id\":\"BPv1.0-1.2\",\"type\":\"PLANT\",\"cont\":true,\"tempc\":25.6,\"tempf\":78.08,\"hum\":90.00076295,\"moi\":49.99923705,\"volt\":3.1}",
    "{\"brand\":\"rbaron\",\"model\":\"b-parasite\",\"model_id\":\"BPv1.0-1.2\",\"type\":\"PLANT\",\"cont\":true,\"tempc\":22.7,\"tempf\":72.86,\"hum\":65.00038148,\"moi\":42.00045777,\"lux\":12500,\"volt\":2.95}",
    "{\"brand\":\"rbaron\",\"model\":\"b-parasite\",\"model_id\":\"BPv1.0-1.2\",\"type\":\"PLANT\",\"cont\":true,\"tempc\":25.6,\"tempf\":78.08,\"hum\":90.00076295,\"moi\":49.99923705,\"volt\":3.1}",
    "{\"brand\":\"rbaron\",\"model\":\"b-parasite\",\"model_id\":\"BPv1.0-1.2\",\"type\":\"PLANT\",\"cont\":true,\"tempc\":22.7,\"tempf\":72.86,\"hum\":65.00038148,\"moi\":42.00045777,\"lux\":12500,\"volt\":2.95}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Curtain\",\"model_id\":\"W070160X\",\"type\":\"WCVR\",\"acts\":true,\"motion\":false,\"position\":25,\"calibrated\":true,\"lightlevel\":7,\"batt\":76}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Curtain\",\"model_id\":\"W070160X\",\"type\":\"WCVR\",\"acts\":true,\"motion\":true,\"position\":25,\"calibrated\":false,\"lightlevel\":10,\"batt\":85}",
    "{\"brand\":\"Xiaomi/Mijia\",\"model\":\"e-ink Clock\",\"model_id\":\"LYWSD02\",\"type\":\"THB\",\"tempc\":25.6,\"tempf\":78.08}",
    "{\"brand\":\"Xiaomi/Mijia\",\"model\":\"e-ink Clock\",\"model_id\":\"LYWSD02\",\"type\":\"THB\",\"hum\":69}",
    "{\"brand\":\"Xiaomi/Mijia\",\"model\":\"e-ink Clock\",\"model_id\":\"LYWSD02\",\"type\":\"THB\",\"tempc\":26.5,\"tempf\":79.7}",
    "{\"brand\":\"Xiaomi/Mijia\",\"model\":\"e-ink Clock\",\"model_id\":\"LYWSD02\",\"type\":\"THB\",\"batt\":8}",
    "{\"brand\":\"Xiaomi/VegTrug\",\"model\":\"MiFlora\",\"model_id\":\"HHCCJCY01HHCC\",\"type\":\"PLANT\",\"lux\":9971}",
    "{\"brand\":\"Xiaomi/VegTrug\",\"model\":\"MiFlora\",\"model_id\":\"HHCCJCY01HHCC\",\"type\":\"PLANT\",\"moi\":30}",
    "{\"brand\":\"Xiaomi/VegTrug\",\"model\":\"MiFlora\",\"model_id\":\"HHCCJCY01HHCC\",\"type\":\"PLANT\",\"tempc\":32,\"tempf\":89.6}",
    "{\"brand\":\"Xiaomi/VegTrug\",\"model\":\"MiFlora\",\"model_id\":\"HHCCJCY01HHCC\",\"type\":\"PLANT\",\"fer\":0}",
    "{\"brand\":\"Xiaomi/VegTrug\",\"model\":\"MiFlora\",\"model_id\":\"HHCCJCY01HHCC\",\"type\":\"PLANT\",\"tempc\":32,\"tempf\":89.6}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Motion Sensor\",\"model_id\":\"W110150X\",\"type\":\"CTMO\",\"acts\":true,\"cont\":true,\"movement\":false,\"led\":false,\"sensingdistance\":\"middle\",\"lightlevel\":\"dark\",\"batt\":55}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Motion Sensor\",\"model_id\":\"W110150X\",\"type\":\"CTMO\",\"acts\":true,\"cont\":true,\"movement\":false,\"led\":false,\"sensingdistance\":\"middle\",\"lightlevel\":\"dark\",\"batt\":55}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Motion Sensor\",\"model_id\":\"W110150X\",\"type\":\"CTMO\",\"acts\":true,\"cont\":true,\"movement\":true,\"led\":true,\"scopetested\":false,\"sensingdistance\":\"long\",\"lightlevel\":\"bright\",\"batt\":85}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Contact Sensor\",\"model_id\":\"W120150X\",\"type\":\"CTMO\",\"acts\":true,\"cont\":true,\"contact\":\"closed\",\"movement\":true,\"lightlevel\":\"bright\",\"in_ct\":0,\"out_ct\":0,\"push_ct\":0,\"batt\":92}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Contact Sensor\",\"model_id\":\"W120150X\",\"type\":\"CTMO\",\"acts\":true,\"cont\":true,\"contact\":\"open\",\"movement\":false,\"lightlevel\":\"dark\",\"in_ct\":0,\"out_ct\":0,\"push_ct\":0,\"batt\":87}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Contact Sensor\",\"model_id\":\"W120150X\",\"type\":\"CTMO\",\"acts\":true,\"cont\":true,\"contact\":\"timeout not closed\",\"movement\":true,\"lightlevel\":\"bright\",\"in_ct\":0,\"out_ct\":0,\"push_ct\":0,\"scopetested\":false,\"batt\":65}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Contact Sensor\",\"model_id\":\"W120150X\",\"type\":\"CTMO\",\"acts\":true,\"cont\":true,\"contact\":\"timeout not closed\",\"movement\":true,\"lightlevel\":\"bright\",\"in_ct\":0,\"out_ct\":0,\"push_ct\":0,\"scopetested\":false,\"batt\":65}",
    "{\"brand\":\"Qingping\",\"model\":\"Air Monitor Lite\",\"model_id\":\"CGDN1\",\"type\":\"AIR\",\"tempc\":29,\"tempf\":84.2,\"hum\":33.2,\"pm25\":113,\"pm10\":114,\"co2\":1005}",
    "{\"brand\":\"Qingping\",\"model\":\"Air Monitor Lite\",\"model_id\":\"CGDN1\",\"type\":\"AIR\",\"tempc\":24.9,\"tempf\":76.82,\"hum\":43.7,\"pm25\":381,\"pm10\":390,\"co2\":765}",
    "{\"brand\":\"Qingping\",\"model\":\"Air Monitor Lite\",\"model_id\":\"CGDN1\",\"type\":\"AIR\",\"tempc\":24.6,\"tempf\":76.28,\"hum\":42.7,\"pm25\":164,\"pm10\":215,\"co2\":711}",
    "{\"brand\":\"Qingping\",\"model\":\"Air Monitor Lite\",\"model_id\":\"CGDN1\",\"type\":\"AIR\",\"tempc\":20.6,\"tempf\":69.08,\"hum\":55.2,\"pm25\":5,\"pm10\":5,\"co2\":471}",
    "{\"brand\":\"GENERIC\",\"model\":\"Service data\",\"model_id\":\"ServiceData\",\"type\":\"BATT\",\"batt\":33}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Alarm Clock\",\"model_id\":\"CGC1/CGD1\",\"type\":\"THB\",\"tempc\":26.6,\"tempf\":79.88,\"hum\":63.9,\"batt\":42}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Alarm Clock\",\"model_id\":\"CGC1/CGD1\",\"type\":\"THB\",\"tempc\":26.9,\"tempf\":80.42,\"hum\":67,\"batt\":42}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Alarm Clock\",\"model_id\":\"CGC1/CGD1\",\"type\":\"THB\",\"tempc\":27,\"tempf\":80.6,\"hum\":65.7,\"batt\":85}",
    "{\"brand\":\"ClearGrass\",\"model\":\"Weather Station\",\"model_id\":\"CGP1W\",\"type\":\"THBX\",\"tempc\":26.4,\"tempf\":79.52,\"hum\":64.7,\"pres\":1006.3}",
    "{\"brand\":\"ClearGrass\",\"model\":\"Weather Station\",\"model_id\":\"CGP1W\",\"type\":\"THBX\",\"tempc\":27.1,\"tempf\":80.78,\"hum\":64.8,\"pres\":1006.3}",
    "{\"brand\":\"ClearGrass\",\"model\":\"Weather Station\",\"model_id\":\"CGP1W\",\"type\":\"THBX\",\"tempc\":25.2,\"tempf\":77.36,\"hum\":58.6,\"pres\":1008.6}",
    "{\"brand\":\"Qingping\",\"model\":\"TH Lite\",\"model_id\":\"CGDK2\",\"type\":\"THB\",\"tempc\":23.2,\"tempf\":73.76,\"hum\":91.1}",
    "{\"brand\":\"Qingping\",\"model\":\"TH Lite\",\"model_id\":\"CGDK2\",\"type\":\"THB\",\"tempc\":23.3,\"tempf\":73.94,\"hum\":54.1}",
    "{\"brand\":\"Qingping\",\"model\":\"TH Lite\",\"model_id\":\"CGDK2\",\"type\":\"THB\",\"tempc\":23.3,\"tempf\":73.94,\"hum\":54.1}",
    "{\"brand\":\"Qingping\",\"model\":\"Motion & Light\",\"model_id\":\"CGPR1\",\"type\":\"CTMO\",\"cont\":true,\"lux\":0,\"batt\":83}",
    "{\"brand\":\"Qingping\",\"model\":\"Motion & Light\",\"model_id\":\"CGPR1\",\"type\":\"CTMO\",\"cont\":true,\"lux\":517,\"batt\":100}",
    "{\"brand\":\"Qingping\",\"model\":\"Motion & Light\",\"model_id\":\"CGPR1\",\"type\":\"CTMO\",\"cont\":true,\"lux\":3,\"pres\":true}",
    "{\"brand\":\"Qingping\",\"model\":\"Motion & Light\",\"model_id\":\"CGPR1\",\"type\":\"CTMO\",\"cont\":true,\"lux\":3,\"pres\":false}",
    "{\"brand\":\"Qingping\",\"model\":\"Motion & Light\",\"model_id\":\"CGPR1\",\"type\":\"CTMO\",\"cont\":true,\"pres\":true}",
    "{\"brand\":\"Qingping\",\"model\":\"Motion & Light\",\"model_id\":\"CGPR1\",\"type\":\"CTMO\",\"cont\":true,\"pres\":false}",
    "{\"brand\":\"Qingping\",\"model\":\"Contact Sensor\",\"model_id\":\"CGH1\",\"type\":\"CTMO\",\"cont\":true,\"open\":true}",
    "{\"brand\":\"Qingping\",\"model\":\"Contact Sensor\",\"model_id\":\"CGH1\",\"type\":\"CTMO\",\"cont\":true,\"open\":false}",
    "{\"brand\":\"Qingping\",\"model\":\"Contact Sensor\",\"model_id\":\"CGH1\",\"type\":\"CTMO\",\"cont\":true,\"open\":true}",
    "{\"brand\":\"Qingping\",\"model\":\"Contact Sensor\",\"model_id\":\"CGH1\",\"type\":\"CTMO\",\"cont\":true,\"open\":false}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1\",\"type\":\"THB\",\"tempc\":27.4,\"tempf\":81.32,\"hum\":62.6,\"batt\":13}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1\",\"type\":\"THB\",\"tempc\":23.5,\"tempf\":74.3,\"hum\":28.3,\"batt\":100}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1\",\"type\":\"THB\",\"tempc\":24.4,\"tempf\":75.92,\"hum\":31.5,\"batt\":100}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Alarm Clock\",\"model_id\":\"CGC1/CGD1\",\"type\":\"THB\",\"tempc\":21,\"tempf\":69.8,\"hum\":51,\"batt\":100}",
    "{\"brand\":\"Jaalee\",\"model\":\"TH sensor\",\"model_id\":\"F525\",\"type\":\"THB\",\"acts\":true,\"tempc\":24.5147998,\"tempf\":76.12663965,\"hum\":36.84286499,\"batt\":100}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Curtain\",\"model_id\":\"W070160X\",\"type\":\"WCVR\",\"acts\":true,\"motion\":false,\"position\":100,\"calibrated\":true,\"lightlevel\":1,\"batt\":17}",
    "{\"brand\":\"BlueCharm\",\"model\":\"Beacon 08\",\"model_id\":\"BC08\",\"type\":\"ACEL\",\"track\":true,\"tempc\":24,\"tempf\":75.2,\"accx\":33,\"accy\":-3,\"accz\":-1006,\"volt\":3.091}",
    "{\"brand\":\"BlueCharm\",\"model\":\"Beacon 08\",\"model_id\":\"BC08\",\"type\":\"ACEL\",\"track\":true,\"tempc\":-11,\"tempf\":12.2,\"accx\":-107,\"accy\":-407,\"accz\":-896,\"volt\":3.085}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Contact Sensor\",\"model_id\":\"W120150X\",\"type\":\"CTMO\",\"acts\":true,\"cont\":true,\"contact\":\"timeout not closed\",\"movement\":false,\"lightlevel\":\"dark\",\"scopetested\":false,\"in_ct\":1,\"out_ct\":0,\"push_ct\":2,\"batt\":100}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Motion Sensor\",\"model_id\":\"W110150X\",\"type\":\"CTMO\",\"acts\":true,\"cont\":true,\"movement\":false,\"led\":false,\"scopetested\":false,\"sensingdistance\":\"long\",\"lightlevel\":\"bright\",\"batt\":100}",
    "{\"brand\":\"Tile\",\"model\":\"Smart Tracker\",\"model_id\":\"TILE\",\"type\":\"TRACK\",\"cidc\":false,\"acts\":true,\"cont\":true,\"track\":true,\"device\":\"Tile Tracker\"}",
    "{\"brand\":\"Tile\",\"model\":\"Smart Tracker\",\"model_id\":\"TILE\",\"type\":\"TRACK\",\"cidc\":false,\"acts\":true,\"cont\":true,\"track\":true,\"device\":\"Tile Tracker\"}",
    "{\"brand\":\"Tile\",\"model\":\"Smart Tracker\",\"model_id\":\"TILE\",\"type\":\"TRACK\",\"cidc\":false,\"acts\":true,\"cont\":true,\"track\":true,\"device\":\"Tile Tracker\"}",
    "{\"brand\":\"Xiaomi/VegTrug\",\"model\":\"MiFlora\",\"model_id\":\"HHCCJCY10\",\"type\":\"PLANT\",\"tempc\":11,\"tempf\":51.8,\"moi\":14,\"lux\":79012,\"fer\":91,\"batt\":40}",
    "{\"brand\":\"Xiaomi/VegTrug\",\"model\":\"MiFlora\",\"model_id\":\"HHCCJCY10\",\"type\":\"PLANT\",\"tempc\":0,\"tempf\":32,\"moi\":98,\"lux\":71,\"fer\":0,\"batt\":100}",
    "{\"brand\":\"Xiaomi/VegTrug\",\"model\":\"MiFlora\",\"model_id\":\"HHCCJCY10\",\"type\":\"PLANT\",\"tempc\":21,\"tempf\":69.8,\"moi\":96,\"lux\":548,\"fer\":0,\"batt\":100}",
};

const char* expected_mac_mfg[] = {
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X(S)\",\"type\":\"BBQ\",\"cidc\":false,\"tempc\":23,\"tempf\":73.4,\"tempc2\":23,\"tempf2\":73.4}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X(S)\",\"type\":\"BBQ\",\"cidc\":false,\"tempc\":28,\"tempf\":82.4,\"tempc2\":32,\"tempf2\":89.6}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X(S)\",\"type\":\"BBQ\",\"cidc\":false,\"tempc2\":65,\"tempf2\":149}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X(S)\",\"type\":\"BBQ\",\"cidc\":false,\"tempc\":22,\"tempf\":71.6,\"tempc2\":21,\"tempf2\":69.8}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X(S)\",\"type\":\"BBQ\",\"cidc\":false,\"tempc2\":58,\"tempf2\":136.4}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X(S)\",\"type\":\"BBQ\",\"cidc\":false,\"tempc\":22,\"tempf\":71.6,\"tempc2\":20.7,\"tempf2\":69.26}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X(S)\",\"type\":\"BBQ\",\"cidc\":false,\"tempc\":33.2,\"tempf\":91.76,\"tempc2\":33.5,\"tempf2\":92.3}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X(S)\",\"type\":\"BBQ\",\"cidc\":false,\"tempc2\":33.5,\"tempf2\":92.3}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-4X(S/C)\",\"type\":\"BBQ\",\"cidc\":false,\"tempc\":26,\"tempf\":78.8,\"tempc2\":26,\"tempf2\":78.8,\"tempc3\":25,\"tempf3\":77,\"tempc4\":25,\"tempf4\":77}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-4X(S/C)\",\"type\":\"BBQ\",\"cidc\":false,\"tempc\":26,\"tempf\":78.8,\"tempc3\":60,\"tempf3\":140,\"tempc4\":53,\"tempf4\":127.4}",
    "{\"brand\":\"Inkbird/Tenergy\",\"model\":\"iBBQ/SOLIS6\",\"model_id\":\"IBT-6XS/SOLIS-6\",\"type\":\"BBQ\",\"cidc\":false,\"tempc\":21,\"tempf\":69.8,\"tempc2\":20,\"tempf2\":68,\"tempc4\":21,\"tempf4\":69.8}",
    "{\"brand\":\"Inkbird/Tenergy\",\"model\":\"iBBQ/SOLIS6\",\"model_id\":\"IBT-6XS/SOLIS-6\",\"type\":\"BBQ\",\"cidc\":false,\"tempc\":20,\"tempf\":68,\"tempc2\":20,\"tempf2\":68,\"tempc4\":21,\"tempf4\":69.8}",
    "{\"brand\":\"GENERIC\",\"model\":\"TPMS\",\"model_id\":\"TPMS\",\"type\":\"TIRE\",\"cidc\":false,\"count\":1,\"pres\":2.22708,\"tempc\":31.96,\"tempf\":89.528,\"batt\":51,\"alarm\":false}",
    "{\"brand\":\"GENERIC\",\"model\":\"TPMS\",\"model_id\":\"TPMS\",\"type\":\"TIRE\",\"cidc\":false,\"count\":3,\"pres\":2.61137,\"tempc\":17.06,\"tempf\":62.708,\"batt\":83,\"alarm\":false}",
    "{\"brand\":\"Xiaomi/Amazfit\",\"model\":\"Mi Band/Smart Watch\",\"model_id\":\"MB/SW\",\"type\":\"BODY\",\"acts\":true,\"track\":true,\"act_bpm\":125,\"device\":\"Xiaomi/Amazfit Tracker\"}",
};

const char* expected_mac_mfgsvcdata[] = {
    "{\"brand\":\"Xiaomi/Amazfit\",\"model\":\"Mi Band/Smart Watch\",\"model_id\":\"MB/SW\",\"type\":\"BODY\",\"acts\":true,\"track\":true,\"steps\":9101,\"act_bpm\":125,\"device\":\"Xiaomi/Amazfit Tracker\"}",
    "{\"brand\":\"Xiaomi/Amazfit\",\"model\":\"Mi Band/Smart Watch\",\"model_id\":\"MB/SW\",\"type\":\"BODY\",\"acts\":true,\"track\":true,\"act_bpm\":132,\"device\":\"Xiaomi/Amazfit Tracker\"}",
    "{\"brand\":\"Xiaomi/Amazfit\",\"model\":\"Mi Band/Smart Watch\",\"model_id\":\"MB/SW\",\"type\":\"BODY\",\"acts\":true,\"track\":true,\"steps\":7852,\"device\":\"Xiaomi/Amazfit Tracker\"}",
    "{\"brand\":\"Xiaomi/Amazfit\",\"model\":\"Mi Band/Smart Watch\",\"model_id\":\"MB/SW\",\"type\":\"BODY\",\"acts\":true,\"track\":true,\"device\":\"Xiaomi/Amazfit Tracker\"}",
    "{\"brand\":\"Xiaomi/Amazfit\",\"model\":\"Mi Band/Smart Watch\",\"model_id\":\"MB/SW\",\"type\":\"BODY\",\"acts\":true,\"track\":true,\"steps\":7852,\"device\":\"Xiaomi/Amazfit Tracker\"}",
};

// Service data test input [test name] [data]
const char* test_servicedata[][2] = {
    {"Mi jia round sensor", "5020aa0137dfaa33342d580d100404016602"},
    {"Mi jia round sensor", "5020aa018ddfaa33342d580610026602"},
    {"Mi jia round sensor", "5020aa0155aabbccddeeff0a100151"},
    {"Mi jia round sensor", "5020aa01123c0338342d580a10013e"},
    {"Mi jia round sensor", "5020aa018ddfaa33342d580410021201"},
    {"Formaldehyde detector", "5020df02383a5c014357480a10015e"},
    {"Formaldehyde detector", "5020df02283a5c014357480610025302"},
    {"Formaldehyde detector", "5020df025b3a5c014357481010020800"},
    {"Formaldehyde detector", "5120df023e3a5c01435748041002c400"},
    {"RoPot", "71205d0183d20c6d8d7cc40d08100103"},
    {"RoPot", "71205d0188d20c6d8d7cc40d0910020100"},
    {"MiLamp", "4030dd031d0300010100"},
    {"AprilBrother N03", "ab03aabbccddeeff64ebff7f005e01"},
};

TheengsDecoder::BLE_ID_NUM test_svcdata_id_num[]{
    TheengsDecoder::BLE_ID_NUM::LYWSDCGQ,
    TheengsDecoder::BLE_ID_NUM::LYWSDCGQ,
    TheengsDecoder::BLE_ID_NUM::LYWSDCGQ,
    TheengsDecoder::BLE_ID_NUM::LYWSDCGQ,
    TheengsDecoder::BLE_ID_NUM::LYWSDCGQ,
    TheengsDecoder::BLE_ID_NUM::JQJCY01YM,
    TheengsDecoder::BLE_ID_NUM::JQJCY01YM,
    TheengsDecoder::BLE_ID_NUM::JQJCY01YM,
    TheengsDecoder::BLE_ID_NUM::JQJCY01YM,
    TheengsDecoder::BLE_ID_NUM::HHCCPOT002,
    TheengsDecoder::BLE_ID_NUM::HHCCPOT002,
    TheengsDecoder::BLE_ID_NUM::MUE4094RT,
    TheengsDecoder::BLE_ID_NUM::ABN03,
};

// manufacturer data test input [test name] [device name] [data]
const char* test_mfgdata[][3] = {
    {"Inkbird TH1", "sps", "660a03150010805908"},
    {"Inkbird TH1", "sps", "f009fe1301ca893008"},
    {"iBeacon", "BlueCharm_135727", "4c000215426c7565436861726d426561636f6e730efe1355c5"},
    {"iBeacon", "NRF51822", "4c000215fda50693a4e24fb1afcfc6eb07647825000100021a"},
    {"WS02/WS08", "ThermoBeacon", "100000001a110000f770580cf5016c0443090000"},
    {"WS02/WS08", "ThermoBeacon", "11000000ae0a000023dcb80b92017c03cdbb0300"},
    {"WS02/WS08", "ThermoBeacon", "1b002500cf1d0000d063a40cdc00bf0332270000"},
    {"WS02/WS08", "ThermoBeacon", "1500000010070000bb8e140b6c01dd02f0d47200"},
    {"WS02/WS08", "ThermoBeacon", "1500000010070000bb8eb401faa530002601c66f6700"},
    {"WS02/WS08", "ThermoBeacon", "10000000fe0d00000663db01779f010082011cd30000"},
    {"WS02/WS08", "ThermoBeacon", "11000000ae0a000023dcb001af00000083019d520300"},
    {"H5055", "GVH5055", "cf040400461b061700ffff2c01067300ffff2c010000"},
    {"H5055", "GVH5055", "cf040400417f065600ffff2c01069100ffff2c010"},
    {"H5055", "GVH5055", "cf04040061bf065c00ffff2c01063700ffff2c010000"},
    {"H5055", "GVH5055", "cf040400538f06ffffffff2c01065400ffff2c010"},
    {"H5075", "GVH5075_1234", "88ec000418ee6400"},
    {"H5075", "GVH5075_1234", "88ec00811f096400"},
    {"H5072", "GVH5072_1234", "88ec0004344b6400"},
    {"H5102", "GVH5102_1234", "0100010103590e64"},
    {"Inkbird TH2", "tps", "660a19200010805908"},
    {"Inkbird TH2", "tps", "76fb00000010805908"},
    {"Inkbird TH2", "sps", "e300bb070093c36406"},
    {"Inkbird P01B", "tps", "840affff00a6066008"},
    {"iNodeEM", "electricity", "90826300f0cf0000c409820080"},
    {"iNodeEM", "electricity", "94826300f0cf0000c409260080"},
    {"iNodeEM", "electricity", "90826300f0cf0000c409b60080"},
    {"iNodeEM", "electricity", "92826300f0cf0000c409160080"},
    {"iNodeEM", "electricity", "9082dd0061b80000c4096b0080"},
    {"iNodeEM", "water", "90826300f0cf0000c419760080"},
    {"iNodeEM", "water", "9682dd0061b80000c4193b0080"},
    {"RuuviTag RAWv1", "RuuviTag", "990403291A1ECE1EFC18F94202CA0B53"},
    {"RuuviTag RAWv1", "RuuviTag maximum values", "990403FF7F63FFFF7FFF7FFF7FFFFFFF"},
    {"RuuviTag RAWv1", "RuuviTag minimum values", "99040300FF6300008001800180010000"},
    {"RuuviTag RAWv2", "RuuviTag", "99040512FC5394C37C0004FFFC040CAC364200CDCBB8334C884F"},
    {"RuuviTag RAWv2", "RuuviTag maximum values", "9904057FFFFFFEFFFE7FFF7FFF7FFFFFDEFEFFFECBB8334C884F"},
    {"RuuviTag RAWv2", "RuuviTag minimum values", "9904058001000000008001800180010000000000CBB8334C884F"},
    {"BlueMaestro", "TempoDisc 3in1", "330117560e10177000ef01b3006c0100"},
    {"BlueMaestro", "TempoDisc 3in1", "330116430e10061eff5d030fff400100"},
    {"BlueMaestro", "TempoDisc 4in1", "33011b3a0e10061e00df02f727970100"},
    {"BlueMaestro", "TempoDisc 1in1", "33010d6402580ad100fc0100"},
    {"MS-CDP", "Windows 10 Desktop", "060001092002ac6d90ec0132b3204cd39c7ced3e48436ba15dc6314778"},
    {"BM2", "Battery Monitor", "4c000215655f83caae16a10a702e31f30d58dd82f644000064"},
    {"BM2", "Battery Monitor", "4c000215655f83caae16a10a702e31f30d58dd82f441423144"},
    {"SmartDry", "Laundry Sensor", "ae0156d708420000c84252006907"},
    {"SmartDry", "Laundry Sensor", "ae019bc8af4108d7c34208016807"},
    {"SmartDry", "Laundry Sensor", "ae018c60fe41b8fbc64233006d07"},
    {"SmartDry", "Laundry Sensor", "ae01ca9dec4160fc5f424a005207"},
    {"SmartDry", "Laundry Sensor", "ae01ca9dec4160fc5f424a005200"},
    {"SmartDry", "Laundry Sensor", "ae01ca9dec4160fc5f424a005206"},
    {"ABTemp", "ABTemp", "4c000215b5b182c7eab14988aa99b5c1517008d90001641ac5"},
    {"Amphiro", "Digital Hand Shower", "eefa0000240015000015001a0029000c194f000000"},
    {"ThermoPro", "TP357", "c2100147022c"},
    {"ThermoPro", "TP357", "c276014a022c"},
    {"ThermoPro", "TP358", "c2f50032022c"},
    {"ThermoPro", "TP358", "c2f60033022c"},
    {"ThermoPro", "TP359", "c2ff0035012c"},
    {"ThermoPro", "TP393", "c2d40037022c"},
    {"Oria", "T301", "55aa0105aabbccddeeff01070a0015e0630001"},
    {"Oria", "T301", "55aa0105aabbccddeeff010709e215e0530001"},
    {"Oria", "T301", "55aa0105aabbccddeeff01070a3c170c440001"},
    {"Oria", "T201", "55aa0101a4c13874b08501070a1d10f064000100"},
    {"BeeWi", "BSDOO", "0d00080c000664"},
    {"BeeWi", "BSDOO", "0d00080c010664"},
    {"Sensirion SHT4X", "SHT4X", "d5060006e2e7036a1c65"},
    {"Sensirion SHT4X", "SHT4X", "d5060006e2e733339dc4"},
    {"Sensirion SHT4X", "SHT4X", "d5060006e2e72b3e6891"},
    {"Sensirion SHT4X", "SHT4X", "d5060006e2e7036a1c650d09534854343020476164676574"},
    {"Sensirion MyCO2", "SCD4X", "d506000ae2e733339dc4e902"},
    {"Sensirion MyCO2", "SCD4X", "d506000867355367925c0b040609"},
    {"Sensirion MyCO2", "SCD4X", "d506000ac543016b88619a05000000009a05000000000000"},
    {"H5174", "GVH5174_1234", "01000101035e1364"},
    {"H5174", "GVH5174_1234", "01000101811a6764"},
    {"H5074", "Govee_H5074_1234", "88ec00c408231d6402"},
    {"H5074", "Govee_H5074_1234", "88ec00a0facc176402"},
    {"H5074", "Govee_H5074_1234", "88ec001b0a9b196402"},
    {"Mopeka", "Standard", "5900035d41a4c150a8cc0323"},
    {"Mopeka", "Standard", "5900035b41a4c650a8cc801b"},
    {"H5055", "GVH5055", "59045b006401201c00ffffffff20ffffffffffff0000"},
    {"H5055", "GVH5055", "59045b00640220ffffffffffff201f00ffffffff0000"},
    {"H5055", "GVH5055", "59045b00646020ffffffffffff201e00ffffffff0000"},
    {"H5055", "GVH5055", "59045b0064a020ffffffffffff202100ffffffff0000"},
    {"H5106", "GVH5106_1234", "010001010ed2e431"},
    {"H5106", "GVH5106_1234", "010001010deeaa6f"},
    {"H5106", "GVH5106_1234", "010001010ddf25cc"},
    {"H5106", "GVH5106_1234", "010001010069fcd3"},
    {"H5106", "GVH5106_1234", "01000101848420c0"},
    {"H5106", "GVH5106_1234", "0100010181aa77cf"},
    {"H5106", "GVH5106_1234", "0100010185e12c39"},
    {"Polar", "Polar H10 75087320", "6b003b164446"},
    {"Polar", "Polar H10 75087320", "6b002f166b68"},
    {"Atomax", "Skale I/II", "ef81d70400ff"},
    {"Atomax", "Skale I/II", "ef81280100ff"},
    {"Atomax", "Skale I/II", "ef8160fcffff"},
    {"Apple", "Continuity", "4c0009060304c0a87b1e130c1adefc915b9ef8010401030c"},
    {"Apple", "Continuity", "4c00130100"},
    {"Apple", "Continuity", "4c001219003d9967e0d67bf55617939043e48fd6762144da3e35160300"},
    {"Apple", "Continuity", "4c000719010e2022f58f00000a7d9fff27234873d4305e0fed1b39e2b8"},
    {"Apple", "Continuity", "4c000c0e00a7582cd64fff2fe83046c99f5b10065a19e96670d8"},
    {"Tracker iTAG", "iTAG", "8afc23eb"},
    {"Tile name", "Tile", "xxxx"},
};

TheengsDecoder::BLE_ID_NUM test_mfgdata_id_num[]{
    TheengsDecoder::BLE_ID_NUM::IBSTHBP01B,
    TheengsDecoder::BLE_ID_NUM::IBSTHBP01B,
    TheengsDecoder::BLE_ID_NUM::IBEACON,
    TheengsDecoder::BLE_ID_NUM::IBEACON,
    TheengsDecoder::BLE_ID_NUM::THERMOBEACON,
    TheengsDecoder::BLE_ID_NUM::THERMOBEACON,
    TheengsDecoder::BLE_ID_NUM::THERMOBEACON,
    TheengsDecoder::BLE_ID_NUM::THERMOBEACON,
    TheengsDecoder::BLE_ID_NUM::THERMOBEACON,
    TheengsDecoder::BLE_ID_NUM::THERMOBEACON,
    TheengsDecoder::BLE_ID_NUM::THERMOBEACON,
    TheengsDecoder::BLE_ID_NUM::H5055,
    TheengsDecoder::BLE_ID_NUM::H5055,
    TheengsDecoder::BLE_ID_NUM::H5055,
    TheengsDecoder::BLE_ID_NUM::H5055,
    TheengsDecoder::BLE_ID_NUM::H5072,
    TheengsDecoder::BLE_ID_NUM::H5072,
    TheengsDecoder::BLE_ID_NUM::H5072,
    TheengsDecoder::BLE_ID_NUM::H5102,
    TheengsDecoder::BLE_ID_NUM::IBSTHBP01B,
    TheengsDecoder::BLE_ID_NUM::IBSTHBP01B,
    TheengsDecoder::BLE_ID_NUM::IBSTHBP01B,
    TheengsDecoder::BLE_ID_NUM::IBSTHBP01B,
    TheengsDecoder::BLE_ID_NUM::INODEEM,
    TheengsDecoder::BLE_ID_NUM::INODEEM,
    TheengsDecoder::BLE_ID_NUM::INODEEM,
    TheengsDecoder::BLE_ID_NUM::INODEEM,
    TheengsDecoder::BLE_ID_NUM::INODEEM,
    TheengsDecoder::BLE_ID_NUM::INODEEM,
    TheengsDecoder::BLE_ID_NUM::INODEEM,
    TheengsDecoder::BLE_ID_NUM::RUUVITAG_RAWV1,
    TheengsDecoder::BLE_ID_NUM::RUUVITAG_RAWV1,
    TheengsDecoder::BLE_ID_NUM::RUUVITAG_RAWV1,
    TheengsDecoder::BLE_ID_NUM::RUUVITAG_RAWV2,
    TheengsDecoder::BLE_ID_NUM::RUUVITAG_RAWV2,
    TheengsDecoder::BLE_ID_NUM::RUUVITAG_RAWV2,
    TheengsDecoder::BLE_ID_NUM::BM3IN1,
    TheengsDecoder::BLE_ID_NUM::BM3IN1,
    TheengsDecoder::BLE_ID_NUM::BM4IN1,
    TheengsDecoder::BLE_ID_NUM::BM1IN1,
    TheengsDecoder::BLE_ID_NUM::MS_CDP,
    TheengsDecoder::BLE_ID_NUM::BM2,
    TheengsDecoder::BLE_ID_NUM::BM2,
    TheengsDecoder::BLE_ID_NUM::SMARTDRY,
    TheengsDecoder::BLE_ID_NUM::SMARTDRY,
    TheengsDecoder::BLE_ID_NUM::SMARTDRY,
    TheengsDecoder::BLE_ID_NUM::SMARTDRY,
    TheengsDecoder::BLE_ID_NUM::SMARTDRY,
    TheengsDecoder::BLE_ID_NUM::SMARTDRY,
    TheengsDecoder::BLE_ID_NUM::ABTEMP,
    TheengsDecoder::BLE_ID_NUM::AMPHIRO,
    TheengsDecoder::BLE_ID_NUM::TPTH,
    TheengsDecoder::BLE_ID_NUM::TPTH,
    TheengsDecoder::BLE_ID_NUM::TPTH,
    TheengsDecoder::BLE_ID_NUM::TPTH,
    TheengsDecoder::BLE_ID_NUM::TPTH,
    TheengsDecoder::BLE_ID_NUM::TPTH,
    TheengsDecoder::BLE_ID_NUM::T301,
    TheengsDecoder::BLE_ID_NUM::T301,
    TheengsDecoder::BLE_ID_NUM::T301,
    TheengsDecoder::BLE_ID_NUM::T201,
    TheengsDecoder::BLE_ID_NUM::BWBSDOO,
    TheengsDecoder::BLE_ID_NUM::BWBSDOO,
    TheengsDecoder::BLE_ID_NUM::SHT4X,
    TheengsDecoder::BLE_ID_NUM::SHT4X,
    TheengsDecoder::BLE_ID_NUM::SHT4X,
    TheengsDecoder::BLE_ID_NUM::SHT4X,
    TheengsDecoder::BLE_ID_NUM::SCD4X,
    TheengsDecoder::BLE_ID_NUM::SCD4X,
    TheengsDecoder::BLE_ID_NUM::SCD4X,
    TheengsDecoder::BLE_ID_NUM::H5102,
    TheengsDecoder::BLE_ID_NUM::H5102,
    TheengsDecoder::BLE_ID_NUM::H5074,
    TheengsDecoder::BLE_ID_NUM::H5074,
    TheengsDecoder::BLE_ID_NUM::H5074,
    TheengsDecoder::BLE_ID_NUM::MOPEKA,
    TheengsDecoder::BLE_ID_NUM::MOPEKA,
    TheengsDecoder::BLE_ID_NUM::H5055,
    TheengsDecoder::BLE_ID_NUM::H5055,
    TheengsDecoder::BLE_ID_NUM::H5055,
    TheengsDecoder::BLE_ID_NUM::H5055,
    TheengsDecoder::BLE_ID_NUM::H5106,
    TheengsDecoder::BLE_ID_NUM::H5106,
    TheengsDecoder::BLE_ID_NUM::H5106,
    TheengsDecoder::BLE_ID_NUM::H5106,
    TheengsDecoder::BLE_ID_NUM::H5106,
    TheengsDecoder::BLE_ID_NUM::H5106,
    TheengsDecoder::BLE_ID_NUM::H5106,
    TheengsDecoder::BLE_ID_NUM::PH10,
    TheengsDecoder::BLE_ID_NUM::PH10,
    TheengsDecoder::BLE_ID_NUM::SKALE,
    TheengsDecoder::BLE_ID_NUM::SKALE,
    TheengsDecoder::BLE_ID_NUM::SKALE,
    TheengsDecoder::BLE_ID_NUM::APPLE_CONT,
    TheengsDecoder::BLE_ID_NUM::APPLE_CONT,
    TheengsDecoder::BLE_ID_NUM::APPLE_CONTAT,
    TheengsDecoder::BLE_ID_NUM::APPLE_CONTAT,
    TheengsDecoder::BLE_ID_NUM::APPLE_CONTAT,
    TheengsDecoder::BLE_ID_NUM::ITAG,
    TheengsDecoder::BLE_ID_NUM::TILEN,
};

// uuid test input [test name] [device name] [uuid] [manufacturer data] [service data]
const char* test_name_uuid_mfgsvcdata[][5] = {
    {"RDL52832", "RDL52832", "0x0318", "4c000215fda50693a4e24fb1afcfc6eb0764782500010002d8", "183a2f33010000020000000100000907"},
    {"RDL52832", "RDL52832", "0x0318", "4c000215fda50693a4e24fb1afcfc6eb0764782500010002d8", "194c3a39000001040000000901000908"},
    {"RDL52832", "RDL52832", "0x0318", "4c000215fda50693a4e24fb1afcfc6eb0764782500010002d8", "1a463d34000002000100090600000105"},
    {"RDL52832", "RDL52832", "0x1803", "4c000215fda50693a4e24fb1afcfc6eb0764782500010002d8", "183a2f33010000020000000100000907"},
    {"RDL52832", "RDL52832", "0x1803", "4c000215fda50693a4e24fb1afcfc6eb0764782500010002d8", "194c3a39000001040000000901000908"},
    {"RDL52832", "RDL52832", "0x1803", "4c000215fda50693a4e24fb1afcfc6eb0764782500010002d8", "1a463d34000002000100090600000105"},
};

TheengsDecoder::BLE_ID_NUM test_name_uuid_mfgsvcdata_id_num[]{
    TheengsDecoder::BLE_ID_NUM::RDL52832,
    TheengsDecoder::BLE_ID_NUM::RDL52832,
    TheengsDecoder::BLE_ID_NUM::RDL52832,
    TheengsDecoder::BLE_ID_NUM::RDL52832,
    TheengsDecoder::BLE_ID_NUM::RDL52832,
    TheengsDecoder::BLE_ID_NUM::RDL52832,
};

// uuid name test input [test name] [uuid] [device name] [service data]
const char* test_uuid_name_svcdata[][4] = {
    {"Qingping round sensor ATC441", "0x181a", "CGG_1233DC", "582d341233dc00e03e490b2c2e"},
    {"Qingping round sensor ATC441", "0x181a", "CGG_1233DC", "582d341233dc00e13e4a0b353b"},
    {"Qingping round sensor PVVX", "0x181a", "CGG_1233DC", "dc3312342d582f09aa173d0b4b7c05"},
    {"Qingping round sensor PVVX", "0x181a", "CGG_1233DC", "dc3312342d582909c017350b4a8c05"},
    {"Qingping round sensor PVVX", "0x181a", "CGG_1233DC", "5a582d34126a38081513da0b5c0304"},
    {"Qingping round sensor Mi v4", "0xfe95", "Qingping Temp & RH", "5058480b5ddc3312342d580d1004ed005b02"},
    {"Qingping round sensor Mi v4", "0xfe95", "Qingping Temp & RH", "5058480b70dc3312342d580a100148"},
    {"ClearGrass round sensor Mi v4", "0xfe95", "ClearGrass Temp & RH", "5030470383ffeeddccbbaa0d100410017e02"},
    {"ClearGrass round sensor Mi v4", "0xfe95", "ClearGrass Temp & RH", "50304703c7ffeeddccbbaa0d1004f100ee01"},
    {"ClearGrass round sensor Mi v4", "0xfe95", "ClearGrass Temp & RH", "5030470341ffeeddccbbaa0410021201"},
    {"ClearGrass round sensor Mi v4", "0xfe95", "ClearGrass Temp & RH", "503047036affeeddccbbaa061002ee01"},
    {"ClearGrass round sensor Mi v4", "0xfe95", "ClearGrass Temp & RH", "5030470348ffeeddccbbaa0a10010b"},
    {"Qingping TH Lite sensor PVVX", "0x181a", "CGDK2_1233DC", "ffe51e12342df8080611920b649905"},
    {"Qingping TH Lite sensor ATC1441", "0x181a", "CGDK2_1233DC", "2d34121ee5ff00e62b640b71c0"},
    {"LYWSD03MMC_ATC", "0x181a", "ATC_800021", "a4c138d5d49801453e510b7b62"},
    {"LYWSD03MMC_ATC", "0x181a", "ATC_800021", "a4c138d5d498ffd33e510b7b62"},
    {"LYWSD03MMC_PVVX", "0x181a", "ATC_800021", "5601cf38c1a44008bd13470c64cc0f"},
    {"LYWSD03MMC_PVVX", "0x181a", "MHO_SAL", "628f5238c1a48307e4128f0b64b40f"},
    {"LYWSD03MMC_PVVX", "0x181a", "MHO_SAL", "5601cf38c1a462fdbd13470c64cc0f"},
    {"MJWSD05MMC_PVVX", "0x181a", "BTH_F6C51E", "2fdedf38c1a47c090d11350c644b05"},
};

TheengsDecoder::BLE_ID_NUM test_uuid_name_svcdata_id_num[]{
    TheengsDecoder::BLE_ID_NUM::CGG1_ATC1441,
    TheengsDecoder::BLE_ID_NUM::CGG1_ATC1441,
    TheengsDecoder::BLE_ID_NUM::CGG1_PVVX,
    TheengsDecoder::BLE_ID_NUM::CGG1_PVVX,
    TheengsDecoder::BLE_ID_NUM::CGG1_PVVX,
    TheengsDecoder::BLE_ID_NUM::CGG1_STOCK_2,
    TheengsDecoder::BLE_ID_NUM::CGG1_STOCK_2,
    TheengsDecoder::BLE_ID_NUM::CGG1_STOCK_2,
    TheengsDecoder::BLE_ID_NUM::CGG1_STOCK_2,
    TheengsDecoder::BLE_ID_NUM::CGG1_STOCK_2,
    TheengsDecoder::BLE_ID_NUM::CGG1_STOCK_2,
    TheengsDecoder::BLE_ID_NUM::CGG1_STOCK_2,
    TheengsDecoder::BLE_ID_NUM::CGDK2_PVVX,
    TheengsDecoder::BLE_ID_NUM::CGDK2_ATC1441,
    TheengsDecoder::BLE_ID_NUM::LYWSD03MMC_ATC,
    TheengsDecoder::BLE_ID_NUM::LYWSD03MMC_ATC,
    TheengsDecoder::BLE_ID_NUM::LYWSD03MMC_PVVX,
    TheengsDecoder::BLE_ID_NUM::LYWSD03MMC_PVVX,
    TheengsDecoder::BLE_ID_NUM::LYWSD03MMC_PVVX,
    TheengsDecoder::BLE_ID_NUM::LYWSD03MMC_PVVX,
};

// uuid test input [test name] [uuid] [data source] [data]
const char* test_uuid[][4] = {
    {"Mi Smart Scale", "0x181d", "servicedata", "223e30e607020e10293a"},
    {"Mi Smart Scale", "0x181d", "servicedata", "627607e607020e10293a"},
    {"Mi Smart Scale", "0x181d", "servicedata", "a23e30e607020e10293a"},
    {"Mi Smart Scale", "0x181d", "servicedata", "e27607e607020e10293a"},
    {"Mi Smart Scale", "0x181d", "servicedata", "237233e607020e10293a"},
    {"Mi Smart Scale", "0x181d", "servicedata", "637607e607020e10293a"},
    {"Mi Smart Scale", "0x181d", "servicedata", "a37233e607020e10293a"},
    {"Mi Smart Scale", "0x181d", "servicedata", "e37607e607020e10293a"},
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
    {"MokoXPro", "feab", "servicedata", "60000a010007154039c0fa000bf901f40c93fe3487"},
    {"MokoXPro", "feab", "servicedata", "60000a0100070100ff403ec00bf901f40c93fe3487"},
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
    {"ClearGrass clock", "fe95", "servicedata", "70205b04756ab883c8593f090410020001"},
    {"ClearGrass clock", "fe95", "servicedata", "70205b04dc6ab883c8593f09061002b202"},
    {"ClearGrass clock", "fe95", "servicedata", "70205b04756ab883c8593f090410020901"},
    {"ClearGrass clock", "fe95", "servicedata", "70205b04859638b1002ee7090a100108"},
    {"Mi flora", "fe95", "servicedata", "712098004a63b6658d7cc40d071003f32600"},
    {"Mi flora", "fe95", "servicedata", "712098005763b6658d7cc40d0810011e"},
    {"Mi flora", "fe95", "servicedata", "712098000163b6658d7cc40d0410024001"},
    {"Mi flora", "fe95", "servicedata", "712098000863b6658d7cc40d0910020000"},
    {"VegTrug flora", "fe95", "servicedata", "7120bc030163b6658d7cc40d0410024001"},
    {"Switchbot_MotionSensor", "0x0d00", "servicedata", "73b037000045"},
    {"Switchbot_MotionSensor", "0xfd3d", "servicedata", "73b037000045"},
    {"Switchbot_MotionSensor", "0xfd3d", "servicedata", "7340d50000f2"},
    {"Switchbot_Contact", "0x0d00", "servicedata", "64c05c010000000000"},
    {"Switchbot_Contact", "0x0d00", "servicedata", "6480d7020000000000"},
    {"Switchbot_Contact", "0x0d00", "servicedata", "6440c1050000000000"},
    {"Switchbot_Contact", "0xfd3d", "servicedata", "6440c1050000000000"},
    {"Qingping Air Monitor Lite", "0xfdcd", "servicedata", "080eaabbccddeeff010422014c011204710072001302ed03"},
    {"Qingping Air Monitor Lite", "0xfdcd", "servicedata", "880eaabbccddeeff0104f900b50112047d0186011302fd02"},
    {"Qingping Air Monitor Lite", "0xfdcd", "servicedata", "880eaabbccddeeff0104f600ab011204a400d7001302c702"},
    {"Qingping Air Monitor Lite", "0xfdcd", "servicedata", "8824aabbccddeeff0104ce0028021204050005001302d701"},
    {"Service data", "0x180f", "servicedata", "21"},
    {"ClearGrass alarm clock", "0xfdcd", "servicedata", "080caffd50342d5801040a017f0202012a"},
    {"ClearGrass alarm clock", "0xfdcd", "servicedata", "080caffd50342d5801040d019e020201aa"},
    {"ClearGrass alarm clock", "0xfdcd", "servicedata", "080caffd50342d5801040e019102020155"},
    {"ClearGrass Weather Station", "0xfdcd", "servicedata", "08094c0140342d5801040801870207024f2702015c"},
    {"ClearGrass Weather Station", "0xfdcd", "servicedata", "08094c0140342d5801040f01880207024f2702015c"},
    {"ClearGrass Weather Station", "0xfdcd", "servicedata", "08094c0140342d580104fc004a0207026627020120"},
    {"Qingping TH lite", "0xfdcd", "servicedata", "8810799111342d580104e8008f0302010b"},
    {"Qingping TH lite", "0xfdcd", "servicedata", "8810799111342d580104e9001d0202010b"},
    {"Qingping TH lite", "0xfdcd", "servicedata", "0810799111342d580104e9001d0202010b"},
    {"Qingping Motion & Light", "0xfdcd", "servicedata", "0812aabbccddeeff0201530f0118090400000000"},
    {"Qingping Motion & Light", "0xfdcd", "servicedata", "8812aabbccddeeff0201640f01c4090405020000"},
    {"Qingping Motion & Light", "0xfdcd", "servicedata", "4812aabbccddeeff0804010300000f0150"},
    {"Qingping Motion & Light", "0xfdcd", "servicedata", "4812aabbccddeeff0804000300000f0150"},
    {"Qingping Motion & Light", "0xfdcd", "servicedata", "c812aabbccddeeff1101010f015f"},
    {"Qingping Motion & Light", "0xfdcd", "servicedata", "4812aabbccddeeff1101000f0189"},
    {"Qingping Door Open", "0xfdcd", "servicedata", "0804751060342d580201600f012b0f0100"},
    {"Qingping Door Close", "0xfdcd", "servicedata", "0804751060342d580201600f01420f0101"},
    {"Qingping Door Open Action", "0xfdcd", "servicedata", "4804751060342d580401000f01cb"},
    {"Qingping Door Close Action", "0xfdcd", "servicedata", "4804751060342d580401010f01d5"},
    {"Qingping round sensor", "0xfdcd", "servicedata", "0807ffeeddccbbaa01041201720202010d"},
    {"Qingping round sensor", "0xfdcd", "servicedata", "8816YYYYYYYYYYYY0104eb001b01020164"},
    {"Qingping round sensor", "0xfdcd", "servicedata", "8816xxxxxxxxxxxx0104f4003b01020164"},
    {"Qingping alarm clock", "0xfdcd", "servicedata", "081eaabbccddeeff0104d200fe01020164"},
    {"Jaalee", "0xf525", "manufacturerdata", "4c000215ebefd08370a247c89837e7b5634df52567f857becb64"},
    {"Switchbot_Curtain NEW", "0xfd3d", "servicedata", "63c011641104"},
    {"BlueCharm BC08", "0xfeaa", "servicedata", "21010b0c1318000021fffdfc12"},
    {"BlueCharm BC08", "0xfeaa", "servicedata", "21010b0c0df500ff95fe69fc80"},
    {"Switchbot_Contact", "0xfd3d", "servicedata", "640064440359ffff42"},
    {"Switchbot_MotionSensor", "0xfd3d", "servicedata", "73006402f002"},
    {"Tile uuid", "0xfeed", "servicedata", "0200c58aaccd312f479e"},
    {"Tile uuid", "0xfeec", "servicedata", "0200c58aaccd312f479e"},
    {"Tile uuid", "0xfd84", "servicedata", "0200c58aaccd312f479e"},
    {"Mi flora pink tuya", "0xfd50", "servicedata", "0e006e0134a428005b"},
    {"Mi flora pink tuya", "0xfd50", "servicedata", "620000000047640000"},
    {"Mi flora pink tuya", "0xfd50", "servicedata", "6000d2000224640000"},
};

TheengsDecoder::BLE_ID_NUM test_uuid_id_num[]{
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
    TheengsDecoder::BLE_ID_NUM::MOKOBEACONXPRO,
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
    TheengsDecoder::BLE_ID_NUM::SBMS,
    TheengsDecoder::BLE_ID_NUM::SBCS,
    TheengsDecoder::BLE_ID_NUM::SBCS,
    TheengsDecoder::BLE_ID_NUM::SBCS,
    TheengsDecoder::BLE_ID_NUM::SBCS,
    TheengsDecoder::BLE_ID_NUM::CGDN1,
    TheengsDecoder::BLE_ID_NUM::CGDN1,
    TheengsDecoder::BLE_ID_NUM::CGDN1,
    TheengsDecoder::BLE_ID_NUM::CGDN1,
    TheengsDecoder::BLE_ID_NUM::SERVICE_DATA,
    TheengsDecoder::BLE_ID_NUM::CGD1,
    TheengsDecoder::BLE_ID_NUM::CGD1,
    TheengsDecoder::BLE_ID_NUM::CGD1,
    TheengsDecoder::BLE_ID_NUM::CGP1W,
    TheengsDecoder::BLE_ID_NUM::CGP1W,
    TheengsDecoder::BLE_ID_NUM::CGP1W,
    TheengsDecoder::BLE_ID_NUM::CGDK2_STOCK,
    TheengsDecoder::BLE_ID_NUM::CGDK2_STOCK,
    TheengsDecoder::BLE_ID_NUM::CGDK2_STOCK,
    TheengsDecoder::BLE_ID_NUM::CGPR1,
    TheengsDecoder::BLE_ID_NUM::CGPR1,
    TheengsDecoder::BLE_ID_NUM::CGPR1,
    TheengsDecoder::BLE_ID_NUM::CGPR1,
    TheengsDecoder::BLE_ID_NUM::CGPR1,
    TheengsDecoder::BLE_ID_NUM::CGPR1,
    TheengsDecoder::BLE_ID_NUM::CGH1,
    TheengsDecoder::BLE_ID_NUM::CGH1,
    TheengsDecoder::BLE_ID_NUM::CGH1,
    TheengsDecoder::BLE_ID_NUM::CGH1,
    TheengsDecoder::BLE_ID_NUM::CGG1_STOCK,
    TheengsDecoder::BLE_ID_NUM::CGG1_STOCK,
    TheengsDecoder::BLE_ID_NUM::CGG1_STOCK,
    TheengsDecoder::BLE_ID_NUM::CGD1,
    TheengsDecoder::BLE_ID_NUM::JHT_F525,
    TheengsDecoder::BLE_ID_NUM::SBCU,
    TheengsDecoder::BLE_ID_NUM::BC08,
    TheengsDecoder::BLE_ID_NUM::BC08,
    TheengsDecoder::BLE_ID_NUM::SBCS,
    TheengsDecoder::BLE_ID_NUM::SBMS,
    TheengsDecoder::BLE_ID_NUM::TILE,
    TheengsDecoder::BLE_ID_NUM::TILE,
    TheengsDecoder::BLE_ID_NUM::TILE,
    TheengsDecoder::BLE_ID_NUM::HHCCJCY10,
    TheengsDecoder::BLE_ID_NUM::HHCCJCY10,
    TheengsDecoder::BLE_ID_NUM::HHCCJCY10,
};

// MAC manufacturer data test input [test name] [mac] [data]
const char* test_mac_mfgdata[][3] = {
    {"IBT-2XS", "a1:b2:c3:d4:e5:f6", "00000000a1b2c3d4e5f6e600e600"},
    {"IBT-2XS", "AA:BB:CC:DD:EE:FF", "00000000aabbccddeeff18014001"},
    {"IBT-2XS", "aa:bb:cc:dd:ee:ff", "00000000aabbccddeefff6ff8a02"},
    {"IBT-2XS", "aa:bb:cc:dd:ee:ff", "00000000aabbccddeeffdc00d200"},
    {"IBT-2XS", "aa:bb:cc:dd:ee:ff", "00000000aabbccddeefff6ff4402"},
    {"IBT-2X", "aa:bb:cc:dd:ee:ff", "01000000ffeeddccbbaadc00cf00"},
    {"IBT-2X", "aa:bb:cc:dd:ee:ff", "01000000ffeeddccbbaa4c014f01"},
    {"IBT-2X", "aa:bb:cc:dd:ee:ff", "01000000ffeeddccbbaaffff4f01"},
    {"IBT-4XS", "aa:bb:cc:dd:ee:ff", "00000000aabbccddeeff04010401fa00fa00"},
    {"IBT-4XS", "aa:bb:cc:dd:ee:ff", "00000000aabbccddeeff0401f6ff58021202"},
    {"IBT-6XS", "aa:bb:cc:dd:ee:ff", "00000000aabbccddeeffd200c800f6ffd200f6fff6ff"},
    {"SOLIS_6", "aa:bb:cc:dd:ee:ff", "00000000aabbccddeeffc800c800f6ffd200f6fff6ff"},
    {"TPMS", "80:EA:CA:DD:EE:FF", "000180eacaddeefff46503007c0c00003300"},
    {"TPMS", "82:EA:CA:DD:EE:FF", "000182eacaddeeff11fc0300aa0600005300"},
    {"MiBand", "AA:BB:CC:DD:EE:FF", "57010202017dffffffffffffffffffffffffff02aabbccddeeff"},
};

TheengsDecoder::BLE_ID_NUM test_mac_mfgdata_id_num[]{
    TheengsDecoder::BLE_ID_NUM::IBT_2XS,
    TheengsDecoder::BLE_ID_NUM::IBT_2XS,
    TheengsDecoder::BLE_ID_NUM::IBT_2XS,
    TheengsDecoder::BLE_ID_NUM::IBT_2XS,
    TheengsDecoder::BLE_ID_NUM::IBT_2XS,
    TheengsDecoder::BLE_ID_NUM::IBT_2X,
    TheengsDecoder::BLE_ID_NUM::IBT_2X,
    TheengsDecoder::BLE_ID_NUM::IBT_2X,
    TheengsDecoder::BLE_ID_NUM::IBT4XS,
    TheengsDecoder::BLE_ID_NUM::IBT4XS,
    TheengsDecoder::BLE_ID_NUM::IBT6XS_SOLIS,
    TheengsDecoder::BLE_ID_NUM::IBT6XS_SOLIS,
    TheengsDecoder::BLE_ID_NUM::TPMS,
    TheengsDecoder::BLE_ID_NUM::TPMS,
    TheengsDecoder::BLE_ID_NUM::MIBAND,
};

// MAC test input [test name] [mac] [manufacturer data] [service data]
const char* test_mac_mfgsvcdata[][4] = {
    {"MiBand", "AA:BB:CC:DD:EE:FF", "57010202017dffffffffffffffffffffffffff02aabbccddeeff", "8d230000"},
    {"MiBand", "AA:BB:CC:DD:EE:FF", "570102020184ffffffffffffffffffffffffff02aabbccddeeff", ""},
    {"MiBand", "AA:BB:CC:DD:EE:FF", "570102ffffffffffffffffffffffffffffffff02aabbccddeeff", "ac1e0000"},
    {"MiBand", "AA:BB:CC:DD:EE:FF", "570102ffffffffffffffffffffffffffffffff02aabbccddeeff", ""},
    {"Amazfit Bip S", "AA:BB:CC:DD:EE:FF", "570100dcdde701d61acdc010c59c77fad0bf8e02aabbccddeeff", "ac1e0000"},
};

TheengsDecoder::BLE_ID_NUM test_mac_mfgsvcdata_id_num[]{
    TheengsDecoder::BLE_ID_NUM::MIBAND,
    TheengsDecoder::BLE_ID_NUM::MIBAND,
    TheengsDecoder::BLE_ID_NUM::MIBAND,
    TheengsDecoder::BLE_ID_NUM::MIBAND,
    TheengsDecoder::BLE_ID_NUM::MIBAND,
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

  for (unsigned int i = 0; i < sizeof(test_uuid_name_svcdata) / sizeof(test_uuid_name_svcdata[0]); ++i) {
    doc.clear();
    std::cout << "trying " << test_uuid_name_svcdata[i][0] << " : " << test_uuid_name_svcdata[i][1] << std::endl;
    doc["servicedatauuid"] = test_uuid_name_svcdata[i][1];
    doc["name"] = test_uuid_name_svcdata[i][2];
    doc["servicedata"] = test_uuid_name_svcdata[i][3];
    bleObject = doc.as<JsonObject>();

    decode_res = decoder.decodeBLEJson(bleObject);
    if (decode_res == test_uuid_name_svcdata_id_num[i]) {
      std::cout << "Found : " << decode_res << " ";
      bleObject.remove("servicedatauuid");
      bleObject.remove("name");
      bleObject.remove("servicedata");
      serializeJson(doc, std::cout);
      std::cout << std::endl;

      StaticJsonDocument<2048> doc_exp;
      JsonObject expected = doc_exp.to<JsonObject>();
      deserializeJson(doc_exp, expected_uuid_name_svcdata[i]);

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
      std::cout << "FAILED! Error parsing: " << test_uuid_name_svcdata[i][0] << " : " << test_uuid_name_svcdata[i][1] << " : " << test_uuid_name_svcdata[i][2] << " : " << test_uuid_name_svcdata[i][3] << std::endl;
      serializeJson(doc, std::cout);
      std::cout << std::endl;
      return 1;
    }
  }

  for (unsigned int i = 0; i < sizeof(test_mac_mfgsvcdata) / sizeof(test_mac_mfgsvcdata[0]); ++i) {
    doc.clear();
    std::cout << "trying " << test_mac_mfgsvcdata[i][0] << " : " << test_mac_mfgsvcdata[i][1] << test_mac_mfgsvcdata[i][2] << test_mac_mfgsvcdata[i][3] << std::endl;
    doc["id"] = test_mac_mfgsvcdata[i][1];
    doc["manufacturerdata"] = test_mac_mfgsvcdata[i][2];
    doc["servicedata"] = test_mac_mfgsvcdata[i][3];
    bleObject = doc.as<JsonObject>();

    decode_res = decoder.decodeBLEJson(bleObject);
    if (decode_res == test_mac_mfgsvcdata_id_num[i]) {
      std::cout << "Found : " << decode_res << " ";
      bleObject.remove("id");
      bleObject.remove("manufacturerdata");
      bleObject.remove("servicedata");
      serializeJson(doc, std::cout);
      std::cout << std::endl;

      StaticJsonDocument<2048> doc_exp;
      JsonObject expected = doc_exp.to<JsonObject>();
      deserializeJson(doc_exp, expected_mac_mfgsvcdata[i]);

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
      std::cout << "FAILED! Error parsing: " << test_mac_mfgsvcdata[i][0] << " : " << test_mac_mfgsvcdata[i][1] << " : " << test_mac_mfgsvcdata[i][2] << " : " << test_mac_mfgsvcdata[i][3] << std::endl;
      serializeJson(doc, std::cout);
      std::cout << std::endl;
      return 1;
    }
  }

  for (unsigned int i = 0; i < sizeof(test_name_uuid_mfgsvcdata) / sizeof(test_name_uuid_mfgsvcdata[0]); ++i) {
    doc.clear();
    std::cout << "trying " << test_name_uuid_mfgsvcdata[i][0] << " : " << test_name_uuid_mfgsvcdata[i][1] << std::endl;
    doc["name"] = test_name_uuid_mfgsvcdata[i][1];
    doc["servicedatauuid"] = test_name_uuid_mfgsvcdata[i][2];
    doc["manufacturerdata"] = test_name_uuid_mfgsvcdata[i][3];
    doc["servicedata"] = test_name_uuid_mfgsvcdata[i][4];
    bleObject = doc.as<JsonObject>();

    decode_res = decoder.decodeBLEJson(bleObject);
    if (decode_res == test_name_uuid_mfgsvcdata_id_num[i]) {
      std::cout << "Found : " << decode_res << " ";
      bleObject.remove("name");
      bleObject.remove("servicedatauuid");
      bleObject.remove("manufacturerdata");
      bleObject.remove("servicedata");
      serializeJson(doc, std::cout);
      std::cout << std::endl;

      StaticJsonDocument<2048> doc_exp;
      JsonObject expected = doc_exp.to<JsonObject>();
      deserializeJson(doc_exp, expected_name_uuid_mfgsvcdata[i]);

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
      std::cout << "FAILED! Error parsing: " << test_name_uuid_mfgsvcdata[i][0] << " : " << test_name_uuid_mfgsvcdata[i][1] << " : " << test_name_uuid_mfgsvcdata[i][2] << " : " << test_name_uuid_mfgsvcdata[i][3] << std::endl;
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

  for (unsigned int i = 0; i < sizeof(test_mac_mfgdata) / sizeof(test_mac_mfgdata[0]); ++i) {
    doc.clear();
    std::cout << "trying " << test_mac_mfgdata[i][0] << " : " << test_mac_mfgdata[i][1] << " : " << test_mac_mfgdata[i][2] << std::endl;
    doc["id"] = test_mac_mfgdata[i][1];
    doc["manufacturerdata"] = test_mac_mfgdata[i][2];
    bleObject = doc.as<JsonObject>();

    decode_res = decoder.decodeBLEJson(bleObject);
    if (decode_res == test_mac_mfgdata_id_num[i]) {
      std::cout << "Found : " << decode_res << " ";
      bleObject.remove("id");
      bleObject.remove("manufacturerdata");
      serializeJson(doc, std::cout);
      std::cout << std::endl;

      StaticJsonDocument<2048> doc_exp;
      JsonObject expected = doc_exp.to<JsonObject>();
      deserializeJson(doc_exp, expected_mac_mfg[i]);

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
      std::cout << "FAILED! Error parsing: " << test_mac_mfgdata[i][0]
                << " : " << test_mac_mfgdata[i][1] << " : "
                << test_mac_mfgdata[i][2] << "decode res: " << decode_res << std::endl;
      return 1;
    }
  }

  if (decoder.testDocMax() < 0) {
    return 1;
  }
}
