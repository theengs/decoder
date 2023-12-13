#include <cmath>
#include <iostream>
#include <limits>

#include "decoder.h"

const char* expected_servicedata[] = {
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Jia round\",\"model_id\":\"LYWSDCGQ\",\"type\":\"THB\",\"tempc\":26,\"tempf\":78.8,\"hum\":61.4,\"mac\":\"58:2D:34:33:AA:DF\"}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Jia round\",\"model_id\":\"LYWSDCGQ\",\"type\":\"THB\",\"hum\":61.4,\"mac\":\"58:2D:34:33:AA:DF\"}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Jia round\",\"model_id\":\"LYWSDCGQ\",\"type\":\"THB\",\"batt\":81,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Jia round\",\"model_id\":\"LYWSDCGQ\",\"type\":\"THB\",\"batt\":62,\"mac\":\"58:2D:34:38:03:3C\"}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Jia round\",\"model_id\":\"LYWSDCGQ\",\"type\":\"THB\",\"tempc\":27.4,\"tempf\":81.32,\"mac\":\"58:2D:34:33:AA:DF\"}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Formaldehyde detector\",\"model_id\":\"JQJCY01YM\",\"type\":\"AIR\",\"batt\":94,\"mac\":\"48:57:43:01:5C:3A\"}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Formaldehyde detector\",\"model_id\":\"JQJCY01YM\",\"type\":\"AIR\",\"hum\":59.5,\"mac\":\"48:57:43:01:5C:3A\"}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Formaldehyde detector\",\"model_id\":\"JQJCY01YM\",\"type\":\"AIR\",\"for\":0.08,\"mac\":\"48:57:43:01:5C:3A\"}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Formaldehyde detector\",\"model_id\":\"JQJCY01YM\",\"type\":\"AIR\",\"tempc\":19.6,\"tempf\":67.28,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Xiaomi\",\"model\":\"RoPot\",\"model_id\":\"HHCCPOT002\",\"type\":\"PLANT\",\"moi\":3,\"mac\":\"C4:7C:8D:6D:0C:D2\"}",
    "{\"brand\":\"Xiaomi\",\"model\":\"RoPot\",\"model_id\":\"HHCCPOT002\",\"type\":\"PLANT\",\"fer\":1,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Xiaomi\",\"model\":\"MiLamp\",\"model_id\":\"MUE4094RT\",\"type\":\"CTMO\",\"cont\":true,\"motion\":true,\"darkness\":29}",
    "{\"brand\":\"April Brother\",\"model\":\"N03\",\"model_id\":\"ABN03\",\"type\":\"THBX\",\"track\":true,\"tempc\":-2.625,\"tempf\":27.275,\"hum\":63.5,\"lux\":350,\"batt\":100,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
};

const char* expected_mfg[] = {
    "{\"brand\":\"Inkbird\",\"model\":\"T(H) Sensor\",\"model_id\":\"IBS-TH1/TH2/P01B/ITH-12S\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":26.62,\"tempf\":79.916,\"extprobe\":false,\"hum\":53.79,\"batt\":89}",
    "{\"brand\":\"Inkbird\",\"model\":\"T(H) Sensor\",\"model_id\":\"IBS-TH1/TH2/P01B/ITH-12S\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":25.44,\"tempf\":77.792,\"extprobe\":true,\"hum\":51.18,\"batt\":48}",
    "{\"brand\":\"GENERIC\",\"model\":\"iBeacon\",\"model_id\":\"IBEACON\",\"type\":\"BCON\",\"mfid\":\"4c00\",\"uuid\":\"426c7565436861726d426561636f6e73\",\"major\":3838,\"minor\":4949,\"txpower\":-59}",
    "{\"brand\":\"GENERIC\",\"model\":\"iBeacon\",\"model_id\":\"IBEACON\",\"type\":\"BCON\",\"mfid\":\"4c00\",\"uuid\":\"fda50693a4e24fb1afcfc6eb07647825\",\"major\":1,\"minor\":2,\"volt\":2.6}",
    "{\"brand\":\"Govee\",\"model\":\"Bluetooth BBQ Thermometer\",\"model_id\":\"H5055\",\"type\":\"BBQ\",\"cidc\":false,\"tempc1\":23,\"tempf1\":73.4,\"tempc2\":115,\"tempf2\":239,\"batt\":70}",
    "{\"brand\":\"Govee\",\"model\":\"Bluetooth BBQ Thermometer\",\"model_id\":\"H5055\",\"type\":\"BBQ\",\"cidc\":false,\"tempc3\":86,\"tempf3\":186.8,\"tempc4\":145,\"tempf4\":293,\"batt\":65}",
    "{\"brand\":\"Govee\",\"model\":\"Bluetooth BBQ Thermometer\",\"model_id\":\"H5055\",\"type\":\"BBQ\",\"cidc\":false,\"tempc5\":92,\"tempf5\":197.6,\"tempc6\":55,\"tempf6\":131,\"batt\":97}",
    "{\"brand\":\"Govee\",\"model\":\"Bluetooth BBQ Thermometer\",\"model_id\":\"H5055\",\"type\":\"BBQ\",\"cidc\":false,\"tempc6\":84,\"tempf6\":183.2,\"batt\":83}",
    "{\"brand\":\"Govee\",\"model\":\"Thermo-Hygrometer\",\"model_id\":\"H5072/75\",\"type\":\"THB\",\"acts\":true,\"cidc\":false,\"tempc\":26.8,\"tempf\":80.24,\"hum\":52.6,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Thermo-Hygrometer\",\"model_id\":\"H5072/75\",\"type\":\"THB\",\"acts\":true,\"cidc\":false,\"tempc\":-7.3481,\"tempf\":18.77342,\"hum\":48.1,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Thermo-Hygrometer\",\"model_id\":\"H5072/75\",\"type\":\"THB\",\"acts\":true,\"cidc\":false,\"tempc\":27.5,\"tempf\":81.5,\"hum\":53.1,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Smart Thermo-Hygrometer\",\"model_id\":\"H5100/01/02/04/74/77\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":21.9,\"tempf\":71.42,\"hum\":40.6,\"batt\":100}",
    "{\"brand\":\"Inkbird\",\"model\":\"T(H) Sensor\",\"model_id\":\"IBS-TH1/TH2/P01B/ITH-12S\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":26.62,\"tempf\":79.916,\"extprobe\":false,\"hum\":82.17,\"batt\":89}",
    "{\"brand\":\"Inkbird\",\"model\":\"T(H) Sensor\",\"model_id\":\"IBS-TH1/TH2/P01B/ITH-12S\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":-11.62,\"tempf\":11.084,\"extprobe\":false,\"batt\":89}",
    "{\"brand\":\"Inkbird\",\"model\":\"T(H) Sensor\",\"model_id\":\"IBS-TH1/TH2/P01B/ITH-12S\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":2.27,\"tempf\":36.086,\"extprobe\":false,\"hum\":19.79,\"batt\":100}",
    "{\"brand\":\"Inkbird\",\"model\":\"T(H) Sensor\",\"model_id\":\"IBS-TH1/TH2/P01B/ITH-12S\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":26.92,\"tempf\":80.456,\"extprobe\":false,\"batt\":96}",
    "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"type\":\"ENRG\",\"cidc\":false,\"avg\":2.376,\"avgu\":\"kW\",\"sum\":21.2928,\"sumu\":\"kWh\",\"batt\":70,\"lowbatt\":false}",
    "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"type\":\"ENRG\",\"cidc\":false,\"avg\":2.376,\"avgu\":\"kW\",\"sum\":21.2928,\"sumu\":\"kWh\",\"batt\":10,\"lowbatt\":true}",
    "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"type\":\"ENRG\",\"cidc\":false,\"avg\":2.376,\"avgu\":\"kW\",\"sum\":21.2928,\"sumu\":\"kWh\",\"batt\":100,\"lowbatt\":false}",
    "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"type\":\"ENRG\",\"cidc\":false,\"avg\":2.376,\"avgu\":\"kW\",\"sum\":21.2928,\"sumu\":\"kWh\",\"batt\":100,\"lowbatt\":false}",
    "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"type\":\"ENRG\",\"cidc\":false,\"avg\":5.304,\"avgu\":\"kW\",\"sum\":18.8804,\"sumu\":\"kWh\",\"batt\":50,\"lowbatt\":false}",
    "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"type\":\"ENRG\",\"cidc\":false,\"avg\":0.900545785,\"avgu\":\"m³\",\"sum\":8.070345664,\"sumu\":\"m³\",\"batt\":60,\"lowbatt\":false}",
    "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"type\":\"ENRG\",\"cidc\":false,\"avg\":2.010309278,\"avgu\":\"m³\",\"sum\":7.156003639,\"sumu\":\"m³\",\"batt\":20,\"lowbatt\":true}",
    "{\"brand\":\"Ruuvi\",\"model\":\"RuuviTag\",\"model_id\":\"RuuviTag_RAWv1\",\"type\":\"ACEL\",\"track\":true,\"hum\":20.5,\"tempc\":26.3,\"tempf\":79.34,\"pres\":1027.66,\"accx\":-0.980665,\"accy\":-1.69262779,\"accz\":0.70019481,\"volt\":2.899}",
    "{\"brand\":\"Ruuvi\",\"model\":\"RuuviTag\",\"model_id\":\"RuuviTag_RAWv1\",\"type\":\"ACEL\",\"track\":true,\"hum\":127.5,\"tempc\":127.99,\"tempf\":262.382,\"pres\":1155.35,\"accx\":32.13345006,\"accy\":32.13345006,\"accz\":32.13345006,\"volt\":65.535}",
    "{\"brand\":\"Ruuvi\",\"model\":\"RuuviTag\",\"model_id\":\"RuuviTag_RAWv1\",\"type\":\"ACEL\",\"track\":true,\"hum\":0,\"tempc\":-127.99,\"tempf\":-198.382,\"pres\":500,\"accx\":-32.13345006,\"accy\":-32.13345006,\"accz\":-32.13345006,\"volt\":0}",
    "{\"brand\":\"Blue Maestro\",\"model\":\"Tempo Disc\",\"model_id\":\"TD3in1\",\"type\":\"THBX\",\"track\":true,\"tempc\":23.9,\"tempf\":75.02,\"hum\":43.5,\"tempc2_dp\":10.8,\"tempf2_dp\":51.44,\"batt\":86}",
    "{\"brand\":\"Blue Maestro\",\"model\":\"Tempo Disc\",\"model_id\":\"TD3in1\",\"type\":\"THBX\",\"track\":true,\"tempc\":-16.3,\"tempf\":2.66,\"hum\":78.3,\"tempc2_dp\":-19.2,\"tempf2_dp\":-2.56,\"batt\":67}",
    "{\"brand\":\"Blue Maestro\",\"model\":\"Tempo Disc\",\"model_id\":\"TD4in1\",\"type\":\"THBX\",\"track\":true,\"tempc\":22.3,\"tempf\":72.14,\"hum\":75.9,\"pres\":1013.5,\"batt\":58}",
    "{\"brand\":\"Blue Maestro\",\"model\":\"Tempo Disc\",\"model_id\":\"TD1in1\",\"type\":\"THB\",\"track\":true,\"tempc\":25.2,\"tempf\":77.36,\"batt\":100}",
    "{\"brand\":\"GENERIC\",\"model\":\"MS-CDP\",\"model_id\":\"MS-CDP\",\"type\":\"RMAC\",\"device\":\"Microsoft advertising beacon\"}",
    "{\"brand\":\"GENERIC\",\"model\":\"BM2 Battery Monitor\",\"model_id\":\"BM2\",\"type\":\"BATT\",\"track\":true,\"batt\":100,\"device\":\"BM2 Tracker\"}",
    "{\"brand\":\"GENERIC\",\"model\":\"BM2 Battery Monitor\",\"model_id\":\"BM2\",\"type\":\"BATT\",\"track\":true,\"batt\":68,\"device\":\"BM2 Tracker\"}",
    "{\"brand\":\"SmartDry\",\"model\":\"Laundry Sensor\",\"model_id\":\"SDLS\",\"type\":\"UNIQ\",\"cidc\":false,\"tempc\":34.210289,\"tempf\":93.5785202,\"hum\":100,\"shake\":82,\"volt\":2.952,\"wake\":true}",
    "{\"brand\":\"SmartDry\",\"model\":\"Laundry Sensor\",\"model_id\":\"SDLS\",\"type\":\"UNIQ\",\"cidc\":false,\"tempc\":21.97295189,\"tempf\":71.5513134,\"hum\":97.91998291,\"shake\":264,\"volt\":2.951,\"wake\":true}",
    "{\"brand\":\"SmartDry\",\"model\":\"Laundry Sensor\",\"model_id\":\"SDLS\",\"type\":\"UNIQ\",\"cidc\":false,\"tempc\":31.79714203,\"tempf\":89.23485565,\"hum\":99.49163818,\"shake\":51,\"volt\":2.956,\"wake\":true}",
    "{\"brand\":\"SmartDry\",\"model\":\"Laundry Sensor\",\"model_id\":\"SDLS\",\"type\":\"UNIQ\",\"cidc\":false,\"tempc\":29.57704544,\"tempf\":85.23868179,\"hum\":55.99645996,\"shake\":74,\"volt\":2.929,\"wake\":true}",
    "{\"brand\":\"SmartDry\",\"model\":\"Laundry Sensor\",\"model_id\":\"SDLS\",\"type\":\"UNIQ\",\"cidc\":false,\"tempc\":29.57704544,\"tempf\":85.23868179,\"hum\":55.99645996,\"shake\":74,\"volt\":2.929,\"wake\":false}",
    "{\"brand\":\"SmartDry\",\"model\":\"Laundry Sensor\",\"model_id\":\"SDLS\",\"type\":\"UNIQ\",\"cidc\":false,\"tempc\":29.57704544,\"tempf\":85.23868179,\"hum\":55.99645996,\"shake\":74,\"volt\":2.929,\"wake\":false}",
    "{\"brand\":\"Oras\",\"model\":\"Hydractiva Digital\",\"model_id\":\"ADHS\",\"type\":\"ENRG\",\"cidc\":false,\"session\":36,\"seconds\":21,\"litres\":2.6,\"tempc\":41,\"tempf\":105.8,\"energy\":0.12}",
    "{\"brand\":\"ThermoPro\",\"model\":\"TH Sensor\",\"model_id\":\"TP35X/393\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":27.2,\"tempf\":80.96,\"hum\":71}",
    "{\"brand\":\"ThermoPro\",\"model\":\"TH Sensor\",\"model_id\":\"TP35X/393\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":37.4,\"tempf\":99.32,\"hum\":74}",
    "{\"brand\":\"ThermoPro\",\"model\":\"TH Sensor\",\"model_id\":\"TP35X/393\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":21.4,\"tempf\":70.52,\"hum\":67}",
    "{\"brand\":\"ThermoPro\",\"model\":\"TH Sensor\",\"model_id\":\"TP35X/393\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":24.5,\"tempf\":76.1,\"hum\":50}",
    "{\"brand\":\"ThermoPro\",\"model\":\"TH Sensor\",\"model_id\":\"TP35X/393\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":24.6,\"tempf\":76.28,\"hum\":51}",
    "{\"brand\":\"ThermoPro\",\"model\":\"TH Sensor\",\"model_id\":\"TP35X/393\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":25.5,\"tempf\":77.9,\"hum\":53}",
    "{\"brand\":\"ThermoPro\",\"model\":\"TH Sensor\",\"model_id\":\"TP35X/393\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":21.2,\"tempf\":70.16,\"hum\":55}",
    "{\"brand\":\"Oria\",\"model\":\"TH Sensor\",\"model_id\":\"T301\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":25.6,\"tempf\":78.08,\"hum\":56,\"batt\":99,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Oria\",\"model\":\"TH Sensor\",\"model_id\":\"T301\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":25.3,\"tempf\":77.54,\"hum\":56,\"batt\":83,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Oria\",\"model\":\"TH Sensor\",\"model_id\":\"T301\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":26.2,\"tempf\":79.16,\"hum\":59,\"batt\":68,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Oria\",\"model\":\"TH Sensor\",\"model_id\":\"T201\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":25.89,\"tempf\":78.602,\"hum\":43.36,\"batt\":100,\"mac\":\"A4:C1:38:74:B0:85\"}",
    "{\"brand\":\"Otio/BeeWi\",\"model\":\"Door & Window Sensor\",\"model_id\":\"BSDOO\",\"type\":\"CTMO\",\"cidc\":false,\"cont\":true,\"open\":false,\"batt\":100}",
    "{\"brand\":\"Otio/BeeWi\",\"model\":\"Door & Window Sensor\",\"model_id\":\"BSDOO\",\"type\":\"CTMO\",\"cidc\":false,\"cont\":true,\"open\":true,\"batt\":100}",
    "{\"brand\":\"Sensirion\",\"model\":\"TH Sensor\",\"model_id\":\"SHT4X\",\"type\":\"THB\",\"tempc\":27.47005417,\"tempf\":81.44609751,\"hum\":43.37056535}",
    "{\"brand\":\"Sensirion\",\"model\":\"TH Sensor\",\"model_id\":\"SHT4X\",\"type\":\"THB\",\"tempc\":-10,\"tempf\":14,\"hum\":90.00404364}",
    "{\"brand\":\"Sensirion\",\"model\":\"TH Sensor\",\"model_id\":\"SHT4X\",\"type\":\"THB\",\"tempc\":-2.50171664,\"tempf\":27.49691005,\"hum\":65.00022889}",
    "{\"brand\":\"Sensirion\",\"model\":\"TH Sensor\",\"model_id\":\"SHT4X\",\"type\":\"THB\",\"tempc\":27.47005417,\"tempf\":81.44609751,\"hum\":43.37056535}",
    "{\"brand\":\"Sensirion\",\"model\":\"MyCO₂/CO₂ Gadget\",\"model_id\":\"SCD4X\",\"type\":\"AIR\",\"tempc\":-10,\"tempf\":14,\"hum\":76.80323491,\"co2\":745}",
    "{\"brand\":\"Sensirion\",\"model\":\"MyCO₂/CO₂ Gadget\",\"model_id\":\"SCD4X\",\"type\":\"AIR\",\"tempc\":25.63286793,\"tempf\":78.13916228,\"hum\":36.16083009,\"co2\":1035}",
    "{\"brand\":\"Sensirion\",\"model\":\"MyCO₂/CO₂ Gadget\",\"model_id\":\"SCD4X\",\"type\":\"AIR\",\"tempc\":28.14831769,\"tempf\":82.66697185,\"hum\":38.09872587,\"co2\":1434}",
    "{\"brand\":\"Govee\",\"model\":\"Smart Thermo-Hygrometer\",\"model_id\":\"H5100/01/02/04/74/77\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":22,\"tempf\":71.6,\"hum\":69.1,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Smart Thermo-Hygrometer\",\"model_id\":\"H5100/01/02/04/74/77\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":-7.2,\"tempf\":19.04,\"hum\":29.5,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Thermo-Hygrometer\",\"model_id\":\"H5074\",\"type\":\"THB\",\"acts\":true,\"cidc\":false,\"tempc\":22.44,\"tempf\":72.392,\"hum\":74.59,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Thermo-Hygrometer\",\"model_id\":\"H5074\",\"type\":\"THB\",\"acts\":true,\"cidc\":false,\"tempc\":-13.76,\"tempf\":7.232,\"hum\":60.92,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Thermo-Hygrometer\",\"model_id\":\"H5074\",\"type\":\"THB\",\"acts\":true,\"cidc\":false,\"tempc\":25.87,\"tempf\":78.566,\"hum\":65.55,\"batt\":100}",
    "{\"brand\":\"Mopeka/Lippert\",\"model\":\"Pro Check (Universal)/BottleCheck Sensor\",\"model_id\":\"M1017\",\"type\":\"UNIQ\",\"cidc\":false,\"tempc\":25,\"tempf\":77,\"lvl_cm\":15.4144725,\"lvl_in\":6.068689961,\"sync\":false,\"volt\":2.90625,\"batt\":100,\"quality\":3,\"accx\":3,\"accy\":35}",
    "{\"brand\":\"Mopeka/Lippert\",\"model\":\"Pro Check (Universal)/BottleCheck Sensor\",\"model_id\":\"M1017\",\"type\":\"UNIQ\",\"cidc\":false,\"tempc\":25,\"tempf\":77,\"lvl_cm\":62.3919125,\"lvl_in\":24.56374508,\"sync\":false,\"volt\":2.84375,\"batt\":99.03846154,\"quality\":3,\"accx\":-128,\"accy\":27}",
    "{\"brand\":\"Govee\",\"model\":\"Bluetooth BBQ Thermometer\",\"model_id\":\"H5055\",\"type\":\"BBQ\",\"cidc\":false,\"tempc1\":28,\"tempf1\":82.4,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Bluetooth BBQ Thermometer\",\"model_id\":\"H5055\",\"type\":\"BBQ\",\"cidc\":false,\"tempc2\":31,\"tempf2\":87.8,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Bluetooth BBQ Thermometer\",\"model_id\":\"H5055\",\"type\":\"BBQ\",\"cidc\":false,\"tempc4\":30,\"tempf4\":86,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Bluetooth BBQ Thermometer\",\"model_id\":\"H5055\",\"type\":\"BBQ\",\"cidc\":false,\"tempc6\":33,\"tempf6\":91.4,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Smart Air Quality Monitor\",\"model_id\":\"H5106\",\"type\":\"AIR\",\"cidc\":false,\"acts\":true,\"tempc\":24.8,\"tempf\":76.64,\"hum\":70.2,\"pm25\":1}",
    "{\"brand\":\"Govee\",\"model\":\"Smart Air Quality Monitor\",\"model_id\":\"H5106\",\"type\":\"AIR\",\"cidc\":false,\"acts\":true,\"tempc\":23.3,\"tempf\":73.94,\"hum\":74.5,\"pm25\":7}",
    "{\"brand\":\"Govee\",\"model\":\"Smart Air Quality Monitor\",\"model_id\":\"H5106\",\"type\":\"AIR\",\"cidc\":false,\"acts\":true,\"tempc\":23.2,\"tempf\":73.76,\"hum\":72.8,\"pm25\":12}",
    "{\"brand\":\"Govee\",\"model\":\"Smart Air Quality Monitor\",\"model_id\":\"H5106\",\"type\":\"AIR\",\"cidc\":false,\"acts\":true,\"tempc\":0.6,\"tempf\":33.08,\"hum\":94.6,\"pm25\":3}",
    "{\"brand\":\"Govee\",\"model\":\"Smart Air Quality Monitor\",\"model_id\":\"H5106\",\"type\":\"AIR\",\"cidc\":false,\"acts\":true,\"tempc\":-7.5,\"tempf\":18.5,\"hum\":76.8,\"pm25\":0}",
    "{\"brand\":\"Govee\",\"model\":\"Smart Air Quality Monitor\",\"model_id\":\"H5106\",\"type\":\"AIR\",\"cidc\":false,\"acts\":true,\"tempc\":-2.7,\"tempf\":27.14,\"hum\":94.9,\"pm25\":7}",
    "{\"brand\":\"Govee\",\"model\":\"Smart Air Quality Monitor\",\"model_id\":\"H5106\",\"type\":\"AIR\",\"cidc\":false,\"acts\":true,\"tempc\":-9.8,\"tempf\":14.36,\"hum\":64.3,\"pm25\":1}",
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
    "{\"brand\":\"Govee\",\"model\":\"Smart Air Quality Monitor\",\"model_id\":\"H5106\",\"type\":\"AIR\",\"cidc\":false,\"acts\":true,\"tempc\":22.7,\"tempf\":72.86,\"hum\":63.1,\"pm25\":2}",
    "{\"brand\":\"Govee\",\"model\":\"Thermo-Hygrometer\",\"model_id\":\"H5072/75\",\"type\":\"THB\",\"acts\":true,\"cidc\":false,\"tempc\":23,\"tempf\":73.4,\"hum\":62.8,\"batt\":92}",
    "{\"brand\":\"April Brother\",\"model\":\"ABTemp\",\"model_id\":\"ABTemp\",\"type\":\"BCON\",\"track\":true,\"mfid\":\"4c00\",\"uuid\":\"b5b182c7eab14988aa99b5c1517008d9\",\"major\":1,\"batt\":100,\"tempc\":26,\"tempf\":78.8,\"txpower\":-59}",
    "{\"brand\":\"Mopeka/Lippert\",\"model\":\"Pro Check (Universal)/BottleCheck Sensor\",\"model_id\":\"M1017\",\"type\":\"UNIQ\",\"cidc\":false,\"tempc\":19,\"tempf\":66.2,\"lvl_cm\":0,\"lvl_in\":0,\"sync\":false,\"volt\":2.90625,\"batt\":100,\"quality\":0,\"accx\":16,\"accy\":-101}",
    "{\"brand\":\"Mopeka/Lippert\",\"model\":\"Pro Check (Universal)/BottleCheck Sensor\",\"model_id\":\"M1017\",\"type\":\"UNIQ\",\"cidc\":false,\"tempc\":25,\"tempf\":77,\"lvl_cm\":0,\"lvl_in\":0,\"sync\":false,\"volt\":3,\"batt\":100,\"quality\":0,\"accx\":44,\"accy\":-128}",
    "{\"brand\":\"Mopeka/Lippert\",\"model\":\"Pro Check (Universal)/BottleCheck Sensor\",\"model_id\":\"M1017\",\"type\":\"UNIQ\",\"cidc\":false,\"tempc\":21,\"tempf\":69.8,\"lvl_cm\":86.60031125,\"lvl_in\":34.09461073,\"sync\":false,\"volt\":3,\"batt\":100,\"quality\":3,\"accx\":-18,\"accy\":31}",
    "{\"brand\":\"GENERIC\",\"model\":\"BM2 Battery Monitor\",\"model_id\":\"BM2\",\"type\":\"BATT\",\"track\":true,\"batt\":87,\"device\":\"BM2 Tracker\"}",
    "{\"brand\":\"GENERIC\",\"model\":\"BM2 Battery Monitor\",\"model_id\":\"BM2\",\"type\":\"BATT\",\"track\":true,\"batt\":73,\"device\":\"BM2 Tracker\"}",
    "{\"brand\":\"Govee\",\"model\":\"Smart Thermo-Hygrometer\",\"model_id\":\"H5100/01/02/04/74/77\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":26,\"tempf\":78.8,\"hum\":51,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Thermo-Hygrometer\",\"model_id\":\"H5179\",\"type\":\"THB\",\"cidc\":false,\"acts\":true,\"tempc\":20.3,\"tempf\":68.54,\"hum\":57.2,\"batt\":65}",
    "{\"brand\":\"Oral-B\",\"model\":\"BT Toothbrush\",\"model_id\":\"ORALB_BT\",\"type\":\"BODY\",\"state\":\"idle\",\"mode\":\"off\",\"pressure\":54,\"time\":0}",
    "{\"brand\":\"Oral-B\",\"model\":\"BT Toothbrush\",\"model_id\":\"ORALB_BT\",\"type\":\"BODY\",\"state\":\"running\",\"mode\":\"daily clean\",\"sector\":\"sector 3\",\"pressure\":50,\"duration\":63}",
    "{\"brand\":\"Oral-B\",\"model\":\"BT Toothbrush\",\"model_id\":\"ORALB_BT\",\"type\":\"BODY\",\"state\":\"initialising\",\"mode\":\"sensitive\",\"sector\":\"sector 1\",\"pressure\":58,\"duration\":0}",
    "{\"brand\":\"Oral-B\",\"model\":\"BT Toothbrush\",\"model_id\":\"ORALB_BT\",\"type\":\"BODY\",\"state\":\"charging\",\"mode\":\"massage\",\"sector\":\"sector 3\",\"pressure\":50,\"duration\":74}",
    "{\"brand\":\"Oral-B\",\"model\":\"BT Toothbrush\",\"model_id\":\"ORALB_BT\",\"type\":\"BODY\",\"state\":\"sleeping\",\"mode\":\"deep clean\",\"sector\":\"sector 3\",\"pressure\":50,\"duration\":74}",
    "{\"brand\":\"Oral-B\",\"model\":\"BT Toothbrush\",\"model_id\":\"ORALB_BT\",\"type\":\"BODY\",\"state\":\"running\",\"mode\":\"tongue cleaning\",\"sector\":\"sector 3\",\"pressure\":50,\"duration\":74}",
    "{\"brand\":\"Oral-B\",\"model\":\"BT Toothbrush\",\"model_id\":\"ORALB_BT\",\"type\":\"BODY\",\"state\":\"running\",\"mode\":\"turbo\",\"sector\":\"sector 3\",\"pressure\":50,\"duration\":74}",
    "{\"brand\":\"Oral-B\",\"model\":\"BT Toothbrush\",\"model_id\":\"ORALB_BT\",\"type\":\"BODY\",\"state\":\"running\",\"sector\":\"sector 3\",\"pressure\":50,\"duration\":74}",
    "{\"brand\":\"Oral-B\",\"model\":\"BT Toothbrush\",\"model_id\":\"ORALB_BT\",\"type\":\"BODY\",\"state\":\"idle\",\"mode\":\"daily clean\",\"sector\":\"sector 1\",\"pressure\":32,\"duration\":0}",
    "{\"brand\":\"Oral-B\",\"model\":\"BT Toothbrush\",\"model_id\":\"ORALB_BT\",\"type\":\"BODY\",\"state\":\"sleeping\",\"mode\":\"turbo\",\"sector\":\"sector 8\",\"pressure\":32,\"duration\":135}",
    "{\"brand\":\"GENERIC\",\"model\":\"BM6 Battery Monitor\",\"model_id\":\"BM6\",\"type\":\"BATT\",\"track\":true,\"batt\":77,\"device\":\"BM6 Tracker\"}",
    "{\"brand\":\"GENERIC\",\"model\":\"BM6 Battery Monitor\",\"model_id\":\"BM6\",\"type\":\"BATT\",\"track\":true,\"batt\":78,\"device\":\"BM6 Tracker\"}",
};

const char* expected_name_uuid_mfgsvcdata[] = {
    "{\"brand\":\"Radioland\",\"model\":\"RDL52832\",\"model_id\":\"RDL52832\",\"type\":\"ACEL\",\"acts\":true,\"track\":true,\"mfid\":\"4c00\",\"uuid\":\"fda50693a4e24fb1afcfc6eb07647825\",\"major\":9999,\"minor\":9999,\"txpower\":-40,\"tempc\":24.2265625,\"tempf\":75.6078125,\"hum\":47.19921875,\"accx\":-0.196133,\"accy\":0.0980665,\"accz\":9.5124505}",
    "{\"brand\":\"Radioland\",\"model\":\"RDL52832\",\"model_id\":\"RDL52832\",\"type\":\"ACEL\",\"acts\":true,\"track\":true,\"mfid\":\"4c00\",\"uuid\":\"fda50693a4e24fb1afcfc6eb07647825\",\"major\":1,\"minor\":2,\"txpower\":-40,\"tempc\":25.296875,\"tempf\":77.534375,\"hum\":58.22265625,\"accx\":1.372931,\"accy\":0.8825985,\"accz\":-9.610517}",
    "{\"brand\":\"Radioland\",\"model\":\"RDL52832\",\"model_id\":\"RDL52832\",\"type\":\"ACEL\",\"acts\":true,\"track\":true,\"mfid\":\"4c00\",\"uuid\":\"fda50693a4e24fb1afcfc6eb07647825\",\"major\":1,\"minor\":2,\"txpower\":-40,\"tempc\":26.2734375,\"tempf\":79.2921875,\"hum\":61.203125,\"accx\":1.96133,\"accy\":-9.414384,\"accz\":1.4709975}",
    "{\"brand\":\"Radioland\",\"model\":\"RDL52832\",\"model_id\":\"RDL52832\",\"type\":\"ACEL\",\"acts\":true,\"track\":true,\"mfid\":\"4c00\",\"uuid\":\"fda50693a4e24fb1afcfc6eb07647825\",\"major\":1,\"minor\":2,\"txpower\":-40,\"tempc\":24.2265625,\"tempf\":75.6078125,\"hum\":47.19921875,\"accx\":-0.196133,\"accy\":0.0980665,\"accz\":9.5124505}",
    "{\"brand\":\"Radioland\",\"model\":\"RDL52832\",\"model_id\":\"RDL52832\",\"type\":\"ACEL\",\"acts\":true,\"track\":true,\"mfid\":\"4c00\",\"uuid\":\"fda50693a4e24fb1afcfc6eb07647825\",\"major\":1,\"minor\":2,\"txpower\":-40,\"tempc\":25.296875,\"tempf\":77.534375,\"hum\":58.22265625,\"accx\":1.372931,\"accy\":0.8825985,\"accz\":-9.610517}",
    "{\"brand\":\"Radioland\",\"model\":\"RDL52832\",\"model_id\":\"RDL52832\",\"type\":\"ACEL\",\"acts\":true,\"track\":true,\"mfid\":\"4c00\",\"uuid\":\"fda50693a4e24fb1afcfc6eb07647825\",\"major\":1,\"minor\":2,\"txpower\":-40,\"tempc\":26.2734375,\"tempf\":79.2921875,\"hum\":61.203125,\"accx\":1.96133,\"accy\":-9.414384,\"accz\":1.4709975}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Outdoor Meter\",\"model_id\":\"W340001X\",\"type\":\"THB\",\"acts\":true,\"tempc\":25.5,\"tempf\":77.9,\"hum\":50,\"batt\":100,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Outdoor Meter\",\"model_id\":\"W340001X\",\"type\":\"THB\",\"acts\":true,\"tempc\":26.3,\"tempf\":79.34,\"hum\":80,\"batt\":100,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Outdoor Meter\",\"model_id\":\"W340001X\",\"type\":\"THB\",\"acts\":true,\"tempc\":-15.9,\"tempf\":3.38,\"hum\":42,\"batt\":65,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Sensor Easy\",\"model\":\"SE TEMP\",\"model_id\":\"SE_TEMP\",\"type\":\"THB\",\"tempc\":21.79,\"tempf\":71.222,\"volt\":3.09}",
    "{\"brand\":\"Sensor Easy\",\"model\":\"SE RHT\",\"model_id\":\"SE_RHT\",\"type\":\"THB\",\"hum\":47,\"volt\":3.097}",
    "{\"brand\":\"Sensor Easy\",\"model\":\"SE TEMP PROBE\",\"model_id\":\"SE_TPROBE\",\"type\":\"THB\",\"tempc\":20.6,\"tempf\":69.08,\"volt\":3.044}",
    "{\"brand\":\"Sensor Easy\",\"model\":\"SE MAG\",\"model_id\":\"SE_MAG\",\"type\":\"CTMO\",\"cont\":true,\"open\":false,\"volt\":3.079}",
};

const char* expected_name_mac_uuid_mfgsvcdata[] = {
    "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Button1\",\"model_id\":\"SBBT-002C\",\"type\":\"BTN\",\"acts\":true,\"cont\":true,\"packet\":29,\"batt\":100,\"press\":1,\"mac\":\"BC:02:6E:AA:BB:CC\"}",
    "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Button1 encrypted\",\"model_id\":\"SBBT_002C_ENCR\",\"type\":\"BTN\",\"acts\":true,\"cont\":true,\"encr\":2,\"cipher\":\"62511158bd25\",\"ctr\":\"b8f09364\",\"mic\":\"5b573115\",\"mac\":\"BC:02:6E:AA:BB:CC\"}",
    "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Door/Window\",\"model_id\":\"SBDW-002C\",\"type\":\"CTMO\",\"acts\":true,\"cont\":true,\"packet\":93,\"batt\":100,\"lux\":87,\"open\":true,\"rot\":40.6,\"mac\":\"3C:2E:F5:AA:BB:CC\"}",
    "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Door/Window\",\"model_id\":\"SBDW-002C\",\"type\":\"CTMO\",\"acts\":true,\"cont\":true,\"packet\":86,\"batt\":100,\"lux\":673,\"open\":false,\"rot\":0,\"mac\":\"3C:2E:F5:AA:BB:CC\"}",
    "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Door/Window encrypted\",\"model_id\":\"SBDW_002C_ENCR\",\"type\":\"CTMO\",\"acts\":true,\"cont\":true,\"encr\":2,\"cipher\":\"38efaf00d122b4979064e971a7\",\"ctr\":\"ed16c164\",\"mic\":\"4dc481fd\",\"mac\":\"3C:2E:F5:AA:BB:CC\"}",
    "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Motion\",\"model_id\":\"SBMO-003Z\",\"type\":\"CTMO\",\"acts\":true,\"cont\":true,\"packet\":2,\"batt\":100,\"lux\":132,\"motion\":true,\"mac\":\"60:EF:AB:AA:BB:CC\"}",
    "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Motion\",\"model_id\":\"SBMO-003Z\",\"type\":\"CTMO\",\"acts\":true,\"cont\":true,\"packet\":5,\"batt\":100,\"lux\":36,\"motion\":false,\"mac\":\"60:EF:AB:AA:BB:CC\"}",
    "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Motion encrypted\",\"model_id\":\"SBMO_003Z_ENCR\",\"type\":\"CTMO\",\"acts\":true,\"cont\":true,\"encr\":2,\"cipher\":\"cc08edf25d61cc0f42b6\",\"ctr\":\"00112233\",\"mic\":\"18cd3624\",\"mac\":\"60:EF:AB:AA:BB:CC\"}",
};

const char* expected_uuid_name_svcdata[] = {
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1_ATC1441\",\"type\":\"THB\",\"acts\":true,\"tempc\":22.4,\"tempf\":72.32,\"hum\":62,\"batt\":73,\"volt\":2.86,\"mac\":\"58:2D:34:12:33:DC\"}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1_ATC1441\",\"type\":\"THB\",\"acts\":true,\"tempc\":22.5,\"tempf\":72.5,\"hum\":62,\"batt\":74,\"volt\":2.869,\"mac\":\"58:2D:34:12:33:DC\"}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1_PVVX\",\"type\":\"THB\",\"acts\":true,\"tempc\":23.51,\"tempf\":74.318,\"hum\":60.58,\"batt\":75,\"volt\":2.877,\"mac\":\"58:2D:34:12:33:DC\"}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1_PVVX\",\"type\":\"THB\",\"acts\":true,\"tempc\":23.45,\"tempf\":74.21,\"hum\":60.8,\"batt\":74,\"volt\":2.869,\"mac\":\"58:2D:34:12:33:DC\"}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1_PVVX\",\"type\":\"THB\",\"acts\":true,\"tempc\":21.04,\"tempf\":69.872,\"hum\":48.85,\"batt\":92,\"volt\":3.034,\"mac\":\"6A:12:34:2D:58:5A\"}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1\",\"type\":\"THB\",\"acts\":true,\"tempc\":23.7,\"tempf\":74.66,\"hum\":60.3,\"mac\":\"58:2D:34:12:33:DC\"}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1\",\"type\":\"THB\",\"acts\":true,\"batt\":72,\"mac\":\"58:2D:34:12:33:DC\"}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1\",\"type\":\"THB\",\"acts\":true,\"tempc\":27.2,\"tempf\":80.96,\"hum\":63.8,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1\",\"type\":\"THB\",\"acts\":true,\"tempc\":24.1,\"tempf\":75.38,\"hum\":49.4,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1\",\"type\":\"THB\",\"acts\":true,\"tempc\":27.4,\"tempf\":81.32,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1\",\"type\":\"THB\",\"acts\":true,\"hum\":49.4,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1\",\"type\":\"THB\",\"acts\":true,\"batt\":11,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"TH Lite\",\"model_id\":\"CGDK2_PVVX\",\"type\":\"THB\",\"acts\":true,\"tempc\":22.96,\"tempf\":73.328,\"hum\":43.58,\"batt\":100,\"volt\":2.962,\"mac\":\"2D:34:12:1E:E5:FF\"}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"TH Lite\",\"model_id\":\"CGDK2_ATC1441\",\"type\":\"THB\",\"acts\":true,\"tempc\":23,\"tempf\":73.4,\"hum\":43,\"batt\":100,\"volt\":2.929,\"mac\":\"2D:34:12:1E:E5:FF\"}",
    "{\"brand\":\"Xiaomi\",\"model\":\"TH Sensor\",\"model_id\":\"LYWSD03MMC/MJWSD05MMC_ATC\",\"type\":\"THB\",\"tempc\":32.5,\"tempf\":90.5,\"hum\":62,\"batt\":81,\"volt\":2.939,\"mac\":\"A4:C1:38:D5:D4:98\"}",
    "{\"brand\":\"Xiaomi\",\"model\":\"TH Sensor\",\"model_id\":\"LYWSD03MMC/MJWSD05MMC_ATC\",\"type\":\"THB\",\"tempc\":-4.5,\"tempf\":23.9,\"hum\":62,\"batt\":81,\"volt\":2.939,\"mac\":\"A4:C1:38:D5:D4:98\"}",
    "{\"brand\":\"Xiaomi\",\"model\":\"TH Sensor\",\"model_id\":\"LYWSD03MMC/MJWSD05MMC_PVVX\",\"type\":\"THB\",\"tempc\":21.12,\"tempf\":70.016,\"hum\":50.53,\"batt\":100,\"volt\":3.143,\"mac\":\"A4:C1:38:CF:01:56\"}",
    "{\"brand\":\"Xiaomi\",\"model\":\"TH Sensor\",\"model_id\":\"LYWSD03MMC/MJWSD05MMC_PVVX\",\"type\":\"THB\",\"tempc\":19.23,\"tempf\":66.614,\"hum\":48.36,\"batt\":100,\"volt\":2.959,\"mac\":\"A4:C1:38:52:8F:62\"}",
    "{\"brand\":\"Xiaomi\",\"model\":\"TH Sensor\",\"model_id\":\"LYWSD03MMC/MJWSD05MMC_PVVX\",\"type\":\"THB\",\"tempc\":-6.7,\"tempf\":19.94,\"hum\":50.53,\"batt\":100,\"volt\":3.143,\"mac\":\"A4:C1:38:CF:01:56\"}",
    "{\"brand\":\"Xiaomi\",\"model\":\"TH Sensor\",\"model_id\":\"LYWSD03MMC/MJWSD05MMC_PVVX\",\"type\":\"THB\",\"tempc\":24.28,\"tempf\":75.704,\"hum\":43.65,\"batt\":100,\"volt\":3.125,\"mac\":\"A4:C1:38:DF:DE:2F\"}",
    "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Button1\",\"model_id\":\"SBBT-002C\",\"type\":\"BTN\",\"acts\":true,\"cont\":true,\"packet\":29,\"batt\":100,\"press\":1}",
    "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Button1\",\"model_id\":\"SBBT-002C\",\"type\":\"BTN\",\"acts\":true,\"cont\":true,\"packet\":30,\"batt\":100,\"press\":2}",
    "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Button1\",\"model_id\":\"SBBT-002C\",\"type\":\"BTN\",\"acts\":true,\"cont\":true,\"packet\":31,\"batt\":100,\"press\":3}",
    "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Button1\",\"model_id\":\"SBBT-002C\",\"type\":\"BTN\",\"acts\":true,\"cont\":true,\"packet\":32,\"batt\":100,\"press\":4}",
    "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Button1\",\"model_id\":\"SBBT-002C\",\"type\":\"BTN\",\"acts\":true,\"cont\":true,\"packet\":171,\"batt\":100,\"press\":1}",
    "{\"brand\":\"Shelly\",\"model\":\"ShellyBLU Button1 encrypted\",\"model_id\":\"SBBT_002C_ENCR\",\"type\":\"BTN\",\"acts\":true,\"cont\":true,\"encr\":2,\"cipher\":\"62511158bd25\",\"ctr\":\"b8f09364\",\"mic\":\"5b573115\"}",
    "{\"brand\":\"Xiaomi\",\"model\":\"TH Sensor\",\"model_id\":\"LYWSD03MMC/MJWSD05MMC_PVVX_ENCR\",\"type\":\"THB\",\"encr\":1,\"cipher\":\"ef56583dd420\",\"ctr\":\"23\",\"mic\":\"50fe8e4d\"}",
    "{\"brand\":\"Xiaomi\",\"model\":\"TH Sensor\",\"model_id\":\"LYWSD03MMC/MJWSD05MMC_PVVX_DECR\",\"type\":\"THB\",\"tempc\":24.60,\"tempf\":76.28,\"hum\":43.54,\"batt\":100}",
    "{\"brand\":\"April Brother\",\"model\":\"N07\",\"model_id\":\"ABN07\",\"type\":\"THB\",\"acts\":true,\"track\":true,\"batt\":100,\"tempc\":24.51,\"tempf\":76.118,\"hum\":47.42,\"packet\":16}",
    "{\"brand\":\"nut\",\"model\":\"Smart Tracker\",\"model_id\":\"NUTALE\",\"type\":\"TRACK\",\"cidc\":false,\"acts\":true,\"cont\":true,\"track\":true,\"device\":\"nutale Tracker\"}",
    "{\"brand\":\"Sensor Easy\",\"model\":\"SE TEMP\",\"model_id\":\"SE_TEMP\",\"type\":\"THB\",\"tempc\":2.75,\"tempf\":36.95}",
    "{\"brand\":\"Sensor Easy\",\"model\":\"SE TEMP\",\"model_id\":\"SE_TEMP\",\"type\":\"THB\",\"tempc\":-9.18,\"tempf\":15.476}",
    "{\"brand\":\"Sensor Easy\",\"model\":\"SE RHT\",\"model_id\":\"SE_RHT\",\"type\":\"THB\",\"hum\":70}",
    "{\"brand\":\"Sensor Easy\",\"model\":\"SE RHT\",\"model_id\":\"SE_RHT\",\"type\":\"THB\",\"tempc\":-19.96,\"tempf\":-3.928}",
    "{\"brand\":\"Sensor Easy\",\"model\":\"SE TEMP\",\"model_id\":\"SE_TEMP\",\"type\":\"THB\",\"tempc\":21.6,\"tempf\":70.88}",
    "{\"brand\":\"Sensor Easy\",\"model\":\"SE RHT\",\"model_id\":\"SE_RHT\",\"type\":\"THB\",\"tempc\":5.22,\"tempf\":41.396}",
    "{\"brand\":\"Sensor Easy\",\"model\":\"SE TEMP PROBE\",\"model_id\":\"SE_TPROBE\",\"type\":\"THB\",\"tempc\":20.7,\"tempf\":69.26}",
    "{\"brand\":\"Sensor Easy\",\"model\":\"SE MAG\",\"model_id\":\"SE_MAG\",\"type\":\"CTMO\",\"open\":true,\"cont\":true}",
    "{\"brand\":\"Sensor Easy\",\"model\":\"SE MAG\",\"model_id\":\"SE_MAG\",\"type\":\"CTMO\",\"open\":false,\"cont\":true}",
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
    "{\"brand\":\"rbaron\",\"model\":\"b-parasite\",\"model_id\":\"BPv1.0-1.2\",\"type\":\"PLANT\",\"cont\":true,\"tempc\":25.6,\"tempf\":78.08,\"hum\":90.00076295,\"moi\":49.99923705,\"volt\":3.1,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"rbaron\",\"model\":\"b-parasite\",\"model_id\":\"BPv1.0-1.2\",\"type\":\"PLANT\",\"cont\":true,\"tempc\":22.7,\"tempf\":72.86,\"hum\":65.00038148,\"moi\":42.00045777,\"lux\":12500,\"volt\":2.95,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"rbaron\",\"model\":\"b-parasite\",\"model_id\":\"BPv1.0-1.2\",\"type\":\"PLANT\",\"cont\":true,\"tempc\":25.6,\"tempf\":78.08,\"hum\":90.00076295,\"moi\":49.99923705,\"volt\":3.1,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"rbaron\",\"model\":\"b-parasite\",\"model_id\":\"BPv1.0-1.2\",\"type\":\"PLANT\",\"cont\":true,\"tempc\":22.7,\"tempf\":72.86,\"hum\":65.00038148,\"moi\":42.00045777,\"lux\":12500,\"volt\":2.95,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Curtain\",\"model_id\":\"W070160X\",\"type\":\"WCVR\",\"acts\":true,\"moving\":false,\"position\":25,\"calibrated\":true,\"lightlevel\":7,\"batt\":76}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Curtain\",\"model_id\":\"W070160X\",\"type\":\"WCVR\",\"acts\":true,\"moving\":true,\"position\":25,\"calibrated\":false,\"lightlevel\":10,\"batt\":85}",
    "{\"brand\":\"Xiaomi/Mijia\",\"model\":\"e-ink Clock\",\"model_id\":\"LYWSD02\",\"type\":\"THB\",\"tempc\":25.6,\"tempf\":78.08,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Xiaomi/Mijia\",\"model\":\"e-ink Clock\",\"model_id\":\"LYWSD02\",\"type\":\"THB\",\"hum\":69,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Xiaomi/Mijia\",\"model\":\"e-ink Clock\",\"model_id\":\"LYWSD02\",\"type\":\"THB\",\"tempc\":26.5,\"tempf\":79.7,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Xiaomi/Mijia\",\"model\":\"e-ink Clock\",\"model_id\":\"LYWSD02\",\"type\":\"THB\",\"batt\":8,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Xiaomi/VegTrug\",\"model\":\"MiFlora\",\"model_id\":\"HHCCJCY01HHCC\",\"type\":\"PLANT\",\"lux\":9971,\"mac\":\"C4:7C:8D:65:B6:63\"}",
    "{\"brand\":\"Xiaomi/VegTrug\",\"model\":\"MiFlora\",\"model_id\":\"HHCCJCY01HHCC\",\"type\":\"PLANT\",\"moi\":30,\"mac\":\"C4:7C:8D:65:B6:63\"}",
    "{\"brand\":\"Xiaomi/VegTrug\",\"model\":\"MiFlora\",\"model_id\":\"HHCCJCY01HHCC\",\"type\":\"PLANT\",\"tempc\":32,\"tempf\":89.6,\"mac\":\"C4:7C:8D:65:B6:63\"}",
    "{\"brand\":\"Xiaomi/VegTrug\",\"model\":\"MiFlora\",\"model_id\":\"HHCCJCY01HHCC\",\"type\":\"PLANT\",\"fer\":0,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Xiaomi/VegTrug\",\"model\":\"MiFlora\",\"model_id\":\"HHCCJCY01HHCC\",\"type\":\"PLANT\",\"tempc\":32,\"tempf\":89.6,\"mac\":\"C4:7C:8D:65:B6:63\"}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Motion Sensor\",\"model_id\":\"W110150X\",\"type\":\"CTMO\",\"acts\":true,\"cont\":true,\"motion\":false,\"led\":false,\"scopetested\":true,\"sensingdistance\":\"middle\",\"lightlevel\":\"dark\",\"batt\":55}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Motion Sensor\",\"model_id\":\"W110150X\",\"type\":\"CTMO\",\"acts\":true,\"cont\":true,\"motion\":false,\"led\":false,\"scopetested\":true,\"sensingdistance\":\"middle\",\"lightlevel\":\"dark\",\"batt\":55}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Motion Sensor\",\"model_id\":\"W110150X\",\"type\":\"CTMO\",\"acts\":true,\"cont\":true,\"motion\":true,\"led\":true,\"scopetested\":false,\"sensingdistance\":\"long\",\"lightlevel\":\"bright\",\"batt\":85}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Contact Sensor\",\"model_id\":\"W120150X\",\"type\":\"CTMO\",\"acts\":true,\"cont\":true,\"contact\":\"closed\",\"motion\":true,\"lightlevel\":\"bright\",\"in_ct\":0,\"out_ct\":0,\"push_ct\":0,\"scopetested\":true,\"batt\":92}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Contact Sensor\",\"model_id\":\"W120150X\",\"type\":\"CTMO\",\"acts\":true,\"cont\":true,\"contact\":\"open\",\"motion\":false,\"lightlevel\":\"dark\",\"in_ct\":0,\"out_ct\":0,\"push_ct\":0,\"scopetested\":true,\"batt\":87}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Contact Sensor\",\"model_id\":\"W120150X\",\"type\":\"CTMO\",\"acts\":true,\"cont\":true,\"contact\":\"timeout not closed\",\"motion\":true,\"lightlevel\":\"bright\",\"in_ct\":0,\"out_ct\":0,\"push_ct\":0,\"scopetested\":false,\"batt\":65}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Contact Sensor\",\"model_id\":\"W120150X\",\"type\":\"CTMO\",\"acts\":true,\"cont\":true,\"contact\":\"timeout not closed\",\"motion\":true,\"lightlevel\":\"bright\",\"in_ct\":0,\"out_ct\":0,\"push_ct\":0,\"scopetested\":false,\"batt\":65}",
    "{\"brand\":\"Qingping\",\"model\":\"Air Monitor Lite\",\"model_id\":\"CGDN1\",\"type\":\"AIR\",\"tempc\":29,\"tempf\":84.2,\"hum\":33.2,\"pm25\":113,\"pm10\":114,\"co2\":1005}",
    "{\"brand\":\"Qingping\",\"model\":\"Air Monitor Lite\",\"model_id\":\"CGDN1\",\"type\":\"AIR\",\"tempc\":24.9,\"tempf\":76.82,\"hum\":43.7,\"pm25\":381,\"pm10\":390,\"co2\":765}",
    "{\"brand\":\"Qingping\",\"model\":\"Air Monitor Lite\",\"model_id\":\"CGDN1\",\"type\":\"AIR\",\"tempc\":24.6,\"tempf\":76.28,\"hum\":42.7,\"pm25\":164,\"pm10\":215,\"co2\":711}",
    "{\"brand\":\"Qingping\",\"model\":\"Air Monitor Lite\",\"model_id\":\"CGDN1\",\"type\":\"AIR\",\"tempc\":20.6,\"tempf\":69.08,\"hum\":55.2,\"pm25\":5,\"pm10\":5,\"co2\":471}",
    "{\"brand\":\"GENERIC\",\"model\":\"Service data\",\"model_id\":\"ServiceData\",\"type\":\"BATT\",\"batt\":33}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Alarm Clock\",\"model_id\":\"CGC1/CGD1\",\"type\":\"THB\",\"tempc\":26.6,\"tempf\":79.88,\"hum\":63.9,\"batt\":42,\"mac\":\"58:2D:34:50:FD:AF\"}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Alarm Clock\",\"model_id\":\"CGC1/CGD1\",\"type\":\"THB\",\"tempc\":26.9,\"tempf\":80.42,\"hum\":67,\"batt\":42,\"mac\":\"58:2D:34:50:FD:AF\"}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Alarm Clock\",\"model_id\":\"CGC1/CGD1\",\"type\":\"THB\",\"tempc\":27,\"tempf\":80.6,\"hum\":65.7,\"batt\":85,\"mac\":\"58:2D:34:50:FD:AF\"}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Weather Station\",\"model_id\":\"CGP1W\",\"type\":\"THBX\",\"tempc\":26.4,\"tempf\":79.52,\"hum\":64.7,\"pres\":1006.3,\"batt\":92,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Weather Station\",\"model_id\":\"CGP1W\",\"type\":\"THBX\",\"tempc\":27.1,\"tempf\":80.78,\"hum\":64.8,\"pres\":1006.3,\"batt\":92,\"mac\":\"58:2D:34:40:01:4C\"}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Weather Station\",\"model_id\":\"CGP1W\",\"type\":\"THBX\",\"tempc\":25.2,\"tempf\":77.36,\"hum\":58.6,\"pres\":1008.6,\"batt\":32,\"mac\":\"58:2D:34:40:01:4C\"}",
    "{\"brand\":\"Qingping\",\"model\":\"TH Lite\",\"model_id\":\"CGDK2\",\"type\":\"THB\",\"tempc\":23.2,\"tempf\":73.76,\"hum\":91.1,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Qingping\",\"model\":\"TH Lite\",\"model_id\":\"CGDK2\",\"type\":\"THB\",\"tempc\":23.3,\"tempf\":73.94,\"hum\":54.1,\"mac\":\"58:2D:34:11:91:79\"}",
    "{\"brand\":\"Qingping\",\"model\":\"TH Lite\",\"model_id\":\"CGDK2\",\"type\":\"THB\",\"tempc\":23.3,\"tempf\":73.94,\"hum\":54.1,\"mac\":\"58:2D:34:11:91:79\"}",
    "{\"brand\":\"Qingping\",\"model\":\"Motion & Light\",\"model_id\":\"CGPR1\",\"type\":\"CTMO\",\"cont\":true,\"lux\":0,\"batt\":83,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Qingping\",\"model\":\"Motion & Light\",\"model_id\":\"CGPR1\",\"type\":\"CTMO\",\"cont\":true,\"lux\":517,\"batt\":100,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Qingping\",\"model\":\"Motion & Light\",\"model_id\":\"CGPR1\",\"type\":\"CTMO\",\"cont\":true,\"lux\":3,\"motion\":true,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Qingping\",\"model\":\"Motion & Light\",\"model_id\":\"CGPR1\",\"type\":\"CTMO\",\"cont\":true,\"lux\":3,\"motion\":false,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Qingping\",\"model\":\"Motion & Light\",\"model_id\":\"CGPR1\",\"type\":\"CTMO\",\"cont\":true,\"motion\":true,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Qingping\",\"model\":\"Motion & Light\",\"model_id\":\"CGPR1\",\"type\":\"CTMO\",\"cont\":true,\"motion\":false,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Qingping\",\"model\":\"Contact Sensor\",\"model_id\":\"CGH1\",\"type\":\"CTMO\",\"cont\":true,\"open\":true,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Qingping\",\"model\":\"Contact Sensor\",\"model_id\":\"CGH1\",\"type\":\"CTMO\",\"cont\":true,\"open\":false,\"mac\":\"58:2D:34:60:10:75\"}",
    "{\"brand\":\"Qingping\",\"model\":\"Contact Sensor\",\"model_id\":\"CGH1\",\"type\":\"CTMO\",\"cont\":true,\"open\":true,\"mac\":\"58:2D:34:60:10:75\"}",
    "{\"brand\":\"Qingping\",\"model\":\"Contact Sensor\",\"model_id\":\"CGH1\",\"type\":\"CTMO\",\"cont\":true,\"open\":false,\"mac\":\"58:2D:34:60:10:75\"}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1\",\"type\":\"THB\",\"tempc\":27.4,\"tempf\":81.32,\"hum\":62.6,\"batt\":13,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1\",\"type\":\"THB\",\"tempc\":23.5,\"tempf\":74.3,\"hum\":28.3,\"batt\":100,\"mac\":\"YY:YY:YY:YY:YY:YY\"}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Round TH\",\"model_id\":\"CGG1\",\"type\":\"THB\",\"tempc\":24.4,\"tempf\":75.92,\"hum\":31.5,\"batt\":100,\"mac\":\"XX:XX:XX:XX:XX:XX\"}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Alarm Clock\",\"model_id\":\"CGC1/CGD1\",\"type\":\"THB\",\"tempc\":21,\"tempf\":69.8,\"hum\":51,\"batt\":100,\"mac\":\"FF:EE:DD:CC:BB:AA\"}",
    "{\"brand\":\"Jaalee\",\"model\":\"TH sensor\",\"model_id\":\"F525\",\"type\":\"THB\",\"acts\":true,\"tempc\":24.5147998,\"tempf\":76.12663965,\"hum\":36.84286499,\"batt\":100}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Curtain\",\"model_id\":\"W070160X\",\"type\":\"WCVR\",\"acts\":true,\"moving\":false,\"position\":100,\"calibrated\":true,\"lightlevel\":1,\"batt\":17}",
    "{\"brand\":\"BlueCharm\",\"model\":\"Beacon 08/04P/021\",\"model_id\":\"KSensor\",\"type\":\"ACEL\",\"track\":true,\"tempc\":24,\"tempf\":75.2,\"accx\":33,\"accy\":-3,\"accz\":-1006,\"volt\":3.091}",
    "{\"brand\":\"BlueCharm\",\"model\":\"Beacon 08/04P/021\",\"model_id\":\"KSensor\",\"type\":\"ACEL\",\"track\":true,\"tempc\":-10.75,\"tempf\":12.65,\"accx\":-107,\"accy\":-407,\"accz\":-896,\"volt\":3.085}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Contact Sensor\",\"model_id\":\"W120150X\",\"type\":\"CTMO\",\"acts\":true,\"cont\":true,\"contact\":\"timeout not closed\",\"motion\":false,\"lightlevel\":\"dark\",\"scopetested\":false,\"in_ct\":1,\"out_ct\":0,\"push_ct\":2,\"batt\":100}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Motion Sensor\",\"model_id\":\"W110150X\",\"type\":\"CTMO\",\"acts\":true,\"cont\":true,\"motion\":false,\"led\":false,\"scopetested\":false,\"sensingdistance\":\"long\",\"lightlevel\":\"bright\",\"batt\":100}",
    "{\"brand\":\"Tile\",\"model\":\"Smart Tracker\",\"model_id\":\"TILE\",\"type\":\"TRACK\",\"cidc\":false,\"acts\":true,\"cont\":true,\"track\":true,\"device\":\"Tile Tracker\"}",
    "{\"brand\":\"Tile\",\"model\":\"Smart Tracker\",\"model_id\":\"TILE\",\"type\":\"TRACK\",\"cidc\":false,\"acts\":true,\"cont\":true,\"track\":true,\"device\":\"Tile Tracker\"}",
    "{\"brand\":\"Tile\",\"model\":\"Smart Tracker\",\"model_id\":\"TILE\",\"type\":\"TRACK\",\"cidc\":false,\"acts\":true,\"cont\":true,\"track\":true,\"device\":\"Tile Tracker\"}",
    "{\"brand\":\"Xiaomi/VegTrug\",\"model\":\"MiFlora\",\"model_id\":\"HHCCJCY10\",\"type\":\"PLANT\",\"tempc\":11,\"tempf\":51.8,\"moi\":14,\"lux\":79012,\"fer\":91,\"batt\":40}",
    "{\"brand\":\"Xiaomi/VegTrug\",\"model\":\"MiFlora\",\"model_id\":\"HHCCJCY10\",\"type\":\"PLANT\",\"tempc\":0,\"tempf\":32,\"moi\":98,\"lux\":71,\"fer\":0,\"batt\":100}",
    "{\"brand\":\"Xiaomi/VegTrug\",\"model\":\"MiFlora\",\"model_id\":\"HHCCJCY10\",\"type\":\"PLANT\",\"tempc\":21,\"tempf\":69.8,\"moi\":96,\"lux\":548,\"fer\":0,\"batt\":100}",
    "{\"brand\":\"BlueCharm\",\"model\":\"Beacon 08/04P/021\",\"model_id\":\"KSensor\",\"type\":\"ACEL\",\"track\":true,\"tempc\":22.5,\"tempf\":72.5,\"accx\":31,\"accy\":31,\"accz\":-859,\"volt\":3.162}",
    "{\"brand\":\"BlueCharm\",\"model\":\"Beacon 08/04P/021\",\"model_id\":\"KSensor\",\"type\":\"ACEL\",\"track\":true,\"tempc\":30.75,\"tempf\":87.35,\"accx\":34,\"accy\":-14,\"accz\":977,\"volt\":3.03}",
    "{\"brand\":\"BlueCharm\",\"model\":\"Beacon 08/04P/021\",\"model_id\":\"KSensor\",\"type\":\"ACEL\",\"track\":true,\"tempc\":-14.75,\"tempf\":5.45,\"accx\":109,\"accy\":-31,\"accz\":1046,\"volt\":3.194}",
    "{\"brand\":\"BlueCharm\",\"model\":\"Beacon 08/04P/021\",\"model_id\":\"KSensor\",\"type\":\"ACEL\",\"track\":true,\"tempc\":0.25,\"tempf\":32.45,\"accx\":109,\"accy\":-31,\"accz\":1046,\"volt\":3.194}",
    "{\"brand\":\"BlueCharm\",\"model\":\"Beacon 08/04P/021\",\"model_id\":\"KSensor\",\"type\":\"ACEL\",\"track\":true,\"tempc\":-0.25,\"tempf\":31.55,\"accx\":109,\"accy\":-31,\"accz\":1046,\"volt\":3.194}",
    "{\"brand\":\"KKM\",\"model\":\"Long Range K6P\",\"model_id\":\"K6P\",\"type\":\"THB\",\"tempc\":21.3,\"tempf\":70.34,\"hum\":33.41,\"volt\":3.675}",
    "{\"brand\":\"KKM\",\"model\":\"Long Range K6P\",\"model_id\":\"K6P\",\"type\":\"THB\",\"tempc\":22.32,\"tempf\":72.176,\"hum\":31.6,\"volt\":3.675}",
    "{\"brand\":\"KKM\",\"model\":\"Long Range K6P\",\"model_id\":\"K6P\",\"type\":\"THB\",\"tempc\":22.32,\"tempf\":72.176,\"hum\":31.58,\"volt\":3.675}",
    "{\"brand\":\"KKM\",\"model\":\"Long Range K6P\",\"model_id\":\"K6P\",\"type\":\"THB\",\"tempc\":0.25,\"tempf\":32.45,\"hum\":31.58,\"volt\":3.675}",
    "{\"brand\":\"KKM\",\"model\":\"Long Range K6P\",\"model_id\":\"K6P\",\"type\":\"THB\",\"tempc\":-0.25,\"tempf\":31.55,\"hum\":31.58,\"volt\":3.675}",
    "{\"brand\":\"KKM\",\"model\":\"Tracking K9\",\"model_id\":\"K9\",\"type\":\"ACEL\",\"track\":true,\"tempc\":-16.27,\"tempf\":2.714,\"hum\":66.81,\"volt\":3.675,\"accx\":-62,\"accy\":0,\"accz\":1031}",
    "{\"brand\":\"KKM\",\"model\":\"Tracking K9\",\"model_id\":\"K9\",\"type\":\"ACEL\",\"track\":true,\"tempc\":-14.34,\"tempf\":6.188,\"hum\":78,\"volt\":3.635,\"accx\":46,\"accy\":15,\"accz\":1015}",
    "{\"brand\":\"KKM\",\"model\":\"Tracking K9\",\"model_id\":\"K9\",\"type\":\"ACEL\",\"track\":true,\"tempc\":-13.05,\"tempf\":8.51,\"hum\":45.62,\"volt\":3.675,\"accx\":-468,\"accy\":-46,\"accz\":937}",
    "{\"brand\":\"KKM\",\"model\":\"Tracking K9\",\"model_id\":\"K9\",\"type\":\"ACEL\",\"track\":true,\"tempc\":24.43,\"tempf\":75.974,\"hum\":42.16,\"volt\":3.672,\"accx\":-31,\"accy\":0,\"accz\":1015}",
    "{\"brand\":\"KKM\",\"model\":\"Tracking K9\",\"model_id\":\"K9\",\"type\":\"ACEL\",\"track\":true,\"tempc\":22.31,\"tempf\":72.158,\"hum\":37.64,\"volt\":3.672,\"accx\":-46,\"accy\":0,\"accz\":1015}",
    "{\"brand\":\"KKM\",\"model\":\"Tracking K9\",\"model_id\":\"K9\",\"type\":\"ACEL\",\"track\":true,\"tempc\":25.16,\"tempf\":77.288,\"hum\":34.3,\"volt\":3.591,\"accx\":-4,\"accy\":-20,\"accz\":1003}",
    "{\"brand\":\"KKM\",\"model\":\"Tracking K9\",\"model_id\":\"K9\",\"type\":\"ACEL\",\"track\":true,\"tempc\":0.44,\"tempf\":32.792,\"hum\":37.64,\"volt\":3.672,\"accx\":-46,\"accy\":0,\"accz\":1015}",
    "{\"brand\":\"KKM\",\"model\":\"Tracking K9\",\"model_id\":\"K9\",\"type\":\"ACEL\",\"track\":true,\"tempc\":-0.45,\"tempf\":31.19,\"hum\":34.3,\"volt\":3.591,\"accx\":-4,\"accy\":-20,\"accz\":1003}",
    "{\"brand\":\"KKM\",\"model\":\"Tracking K9\",\"model_id\":\"K9\",\"type\":\"ACEL\",\"track\":true,\"tempc\":-11.79,\"tempf\":10.778,\"hum\":43.84,\"volt\":3.672,\"accx\":15,\"accy\":-15,\"accz\":1015}",
    "{\"brand\":\"KKM\",\"model\":\"Tracking K9\",\"model_id\":\"K9\",\"type\":\"ACEL\",\"track\":true,\"tempc\":-10.9,\"tempf\":12.38,\"hum\":74.86,\"volt\":3.675,\"accx\":-62,\"accy\":0,\"accz\":1046}",
    "{\"brand\":\"SwitchBot\",\"model\":\"Bot\",\"model_id\":\"X1\",\"type\":\"ACTR\",\"acts\":true,\"mode\":\"onestate\",\"state\":\"on\",\"batt\":71}",
    "{\"brand\":\"ClearGrass/Qingping\",\"model\":\"Barometer Pro\",\"model_id\":\"CGP23W\",\"type\":\"THBX\",\"tempc\":23.2,\"tempf\":73.76,\"hum\":47.6,\"pres\":1007.4,\"batt\":94,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
};

const char* expected_mac_mfg[] = {
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X(S)\",\"type\":\"BBQ\",\"cidc\":false,\"tempc\":23,\"tempf\":73.4,\"tempc2\":23,\"tempf2\":73.4,\"mac\":\"A1:B2:C3:D4:E5:F6\"}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X(S)\",\"type\":\"BBQ\",\"cidc\":false,\"tempc\":28,\"tempf\":82.4,\"tempc2\":32,\"tempf2\":89.6,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X(S)\",\"type\":\"BBQ\",\"cidc\":false,\"tempc2\":65,\"tempf2\":149,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X(S)\",\"type\":\"BBQ\",\"cidc\":false,\"tempc\":22,\"tempf\":71.6,\"tempc2\":21,\"tempf2\":69.8,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X(S)\",\"type\":\"BBQ\",\"cidc\":false,\"tempc2\":58,\"tempf2\":136.4,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X(S)\",\"type\":\"BBQ\",\"cidc\":false,\"tempc\":22,\"tempf\":71.6,\"tempc2\":20.7,\"tempf2\":69.26,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X(S)\",\"type\":\"BBQ\",\"cidc\":false,\"tempc\":33.2,\"tempf\":91.76,\"tempc2\":33.5,\"tempf2\":92.3,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-2X(S)\",\"type\":\"BBQ\",\"cidc\":false,\"tempc2\":33.5,\"tempf2\":92.3,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-4X(S/C)\",\"type\":\"BBQ\",\"cidc\":false,\"tempc\":26,\"tempf\":78.8,\"tempc2\":26,\"tempf2\":78.8,\"tempc3\":25,\"tempf3\":77,\"tempc4\":25,\"tempf4\":77,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBT-4X(S/C)\",\"type\":\"BBQ\",\"cidc\":false,\"tempc\":26,\"tempf\":78.8,\"tempc3\":60,\"tempf3\":140,\"tempc4\":53,\"tempf4\":127.4,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Inkbird/Tenergy\",\"model\":\"iBBQ/SOLIS6\",\"model_id\":\"IBT-6XS/SOLIS-6\",\"type\":\"BBQ\",\"cidc\":false,\"tempc\":21,\"tempf\":69.8,\"tempc2\":20,\"tempf2\":68,\"tempc4\":21,\"tempf4\":69.8,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Inkbird/Tenergy\",\"model\":\"iBBQ/SOLIS6\",\"model_id\":\"IBT-6XS/SOLIS-6\",\"type\":\"BBQ\",\"cidc\":false,\"tempc\":20,\"tempf\":68,\"tempc2\":20,\"tempf2\":68,\"tempc4\":21,\"tempf4\":69.8,\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"GENERIC\",\"model\":\"TPMS\",\"model_id\":\"TPMS\",\"type\":\"TIRE\",\"cidc\":false,\"count\":1,\"pres\":2.22708,\"tempc\":31.96,\"tempf\":89.528,\"batt\":51,\"alarm\":false,\"mac\":\"80:EA:CA:DD:EE:FF\"}",
    "{\"brand\":\"GENERIC\",\"model\":\"TPMS\",\"model_id\":\"TPMS\",\"type\":\"TIRE\",\"cidc\":false,\"count\":3,\"pres\":2.61137,\"tempc\":17.06,\"tempf\":62.708,\"batt\":83,\"alarm\":false,\"mac\":\"82:EA:CA:DD:EE:FF\"}",
    "{\"brand\":\"Xiaomi/Amazfit\",\"model\":\"Mi Band/Smart Watch\",\"model_id\":\"MB/SW\",\"type\":\"BODY\",\"acts\":true,\"track\":true,\"act_bpm\":125,\"device\":\"Xiaomi/Amazfit Tracker\",\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Ruuvi\",\"model\":\"RuuviTag\",\"model_id\":\"RuuviTag_RAWv2\",\"type\":\"ACEL\",\"track\":true,\"tempc\":24.3,\"tempf\":75.74,\"hum\":53.49,\"pres\":1000.44,\"accx\":0.00392266,\"accy\":-0.00392266,\"accz\":1.01596894,\"volt\":2.977,\"tx\":4,\"mov\":66,\"seq\":205,\"mac\":\"CB:B8:33:4C:88:4F\"}",
    "{\"brand\":\"Ruuvi\",\"model\":\"RuuviTag\",\"model_id\":\"RuuviTag_RAWv2\",\"type\":\"ACEL\",\"track\":true,\"tempc\":163.835,\"tempf\":326.903,\"hum\":163.8350,\"pres\":1155.34,\"accx\":32.13345006,\"accy\":32.13345006,\"accz\":32.13345006,\"volt\":3.646,\"tx\":20,\"mov\":254,\"seq\":65534,\"mac\":\"CB:B8:33:4C:88:4F\"}",
    "{\"brand\":\"Ruuvi\",\"model\":\"RuuviTag\",\"model_id\":\"RuuviTag_RAWv2\",\"type\":\"ACEL\",\"track\":true,\"tempc\":-163.835,\"tempf\":-262.903,\"hum\":0,\"pres\":500,\"accx\":-32.13345006,\"accy\":-32.13345006,\"accz\":-32.13345006,\"volt\":1.6,\"tx\":-40,\"mov\":0,\"seq\":0,\"mac\":\"CB:B8:33:4C:88:4F\"}",
    "{\"brand\":\"GENERIC\",\"model\":\"ThermoBeacon\",\"model_id\":\"WS02/WS08\",\"type\":\"THB\",\"cidc\":false,\"tempc\":31.3125,\"tempf\":88.3625,\"hum\":70.75,\"volt\":3.160,\"time\":2371,\"mac\":\"70:F7:00:00:11:1A\"}",
    "{\"brand\":\"GENERIC\",\"model\":\"ThermoBeacon\",\"model_id\":\"WS02/WS08\",\"type\":\"THB\",\"cidc\":false,\"tempc\":25.125,\"tempf\":77.225,\"hum\":55.75,\"volt\":3,\"time\":244685,\"mac\":\"DC:23:00:00:0A:AE\"}",
    "{\"brand\":\"GENERIC\",\"model\":\"ThermoBeacon\",\"model_id\":\"WS02/WS08\",\"type\":\"THB\",\"cidc\":false,\"tempc\":13.75,\"tempf\":56.75,\"hum\":59.9375,\"volt\":3.236,\"time\":10034,\"mac\":\"63:D0:00:00:1D:CF\"}",
    "{\"brand\":\"GENERIC\",\"model\":\"ThermoBeacon\",\"model_id\":\"WS02/WS08\",\"type\":\"THB\",\"cidc\":false,\"tempc\":22.75,\"tempf\":72.95,\"hum\":45.8125,\"volt\":2.836,\"time\":7525616,\"mac\":\"8E:BB:00:00:07:10\"}",
    "{\"brand\":\"GENERIC\",\"model\":\"ThermoBeacon\",\"model_id\":\"WS02/WS08\",\"type\":\"THB\",\"cidc\":false,\"tempc_max\":27.25,\"tempf_max\":81.05,\"time_max\":3188218,\"tempc_min\":18.375,\"tempf_min\":65.075,\"time_min\":6778822,\"mac\":\"8E:BB:00:00:07:10\"}",
    "{\"brand\":\"GENERIC\",\"model\":\"ThermoBeacon\",\"model_id\":\"WS02/WS08\",\"type\":\"THB\",\"cidc\":false,\"tempc_max\":29.6875,\"tempf_max\":85.4375,\"time_max\":106359,\"tempc_min\":24.125,\"tempf_min\":75.425,\"time_min\":54044,\"mac\":\"63:06:00:00:0D:FE\"}",
    "{\"brand\":\"GENERIC\",\"model\":\"ThermoBeacon\",\"model_id\":\"WS02/WS08\",\"type\":\"THB\",\"cidc\":false,\"tempc_max\":27,\"tempf_max\":80.6,\"time_max\":175,\"tempc_min\":24.1875,\"tempf_min\":75.5375,\"time_min\":217757,\"mac\":\"DC:23:00:00:0A:AE\"}",
};

const char* expected_mac_mfgsvcdata[] = {
    "{\"brand\":\"Xiaomi/Amazfit\",\"model\":\"Mi Band/Smart Watch\",\"model_id\":\"MB/SW\",\"type\":\"BODY\",\"acts\":true,\"track\":true,\"steps\":9101,\"act_bpm\":125,\"device\":\"Xiaomi/Amazfit Tracker\",\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Xiaomi/Amazfit\",\"model\":\"Mi Band/Smart Watch\",\"model_id\":\"MB/SW\",\"type\":\"BODY\",\"acts\":true,\"track\":true,\"act_bpm\":132,\"device\":\"Xiaomi/Amazfit Tracker\",\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Xiaomi/Amazfit\",\"model\":\"Mi Band/Smart Watch\",\"model_id\":\"MB/SW\",\"type\":\"BODY\",\"acts\":true,\"track\":true,\"steps\":7852,\"device\":\"Xiaomi/Amazfit Tracker\",\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Xiaomi/Amazfit\",\"model\":\"Mi Band/Smart Watch\",\"model_id\":\"MB/SW\",\"type\":\"BODY\",\"acts\":true,\"track\":true,\"device\":\"Xiaomi/Amazfit Tracker\",\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"Xiaomi/Amazfit\",\"model\":\"Mi Band/Smart Watch\",\"model_id\":\"MB/SW\",\"type\":\"BODY\",\"acts\":true,\"track\":true,\"steps\":7852,\"device\":\"Xiaomi/Amazfit Tracker\",\"mac\":\"AA:BB:CC:DD:EE:FF\"}",
    "{\"brand\":\"April Brother\",\"model\":\"ABTemp\",\"model_id\":\"ABTemp\",\"type\":\"BCON\",\"track\":true,\"mfid\":\"4c00\",\"uuid\":\"b5b182c7eab14988aa99b5c1517008d9\",\"major\":1,\"batt\":100,\"tempc\":26,\"tempf\":78.8,\"txpower\":-59,\"mac\":\"D5:FE:15:49:AC:7D\"}",
};

// Service data test input [test name] [data]
const char* test_servicedata[][2] = {
    {"Mi jia round sensor", "5020aa0137dfaa33342d580d100404016602"},
    {"Mi jia round sensor", "5020aa018ddfaa33342d580610026602"},
    {"Mi jia round sensor", "5020aa0155ffeeddccbbaa0a100151"},
    {"Mi jia round sensor", "5020aa01123c0338342d580a10013e"},
    {"Mi jia round sensor", "5020aa018ddfaa33342d580410021201"},
    {"Formaldehyde detector", "5020df02383a5c014357480a10015e"},
    {"Formaldehyde detector", "5020df02283a5c014357480610025302"},
    {"Formaldehyde detector", "5020df025b3a5c014357481010020800"},
    {"Formaldehyde detector", "5120df023effeeddccbbaa041002c400"},
    {"RoPot", "71205d0183d20c6d8d7cc40d08100103"},
    {"RoPot", "71205d0188ffeeddccbbaa0d0910020100"},
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
    {"Amphiro", "Digital Hand Shower", "eefa0000240015000015001a0029000c194f000000"},
    {"ThermoPro", "TP357", "c2100147022c"},
    {"ThermoPro", "TP357", "c276014a022c"},
    {"ThermoPro", "TP357S", "c2d60043220b01"},
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
    {"H5106 extended", "GVH5106_1234", "010001010d915f9a4c000215494e54454c4c495f524f434b535f48575075f2ff0c"},
    {"H5075 extended", "GVH5075_1234", "88ec000384e45c004c000215494e54454c4c495f524f434b535f48575075f2ffc2"},
    {"ABTemp without service data", "ABTemp", "4c000215b5b182c7eab14988aa99b5c1517008d90001641ac5"},
    {"Mopeka", "Standard", "5900065d3b00001b4443109b"},
    {"Mopeka", "Standard", "59000c60410000a73e762c80"},
    {"Mopeka", "Standard", "59000c603de1c8f2eb44ee1f"},
    {"BM2", "ZX-1689", "4c000215655f83caae16a10a702e31f30d58dd82f441423157"},
    {"BM2", "Li Battery Monitor", "4c000215655f83caae16a10a702e31f30d58dd82f441423149"},
    {"H5104", "GVH5104_1234", "0100010103f99e64"},
    {"H5179", "Govee_H5179_1234", "0188ec000101ee07581641"},
    {"Braun", "Oral-B", "dc0004710502360000000f0004"},
    {"Braun", "Oral-B", "dc000471050332010301030a04"},
    {"Braun", "Oral-B", "dc00047105013a000002010004"},
    {"Braun", "Oral-B", "dc000471050432010e03032e04"},
    {"Braun", "Oral-B", "dc000471057332010e05032e04"},
    {"Braun", "Oral-B", "dc000471050332010e06032e04"},
    {"Braun", "Oral-B", "dc000471050332010e07032e04"},
    {"Braun", "Oral-B", "dc000471050332010e08032e04"},
    {"Braun", "Oral-B", "dc000202060220000001010004"},
    {"Braun", "Oral-B", "dc000202067320020f07080004"},
    {"BM6", "Battery Monitor", "4c0002153ba29cd9a42c894856badaf2606ef777114d0000cd"},
    {"BM6", "Battery Monitor", "4c0002153ba29cd9a42c894856badaf2606ef777114e0000cd"},
};

TheengsDecoder::BLE_ID_NUM test_mfgdata_id_num[]{
    TheengsDecoder::BLE_ID_NUM::IBSTHBP01B,
    TheengsDecoder::BLE_ID_NUM::IBSTHBP01B,
    TheengsDecoder::BLE_ID_NUM::IBEACON,
    TheengsDecoder::BLE_ID_NUM::IBEACON,
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
    TheengsDecoder::BLE_ID_NUM::AMPHIRO,
    TheengsDecoder::BLE_ID_NUM::TPTH,
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
    TheengsDecoder::BLE_ID_NUM::H5106,
    TheengsDecoder::BLE_ID_NUM::H5072,
    TheengsDecoder::BLE_ID_NUM::ABTEMP,
    TheengsDecoder::BLE_ID_NUM::MOPEKA,
    TheengsDecoder::BLE_ID_NUM::MOPEKA,
    TheengsDecoder::BLE_ID_NUM::MOPEKA,
    TheengsDecoder::BLE_ID_NUM::BM2,
    TheengsDecoder::BLE_ID_NUM::BM2,
    TheengsDecoder::BLE_ID_NUM::H5102,
    TheengsDecoder::BLE_ID_NUM::H5179,
    TheengsDecoder::BLE_ID_NUM::ORALB_BT,
    TheengsDecoder::BLE_ID_NUM::ORALB_BT,
    TheengsDecoder::BLE_ID_NUM::ORALB_BT,
    TheengsDecoder::BLE_ID_NUM::ORALB_BT,
    TheengsDecoder::BLE_ID_NUM::ORALB_BT,
    TheengsDecoder::BLE_ID_NUM::ORALB_BT,
    TheengsDecoder::BLE_ID_NUM::ORALB_BT,
    TheengsDecoder::BLE_ID_NUM::ORALB_BT,
    TheengsDecoder::BLE_ID_NUM::ORALB_BT,
    TheengsDecoder::BLE_ID_NUM::ORALB_BT,
    TheengsDecoder::BLE_ID_NUM::BM6,
    TheengsDecoder::BLE_ID_NUM::BM6,
};

// uuid test input [test name] [device name] [uuid] [manufacturer data] [service data]
const char* test_name_uuid_mfgsvcdata[][5] = {
    {"RDL52832", "RDL52832", "0x0318", "4c000215fda50693a4e24fb1afcfc6eb07647825270f270fd8", "183a2f33010000020000000100000907"},
    {"RDL52832", "RDL52832", "0x0318", "4c000215fda50693a4e24fb1afcfc6eb0764782500010002d8", "194c3a39000001040000000901000908"},
    {"RDL52832", "RDL52832", "0x0318", "4c000215fda50693a4e24fb1afcfc6eb0764782500010002d8", "1a463d34000002000100090600000105"},
    {"RDL52832", "RDL52832", "0x1803", "4c000215fda50693a4e24fb1afcfc6eb0764782500010002d8", "183a2f33010000020000000100000907"},
    {"RDL52832", "RDL52832", "0x1803", "4c000215fda50693a4e24fb1afcfc6eb0764782500010002d8", "194c3a39000001040000000901000908"},
    {"RDL52832", "RDL52832", "0x1803", "4c000215fda50693a4e24fb1afcfc6eb0764782500010002d8", "1a463d34000002000100090600000105"},
    {"SwitchBot Outdoor Meter", "Outdoor Meter", "0xfd3d", "6909aabbccddeeff8b0305993200", "770064"},
    {"SwitchBot Outdoor Meter", "Outdoor Meter", "0xfd3d", "6909aabbccddeeff940b039a5000", "770064"},
    {"SwitchBot Outdoor Meter", "Outdoor Meter", "0xfd3d", "6909aabbccddeeffe30f090f2a00", "770041"},
    {"SE TEMP volt","P T EN 888444","0x2a6e","5707f2120c","8308"},
    {"SE RHT volt","P RHT 88888B","0x2a6f","5707f2190c","2f"},
    {"SE TEMP PROBE","P TPROBE 000000","0x2a6e","5707f2e40b","0c08"},
    {"SE MAG","P MAG CCCCCC","0x2a06","5707f2070c","3b00"},
};

TheengsDecoder::BLE_ID_NUM test_name_uuid_mfgsvcdata_id_num[]{
    TheengsDecoder::BLE_ID_NUM::RDL52832,
    TheengsDecoder::BLE_ID_NUM::RDL52832,
    TheengsDecoder::BLE_ID_NUM::RDL52832,
    TheengsDecoder::BLE_ID_NUM::RDL52832,
    TheengsDecoder::BLE_ID_NUM::RDL52832,
    TheengsDecoder::BLE_ID_NUM::RDL52832,
    TheengsDecoder::BLE_ID_NUM::SBOT,
    TheengsDecoder::BLE_ID_NUM::SBOT,
    TheengsDecoder::BLE_ID_NUM::SBOT,
    TheengsDecoder::BLE_ID_NUM::SE_TEMP,
    TheengsDecoder::BLE_ID_NUM::SE_RHT,
    TheengsDecoder::BLE_ID_NUM::SE_TPROBE,
    TheengsDecoder::BLE_ID_NUM::SE_MAG,
};

// uuid test input [test name] [mac] [device name] [uuid] [manufacturer data] [service data]
const char* test_name_mac_uuid_mfgsvcdata[][6] = {
    {"SBBT-002C", "BC:02:6E:AA:BB:CC", "SBBT-002C", "0xfcd2", "a90b0109000b01000accbbaa6e02bc", "40001d01643a01"},
    {"SBBT-002C encrypted", "BC:02:6E:AA:BB:CC", "SBBT-002C", "0xfcd2", "a90b0109000b01000accbbaa6e02bc", "4562511158bd25b8f093645b573115"},
    {"SBDW-002C", "3C:2E:F5:AA:BB:CC", "SBDW-002C", "0xfcd2", "a90b0101000b02000accbbaaf52e3c", "44005d016405fc21002d013f9601"},
    {"SBDW-002C", "3C:2E:F5:AA:BB:CC", "SBDW-002C", "0xfcd2", "a90b0101000b02000accbbaaf52e3c", "440056016405e406012d003f0000"},
    {"SBDW-002C encrypted", "3C:2E:F5:AA:BB:CC", "SBDW-002C", "0xfcd2", "a90b0101000b02000accbbaaf52e3c", "4538efaf00d122b4979064e971a7ed16c1644dc481fd"},
    {"SBMO-003Z", "60:EF:AB:AA:BB:CC", "SBMO-003Z", "0xfcd2", "a90b0101000b05000accbbaaabef60", "4400020164059033002101"},
    {"SBMO-003Z", "60:EF:AB:AA:BB:CC", "SBMO-003Z", "0xfcd2", "a90b0101000b05000accbbaaabef60", "440005016405100e002100"},
    {"SBMO-003Z encrypted", "60:EF:AB:AA:BB:CC", "SBMO-003Z", "0xfcd2", "a90b0101000b05000accbbaaabef60", "45cc08edf25d61cc0f42b60011223318cd3624"},
};

TheengsDecoder::BLE_ID_NUM test_name_mac_uuid_mfgsvcdata_id_num[]{
    TheengsDecoder::BLE_ID_NUM::SBBT_002C,
    TheengsDecoder::BLE_ID_NUM::SBBT_002C_ENCR,
    TheengsDecoder::BLE_ID_NUM::SBDW_002C,
    TheengsDecoder::BLE_ID_NUM::SBDW_002C,
    TheengsDecoder::BLE_ID_NUM::SBDW_002C_ENCR,
    TheengsDecoder::BLE_ID_NUM::SBMO_003Z,
    TheengsDecoder::BLE_ID_NUM::SBMO_003Z,
    TheengsDecoder::BLE_ID_NUM::SBMO_003Z_ENCR,
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
    {"SBBT-002C press", "0xfcd2", "SBBT-002C", "40001d01643a01"},
    {"SBBT-002C double press", "0xfcd2", "SBBT-002C", "40001e01643a02"},
    {"SBBT-002C triple press", "0xfcd2", "SBBT-002C", "40001f01643a03"},
    {"SBBT-002C long press", "0xfcd2", "SBBT-002C", "40002001643a04"},
    {"SBBT-002C press", "0xfcd2", "SBBT-002C", "4400ab01643a01"},
    {"SBBT-002C encrypted", "0xfcd2", "SBBT-002C", "4562511158bd25b8f093645b573115"},
    {"LYWSD03MMC_PVVX_ENCR", "0x181a", "ATC_9C58AB", "23ef56583dd42050fe8e4d"},
    {"LYWSD03MMC_PVVX_DECR", "0x181a", "ATC_89DF88", "9c0902116404"},
    {"ABN07", "0xfcd2", "asensor_7F7F", "4000100164029309038612"},
    {"Nutale", "0x0900", "nutale", "aabbccddeeff160100010100"},
    {"SE TEMP", "0x2a6e", "C T 999999", "1301"}, 
    {"SE TEMP negative","0x2a6e","C T 88888E","6afc"}, 
    {"SE RHT hum","0x2a6f","P RHT 99999A","46"},
    {"SE RHT temp neg","0x2a6e","P RHT 33399T","34f8"},
    {"SE TEMP temp positive","0x2a6e","P T EN 888444","7008"},
    {"SE RHT temp pos","0x2a6e","P RHT 99999Z","0a02"},
    {"SE TEMP PROBE temp","0x2a6e","P TPROBE 111999","1608"},
    {"SE MAG Open","0x2a06","P MAG CCCCCC","2400"},
    {"SE MAG Closed","0x2a06","P MAG CCCCCC","2900"},
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
    TheengsDecoder::BLE_ID_NUM::SBBT_002C,
    TheengsDecoder::BLE_ID_NUM::SBBT_002C,
    TheengsDecoder::BLE_ID_NUM::SBBT_002C,
    TheengsDecoder::BLE_ID_NUM::SBBT_002C,
    TheengsDecoder::BLE_ID_NUM::SBBT_002C,
    TheengsDecoder::BLE_ID_NUM::SBBT_002C_ENCR,
    TheengsDecoder::BLE_ID_NUM::LYWSD03MMC_PVVX_ENCR,
    TheengsDecoder::BLE_ID_NUM::LYWSD03MMC_PVVX_DECR,
    TheengsDecoder::BLE_ID_NUM::ABN07,
    TheengsDecoder::BLE_ID_NUM::NUTALE,
    TheengsDecoder::BLE_ID_NUM::SE_TEMP,
    TheengsDecoder::BLE_ID_NUM::SE_TEMP,
    TheengsDecoder::BLE_ID_NUM::SE_RHT,
    TheengsDecoder::BLE_ID_NUM::SE_RHT,
    TheengsDecoder::BLE_ID_NUM::SE_TEMP,
    TheengsDecoder::BLE_ID_NUM::SE_RHT,
    TheengsDecoder::BLE_ID_NUM::SE_TPROBE,
    TheengsDecoder::BLE_ID_NUM::SE_MAG,
    TheengsDecoder::BLE_ID_NUM::SE_MAG,
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
    {"ClearGrass clock", "fe95", "servicedata", "70205b0475ffeeddccbbaa090410020001"},
    {"ClearGrass clock", "fe95", "servicedata", "70205b04dcffeeddccbbaa09061002b202"},
    {"ClearGrass clock", "fe95", "servicedata", "70205b0475ffeeddccbbaa090410020901"},
    {"ClearGrass clock", "fe95", "servicedata", "70205b0485ffeeddccbbaa090a100108"},
    {"Mi flora", "fe95", "servicedata", "712098004a63b6658d7cc40d071003f32600"},
    {"Mi flora", "fe95", "servicedata", "712098005763b6658d7cc40d0810011e"},
    {"Mi flora", "fe95", "servicedata", "712098000163b6658d7cc40d0410024001"},
    {"Mi flora", "fe95", "servicedata", "7120980008ffeeddccbbaa0d0910020000"},
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
    {"ClearGrass Weather Station", "0xfdcd", "servicedata", "0809ffeeddccbbaa01040801870207024f2702015c"},
    {"ClearGrass Weather Station", "0xfdcd", "servicedata", "08094c0140342d5801040f01880207024f2702015c"},
    {"ClearGrass Weather Station", "0xfdcd", "servicedata", "08094c0140342d580104fc004a0207026627020120"},
    {"Qingping TH lite", "0xfdcd", "servicedata", "8810ffeeddccbbaa0104e8008f0302010b"},
    {"Qingping TH lite", "0xfdcd", "servicedata", "8810799111342d580104e9001d0202010b"},
    {"Qingping TH lite", "0xfdcd", "servicedata", "0810799111342d580104e9001d0202010b"},
    {"Qingping Motion & Light", "0xfdcd", "servicedata", "0812ffeeddccbbaa0201530f0118090400000000"},
    {"Qingping Motion & Light", "0xfdcd", "servicedata", "8812ffeeddccbbaa0201640f01c4090405020000"},
    {"Qingping Motion & Light", "0xfdcd", "servicedata", "4812ffeeddccbbaa0804010300000f0150"},
    {"Qingping Motion & Light", "0xfdcd", "servicedata", "4812ffeeddccbbaa0804000300000f0150"},
    {"Qingping Motion & Light", "0xfdcd", "servicedata", "c812ffeeddccbbaa1101010f015f"},
    {"Qingping Motion & Light", "0xfdcd", "servicedata", "4812ffeeddccbbaa1101000f0189"},
    {"Qingping Door Open", "0xfdcd", "servicedata", "0804ffeeddccbbaa0201600f012b0f0100"},
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
    {"BlueCharm BC08", "0xfeaa", "servicedata", "21010b0c0df540ff95fe69fc80"},
    {"Switchbot_Contact", "0xfd3d", "servicedata", "640064440359ffff42"},
    {"Switchbot_MotionSensor", "0xfd3d", "servicedata", "73006402f002"},
    {"Tile uuid", "0xfeed", "servicedata", "0200c58aaccd312f479e"},
    {"Tile uuid", "0xfeec", "servicedata", "0200c58aaccd312f479e"},
    {"Tile uuid", "0xfd84", "servicedata", "0200c58aaccd312f479e"},
    {"Mi flora pink tuya", "0xfd50", "servicedata", "0e006e0134a428005b"},
    {"Mi flora pink tuya", "0xfd50", "servicedata", "620000000047640000"},
    {"Mi flora pink tuya", "0xfd50", "servicedata", "6000d2000224640000"},
    {"BlueCharm BC04P", "0xfeaa", "servicedata", "21010b0c5a1680001f001ffca5"},
    {"BlueCharm BC021", "0xfeaa", "servicedata", "21010b0bd61ec00022fff203d1"},
    {"BlueCharm BC021", "0xfeaa", "servicedata", "21010b0c7af140006dffe10416"},
    {"BlueCharm BC021", "0xfeaa", "servicedata", "21010b0c7a0040006dffe10416"},
    {"BlueCharm BC021", "0xfeaa", "servicedata", "21010b0c7affc0006dffe10416"},
    {"KKM K6P", "0xfeaa", "servicedata", "2101070e5b154f2169"},
    {"KKM K6P", "0xfeaa", "servicedata", "2101070e5b16521f9b"},
    {"KKM K6P", "0xfeaa", "servicedata", "2101070e5b16531f95"},
    {"KKM K6P", "0xfeaa", "servicedata", "2101070e5b00401f95"},
    {"KKM K6P", "0xfeaa", "servicedata", "2101070e5bffc01f95"},
    {"KKM K9", "0xfeaa", "servicedata", "21010f0e5befbb42d1ffc200000407"},
    {"KKM K9", "0xfeaa", "servicedata", "21010f0e33f1a94e01002e000f03f7"},
    {"KKM K9", "0xfeaa", "servicedata", "21010f0e5bf2f42da1fe2cffd203a9"},
    {"KKM K9", "0xfeaa", "servicedata", "21010f0e58186f2a29ffe1000003f7"},
    {"KKM K9", "0xfeaa", "servicedata", "21010f0e58165125a5ffd2000003f7"},
    {"KKM K9", "0xfeaa", "servicedata", "21010f0e07192a224ffffcffec03eb"},
    {"KKM K9", "0xfeaa", "servicedata", "21010f0e58007325a5ffd2000003f7"},
    {"KKM K9", "0xfeaa", "servicedata", "21010f0e07ff8e224ffffcffec03eb"},
    {"KKM K9", "0xfeaa", "servicedata", "21010f0e58f4362bd8000ffff103f7"},
    {"KKM K9", "0xfeaa", "servicedata", "21010f0e5bf51b4addffc200000416"},
    {"Switchbot_S1", "0xfd3d", "servicedata", "48004700"},
    {"ClearGrass Barometer Pro", "0xfdcd", "servicedata", "8818ffeeddccbbaa0104e800dc0102015e07025a27"},
};

TheengsDecoder::BLE_ID_NUM test_uuid_id_num[]{
    TheengsDecoder::BLE_ID_NUM::XMTZC04HMKG,
    TheengsDecoder::BLE_ID_NUM::XMTZC04HMKG,
    TheengsDecoder::BLE_ID_NUM::XMTZC04HMKG,
    TheengsDecoder::BLE_ID_NUM::XMTZC04HMKG,
    TheengsDecoder::BLE_ID_NUM::XMTZC04HMLB,
    TheengsDecoder::BLE_ID_NUM::XMTZC04HMLB,
    TheengsDecoder::BLE_ID_NUM::XMTZC04HMLB,
    TheengsDecoder::BLE_ID_NUM::XMTZC04HMLB,
    TheengsDecoder::BLE_ID_NUM::XMTZC05HMKG,
    TheengsDecoder::BLE_ID_NUM::XMTZC05HMKG,
    TheengsDecoder::BLE_ID_NUM::XMTZC05HMKG,
    TheengsDecoder::BLE_ID_NUM::XMTZC05HMLB,
    TheengsDecoder::BLE_ID_NUM::XMTZC05HMLB,
    TheengsDecoder::BLE_ID_NUM::XMTZC05HMLB,
    TheengsDecoder::BLE_ID_NUM::XMTZC05HMKG,
    TheengsDecoder::BLE_ID_NUM::XMTZC05HMKG,
    TheengsDecoder::BLE_ID_NUM::XMTZC05HMKG,
    TheengsDecoder::BLE_ID_NUM::XMTZC05HMLB,
    TheengsDecoder::BLE_ID_NUM::XMTZC05HMLB,
    TheengsDecoder::BLE_ID_NUM::XMTZC05HMLB,
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
    TheengsDecoder::BLE_ID_NUM::BC08,
    TheengsDecoder::BLE_ID_NUM::BC08,
    TheengsDecoder::BLE_ID_NUM::BC08,
    TheengsDecoder::BLE_ID_NUM::BC08,
    TheengsDecoder::BLE_ID_NUM::BC08,
    TheengsDecoder::BLE_ID_NUM::KKM_K6P,
    TheengsDecoder::BLE_ID_NUM::KKM_K6P,
    TheengsDecoder::BLE_ID_NUM::KKM_K6P,
    TheengsDecoder::BLE_ID_NUM::KKM_K6P,
    TheengsDecoder::BLE_ID_NUM::KKM_K6P,
    TheengsDecoder::BLE_ID_NUM::KKM_K9,
    TheengsDecoder::BLE_ID_NUM::KKM_K9,
    TheengsDecoder::BLE_ID_NUM::KKM_K9,
    TheengsDecoder::BLE_ID_NUM::KKM_K9,
    TheengsDecoder::BLE_ID_NUM::KKM_K9,
    TheengsDecoder::BLE_ID_NUM::KKM_K9,
    TheengsDecoder::BLE_ID_NUM::KKM_K9,
    TheengsDecoder::BLE_ID_NUM::KKM_K9,
    TheengsDecoder::BLE_ID_NUM::KKM_K9,
    TheengsDecoder::BLE_ID_NUM::KKM_K9,
    TheengsDecoder::BLE_ID_NUM::SBS1,
    TheengsDecoder::BLE_ID_NUM::CGP23W,
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
    {"RuuviTag", "CB:B8:33:4C:88:4F", "99040512fc5394c37c0004fffc040cac364200cdcbb8334c884f"},
    {"RuuviTag maximum values", "CB:B8:33:4C:88:4F", "9904057ffffffefffe7fff7fff7fffffdefefffecbb8334c884f"},
    {"RuuviTag minimum values", "CB:B8:33:4C:88:4F", "9904058001000000008001800180010000000000cbb8334c884f"},
    {"WS02/WS08", "70:F7:00:00:11:1A", "100000001a110000f770580cf5016c0443090000"},
    {"WS02/WS08", "DC:23:00:00:0A:AE", "11000000ae0a000023dcb80b92017c03cdbb0300"},
    {"WS02/WS08", "63:D0:00:00:1D:CF", "1b002500cf1d0000d063a40cdc00bf0332270000"},
    {"WS02/WS08", "8E:BB:00:00:07:10", "1500000010070000bb8e140b6c01dd02f0d47200"},
    {"WS02/WS08", "8E:BB:00:00:07:10", "1500000010070000bb8eb401faa530002601c66f6700"},
    {"WS02/WS08", "63:06:00:00:0D:FE", "10000000fe0d00000663db01779f010082011cd30000"},
    {"WS02/WS08", "DC:23:00:00:0A:AE", "11000000ae0a000023dcb001af00000083019d520300"},
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
    TheengsDecoder::BLE_ID_NUM::RUUVITAG_RAWV2,
    TheengsDecoder::BLE_ID_NUM::RUUVITAG_RAWV2,
    TheengsDecoder::BLE_ID_NUM::RUUVITAG_RAWV2,
    TheengsDecoder::BLE_ID_NUM::THERMOBEACON,
    TheengsDecoder::BLE_ID_NUM::THERMOBEACON,
    TheengsDecoder::BLE_ID_NUM::THERMOBEACON,
    TheengsDecoder::BLE_ID_NUM::THERMOBEACON,
    TheengsDecoder::BLE_ID_NUM::THERMOBEACON,
    TheengsDecoder::BLE_ID_NUM::THERMOBEACON,
    TheengsDecoder::BLE_ID_NUM::THERMOBEACON,
};

// MAC test input [test name] [mac] [manufacturer data] [service data]
const char* test_mac_mfgsvcdata[][4] = {
    {"MiBand", "AA:BB:CC:DD:EE:FF", "57010202017dffffffffffffffffffffffffff02aabbccddeeff", "8d230000"},
    {"MiBand", "AA:BB:CC:DD:EE:FF", "570102020184ffffffffffffffffffffffffff02aabbccddeeff", ""},
    {"MiBand", "AA:BB:CC:DD:EE:FF", "570102ffffffffffffffffffffffffffffffff02aabbccddeeff", "ac1e0000"},
    {"MiBand", "AA:BB:CC:DD:EE:FF", "570102ffffffffffffffffffffffffffffffff02aabbccddeeff", ""},
    {"Amazfit Bip S", "AA:BB:CC:DD:EE:FF", "570100dcdde701d61acdc010c59c77fad0bf8e02aabbccddeeff", "ac1e0000"},
    {"ABTemp", "D5:FE:15:49:AC:7D", "4c000215b5b182c7eab14988aa99b5c1517008d90001641ac5", "7dac4915fed57dac530680"},
};

TheengsDecoder::BLE_ID_NUM test_mac_mfgsvcdata_id_num[]{
    TheengsDecoder::BLE_ID_NUM::MIBAND,
    TheengsDecoder::BLE_ID_NUM::MIBAND,
    TheengsDecoder::BLE_ID_NUM::MIBAND,
    TheengsDecoder::BLE_ID_NUM::MIBAND,
    TheengsDecoder::BLE_ID_NUM::MIBAND,
    TheengsDecoder::BLE_ID_NUM::ABTEMP,
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

  for (unsigned int i = 0; i < sizeof(test_name_mac_uuid_mfgsvcdata) / sizeof(test_name_mac_uuid_mfgsvcdata[0]); ++i) {
    doc.clear();
    std::cout << "trying " << test_name_mac_uuid_mfgsvcdata[i][0] << " : " << test_name_mac_uuid_mfgsvcdata[i][1] << std::endl;
    doc["id"] = test_name_mac_uuid_mfgsvcdata[i][1];
    doc["name"] = test_name_mac_uuid_mfgsvcdata[i][2];
    doc["servicedatauuid"] = test_name_mac_uuid_mfgsvcdata[i][3];
    doc["manufacturerdata"] = test_name_mac_uuid_mfgsvcdata[i][4];
    doc["servicedata"] = test_name_mac_uuid_mfgsvcdata[i][5];
    bleObject = doc.as<JsonObject>();

    decode_res = decoder.decodeBLEJson(bleObject);
    if (decode_res == test_name_mac_uuid_mfgsvcdata_id_num[i]) {
      std::cout << "Found : " << decode_res << " ";
      bleObject.remove("name");
      bleObject.remove("id");
      bleObject.remove("servicedatauuid");
      bleObject.remove("manufacturerdata");
      bleObject.remove("servicedata");
      serializeJson(doc, std::cout);
      std::cout << std::endl;

      StaticJsonDocument<2048> doc_exp;
      JsonObject expected = doc_exp.to<JsonObject>();
      deserializeJson(doc_exp, expected_name_mac_uuid_mfgsvcdata[i]);

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
      std::cout << "FAILED! Error parsing: " << test_name_mac_uuid_mfgsvcdata[i][0] << " : " << test_name_mac_uuid_mfgsvcdata[i][1] << " : " << test_name_mac_uuid_mfgsvcdata[i][2] << " : " << test_name_mac_uuid_mfgsvcdata[i][3] << std::endl;
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
