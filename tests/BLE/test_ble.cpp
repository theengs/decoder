#include <cmath>
#include <iostream>
#include <limits>

#include "decoder.h"

const char* expected_servicedata[] = {
    "{\"brand\":\"Xiaomi\",\"model\":\"Miflora\",\"model_id\":\"HHCCJCY01HHCC\",\"lux\":9971}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Miflora\",\"model_id\":\"HHCCJCY01HHCC\",\"moi\":30}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Miflora\",\"model_id\":\"HHCCJCY01HHCC\",\"tempc\":32,\"tempf\":89.6}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Miflora\",\"model_id\":\"HHCCJCY01HHCC\",\"fer\":0}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Cleargrass clock\",\"model_id\":\"LYWSD02\",\"tempc\":25.6,\"tempf\":78.08}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Cleargrass clock\",\"model_id\":\"LYWSD02\",\"hum\":69}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Cleargrass clock\",\"model_id\":\"LYWSD02\",\"tempc\":26.5,\"tempf\":79.7}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Jia round\",\"model_id\":\"LYWSDCGQ\",\"tempc\":26,\"tempf\":78.8,\"hum\":61.4}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Mi Jia round\",\"model_id\":\"LYWSDCGQ\",\"hum\":61.4}",
    "{\"brand\":\"Xiaomi\",\"model\":\"CG_THP\",\"model_id\":\"CGP1W\",\"tempc\":26.4,\"tempf\":79.52,\"hum\":64.7,\"pres\":100.63}",
    "{\"brand\":\"Xiaomi\",\"model\":\"CG_THP\",\"model_id\":\"CGP1W\",\"tempc\":27.1,\"tempf\":80.78,\"hum\":64.8,\"pres\":100.63}",
    "{\"brand\":\"Xiaomi\",\"model\":\"CG_THP\",\"model_id\":\"CGP1W\",\"tempc\":25.2,\"tempf\":77.36,\"hum\":58.6,\"pres\":100.86}",
    "{\"brand\":\"Xiaomi\",\"model\":\"CG_round_v2\",\"model_id\":\"CGG1\",\"tempc\":27.4,\"tempf\":81.32}",
    "{\"brand\":\"Xiaomi\",\"model\":\"CG_round_v2\",\"model_id\":\"CGG1\",\"tempc\":27.2,\"tempf\":80.96,\"hum\":63.8}",
    "{\"brand\":\"Xiaomi\",\"model\":\"CG_round_v1\",\"model_id\":\"CGG1\",\"tempc\":27.4,\"tempf\":81.32,\"hum\":62.6}",
    "{\"brand\":\"Xiaomi\",\"model\":\"CG_round_v1\",\"model_id\":\"CGG1\",\"tempc\":23.5,\"tempf\":74.3,\"hum\":28.3}",
    "{\"brand\":\"Xiaomi\",\"model\":\"CG_round_v1\",\"model_id\":\"CGG1\",\"tempc\":24.4,\"tempf\":75.92,\"hum\":31.5}",
    "{\"brand\":\"Xiaomi\",\"model\":\"CG_alarm_clock\",\"model_id\":\"CGD1\",\"tempc\":26.6,\"tempf\":79.88,\"hum\":63.9}",
    "{\"brand\":\"Xiaomi\",\"model\":\"CG_alarm_clock\",\"model_id\":\"CGD1\",\"tempc\":26.9,\"tempf\":80.42,\"hum\":67}",
    "{\"brand\":\"Xiaomi\",\"model\":\"CG_alarm_clock\",\"model_id\":\"CGD1\",\"tempc\":27,\"tempf\":80.6,\"hum\":65.7}",
    "{\"brand\":\"Qingping\",\"model\":\"TH lite\",\"model_id\":\"CGDK2\",\"tempc\":23.2,\"tempf\":73.76,\"hum\":91.1}",
    "{\"brand\":\"Qingping\",\"model\":\"TH lite\",\"model_id\":\"CGDK2\",\"tempc\":23.3,\"tempf\":73.94,\"hum\":54.1}",
    "{\"brand\":\"Qingping\",\"model\":\"Door sensor\",\"model_id\":\"CGH1\",\"open\":true}",
    "{\"brand\":\"Qingping\",\"model\":\"Door sensor\",\"model_id\":\"CGH1\",\"open\":false}",
    "{\"brand\":\"Qingping\",\"model\":\"Door sensor\",\"model_id\":\"CGH1\",\"open\":true}",
    "{\"brand\":\"Qingping\",\"model\":\"Door sensor\",\"model_id\":\"CGH1\",\"open\":false}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Formaldehyde detector\",\"model_id\":\"JQJCY01YM\",\"batt\":94}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Formaldehyde detector\",\"model_id\":\"JQJCY01YM\",\"hum\":59.5}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Formaldehyde detector\",\"model_id\":\"JQJCY01YM\",\"for\":0.08}",
    "{\"brand\":\"Xiaomi\",\"model\":\"LYWSD03MMC\",\"model_id\":\"LYWSD03MMC_ATC\",\"tempc\":32.5,\"tempf\":90.5,\"hum\":62,\"batt\":81,\"volt\":2.939}",
    "{\"brand\":\"Qingping\",\"model\":\"Motion & Light\",\"model_id\":\"CGPR1\",\"lux\":0}",
};

const char* expected_mfg[] = {
    "{\"brand\":\"Inkbird\",\"model\":\"TH Sensor\",\"model_id\":\"IBS-TH1\",\"tempc\":26.62,\"tempf\":79.916,\"hum\":53.79,\"batt\":89}",
    "{\"brand\":\"GENERIC\",\"model\":\"TPMS\",\"model_id\":\"TPMS1\",\"count\":1,\"pres\":222.708,\"tempc\":31.96,\"tempf\":89.528,\"batt\":51,\"alarm\":false}",
    "{\"brand\":\"GENERIC\",\"model\":\"IBEACON\",\"model_id\":\"IBEACON\",\"mfid\":\"4c00\",\"uuid\":\"426c7565436861726d426561636f6e73\",\"major\":3838,\"minor\":4949,\"power\":-59}",
    "{\"brand\":\"ThermoBeacon\",\"model\":\"WS02\",\"model_id\":\"WS02\",\"tempc\":31.3125,\"tempf\":88.3625,\"hum\":70.75,\"volt\":3.160}",
    "{\"brand\":\"Govee\",\"model\":\"Smart Thermo Hygrometer\",\"model_id\":\"H5075\",\"tempc\":26.8,\"tempf\":80.24,\"hum\":52.6,\"batt\":100}",
    "{\"brand\":\"Govee\",\"model\":\"Thermo Hygrometer\",\"model_id\":\"H5072\",\"tempc\":27.5,\"tempf\":81.5,\"hum\":53.1,\"batt\":100}",
    "{\"brand\":\"Inkbird\",\"model\":\"iBBQ\",\"model_id\":\"IBS-X4S\",\"tempc\":26,\"tempf\":78.8,\"tempc2\":26,\"tempf2\":78.8,\"tempc3\":25,\"tempf3\":77,\"tempc4\":25,\"tempf4\":77}",
    "{\"brand\":\"Inkbird\",\"model\":\"T Sensor\",\"model_id\":\"IBS-TH2\",\"tempc\":26.62,\"tempf\":79.916,\"batt\":89}",
    "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"power\":2376,\"energy\":21.2928,\"batt\":80}",
    "{\"brand\":\"iNode\",\"model\":\"Energy Meter\",\"model_id\":\"INEM\",\"power\":5304,\"energy\":18.8804,\"batt\":80}",
};

const char* expected_uuid[] = {
    "{\"brand\":\"Xiaomi\",\"model\":\"Miband\",\"model_id\":\"MiBand\",\"steps\":7842}",
    "{\"brand\":\"Xiaomi\",\"model\":\"Miscale_v1\",\"model_id\":\"XMTZC04HM\",\"unit\":\"kg\",\"weight\":61.75}",
    "{\"brand\":\"Mokosmart\",\"model\":\"Beacon\",\"model_id\":\"Mokobeacon\",\"batt\":100,\"x_axis\":40960,\"y_axis\":61695,\"z_axis\":57347}",
    "{\"brand\":\"Mokosmart\",\"model\":\"BeaconX Pro\",\"model_id\":\"MBXPRO\",\"tempc\":27.4,\"tempf\":81.32,\"hum\":49.4,\"volt\":3.247}",
};

// Service data test input [test name] [data]
const char* test_servicedata[][2] = {
    {"Mi flora", "712098004a63b6658d7cc40d071003f32600"},
    {"Mi flora", "712098005763b6658d7cc40d0810011e"},
    {"Mi flora", "712098000163b6658d7cc40d0410024001"},
    {"Mi flora", "712098000863b6658d7cc40d0910020000"},
    {"Cleargrass clock", "70205b04756ab883c8593f090410020001"},
    {"Cleargrass clock", "70205b04dc6ab883c8593f09061002b202"},
    {"Cleargrass clock", "70205b04756ab883c8593f090410020901"},
    {"Mi jia round sensor", "5020aa0137dfaa33342d580d100404016602"},
    {"Mi jia round sensor", "5020aa018ddfaa33342d580610026602"},
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
    {"Qingping Door Open", "0804751060342d580201600f012b0f0100"},
    {"Qingping Door Close", "0804751060342d580201600f01420f0101"},
    {"Qingping Door Open Action", "4804751060342d580401000f01cb"},
    {"Qingping Door Close Action", "4804751060342d580401010f01d5"},
    {"Formaldehyde detector", "5020df02383a5c014357480a10015e"},
    {"Formaldehyde detector", "5020df02283a5c014357480610025302"},
    {"Formaldehyde detector", "5020df025b3a5c014357481010020800"},
    {"LYWSD03MMC_ATC", "a4c138d5d49801453e510b7b62"},
    {"Qingping Motion & Light", "0812443660342d580201530f0118090400000000"},
};

// manufacturer data test input [test name] [device name] [data]
const char* test_mfgdata[][3] = {
    {"Inkbird TH1", "sps", "660a03150110805908"},
    {"TPMS", "TPMS1_10CA8F", "000180eaca10ca8ff46503007c0c00003300"},
    {"iBeacon", "BlueCharm_135727", "4c000215426c7565436861726d426561636f6e730efe1355c5"},
    {"WS02", "ThermoBeacon", "100000001a110000f770580cf5016c0443090000"},
    {"H5075", "GVH5075_1234", "88ec000418ee6400"},
    {"H5072", "GVH5072_1234", "88ec0004344b6400"},
    {"IBT-4XS", "iBBQ", "0000000010082c40abe604010401fa00fa00"},
    {"Inkbird TH2", "tps", "660a03150110805908"},
    {"iNode", "test1", "90826300f0cf0000c409a20080"},
    {"iNode", "test2", "9082dd0061b80000c409a00080"},
};

// uuid test input [test name] [uuid] [data source] [data]
const char* test_uuid[][4] = {
    {"MiBand", "fee0", "servicedata", "a21e0000"},
    {"Miscale", "0x181d", "servicedata", "223e30b207010708031f"},
    {"Mokobeacon", "0xff01", "servicedata", "64000000005085a000f0ffe003"},
    {"MokoXPro", "0xfeab", "servicedata", "70000a011201ee0caf03def14635998a"},
};

template <typename T>
static bool floatEqual(T f1, T f2) {
  return (fabs(f1 - f2) <= std::numeric_limits<T>::epsilon() * fmax(fabs(f1), fabs(f2)));
}

bool checkResult(JsonObject result, JsonObject expected) {
  if (result.size() != expected.size()) {
    std::cout << "Key:value count mismatch, result " << result.size() << ", expected " << expected.size() << std::endl;
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
  StaticJsonDocument<1024> doc;
  JsonObject bleObject;

  TheengsDecoder decoder;

  for (unsigned int i = 0; i < sizeof(test_servicedata) / sizeof(test_servicedata[0]); ++i) {
    doc.clear();
    std::cout << "trying " << test_servicedata[i][0] << " : " << test_servicedata[i][1] << std::endl;
    doc["servicedata"] = test_servicedata[i][1];
    bleObject = doc.as<JsonObject>();

    if (decoder.decodeBLEJson(bleObject)) {
      std::cout << "Found : ";
      bleObject.remove("servicedata");
      serializeJson(doc, std::cout);
      std::cout << std::endl;

      StaticJsonDocument<1024> doc_exp;
      JsonObject expected = doc_exp.to<JsonObject>();
      deserializeJson(doc_exp, expected_servicedata[i]);

      if (!checkResult(bleObject, expected)) {
        return 1;
      }
    } else {
      std::cout << "FAILED! Error parsing: " << test_servicedata[i][0] << " : " << test_servicedata[i][1] << std::endl;
      return 1;
    }
  }

  for (unsigned int i = 0; i < sizeof(test_mfgdata) / sizeof(test_mfgdata[0]); ++i) {
    doc.clear();
    std::cout << "trying " << test_mfgdata[i][0] << " : " << test_mfgdata[i][1] << std::endl;
    doc["name"] = test_mfgdata[i][1];
    doc["manufacturerdata"] = test_mfgdata[i][2];
    bleObject = doc.as<JsonObject>();

    if (decoder.decodeBLEJson(bleObject)) {
      std::cout << "Found : ";
      bleObject.remove("name");
      bleObject.remove("manufacturerdata");
      serializeJson(doc, std::cout);
      std::cout << std::endl;

      StaticJsonDocument<1024> doc_exp;
      JsonObject expected = doc_exp.to<JsonObject>();
      deserializeJson(doc_exp, expected_mfg[i]);

      if (!checkResult(bleObject, expected)) {
        return 1;
      }
    } else {
      std::cout << "FAILED! Error parsing: " << test_mfgdata[i][0] << " : " << test_mfgdata[i][1] << " : " << test_mfgdata[i][2] << std::endl;
      return 1;
    }
  }

  for (unsigned int i = 0; i < sizeof(test_uuid) / sizeof(test_uuid[0]); ++i) {
    doc.clear();
    std::cout << "trying " << test_uuid[i][0] << " : " << test_uuid[i][1] << std::endl;
    doc[test_uuid[i][2]] = test_uuid[i][3];
    doc["servicedatauuid"] = test_uuid[i][1];
    bleObject = doc.as<JsonObject>();

    if (decoder.decodeBLEJson(bleObject)) {
      std::cout << "Found : ";
      bleObject.remove("servicedatauuid");
      bleObject.remove(test_uuid[i][2]);
      serializeJson(doc, std::cout);
      std::cout << std::endl;

      StaticJsonDocument<1024> doc_exp;
      JsonObject expected = doc_exp.to<JsonObject>();
      deserializeJson(doc_exp, expected_uuid[i]);

      if (!checkResult(bleObject, expected)) {
        return 1;
      }
    } else {
      std::cout << "FAILED! Error parsing: " << test_uuid[i][0] << " : " << test_uuid[i][1] << " : " << test_uuid[i][2] << " : " << test_uuid[i][3] << std::endl;
      serializeJson(doc, std::cout);
      std::cout << std::endl;
      return 1;
    }
  }
}