#include <iostream>

#include "decoder.h"

// Service data test input [test name] [data]
const char* test_servicedata[][2] = {
    {"Mi jia round sensor", "5020aa0137dfaa33342d580d100404016602"},
    {"Mi jia round sensor", "5020aa018ddfaa33342d580610026602"},
    {"Formaldehyde detector", "5020df02383a5c014357480a10015e"},
    {"Formaldehyde detector", "5020df02283a5c014357480610025302"},
    {"Formaldehyde detector", "5020df025b3a5c014357481010020800"},
    {"SHOULD FAIL", "0c01810207024d270201508094c0140342d5801040"}
};

TheengsDecoder::BLE_ID_NUM test_svcdata_id_num[]{
    TheengsDecoder::BLE_ID_NUM::LYWSDCGQ,
    TheengsDecoder::BLE_ID_NUM::LYWSDCGQ,
    TheengsDecoder::BLE_ID_NUM::JQJCY01YM,
    TheengsDecoder::BLE_ID_NUM::JQJCY01YM,
    TheengsDecoder::BLE_ID_NUM::JQJCY01YM,
    TheengsDecoder::BLE_ID_NUM::UNKNOWN_MODEL,
};

// manufacturer data test input [test name] [device name] [data]
const char* test_mfgdata[][3] = {
    {"Inkbird TH1", "sps", "660a03150110805908"},
    {"SHOULD FAIL", "fail", "270201508094c014"},
};

TheengsDecoder::BLE_ID_NUM test_mfgdata_id_num[]{
    TheengsDecoder::BLE_ID_NUM::IBSTHBP01B,
    TheengsDecoder::BLE_ID_NUM::UNKNOWN_MODEL,
};

// uuid test input [test name] [uuid] [data source] [data]
const char* test_uuid[][4] = {
    {"ClearGrass clock", "fe95", "servicedata", "70205b04756ab883c8593f090410020001"},
    {"ClearGrass clock", "fe95", "servicedata", "70205b04dc6ab883c8593f09061002b202"},
    {"ClearGrass clock", "fe95", "servicedata", "70205b04756ab883c8593f090410020901"},
    {"Mi flora", "fe95", "servicedata", "712098004a63b6658d7cc40d071003f32600"},
    {"Mi flora", "fe95", "servicedata", "712098005763b6658d7cc40d0810011e"},
    {"Mi flora", "fe95", "servicedata", "712098000163b6658d7cc40d0410024001"},
    {"Mi flora", "fe95", "servicedata", "712098000863b6658d7cc40d0910020000"},
    {"SHOULD FAIL", "fa11", "servicedata", "123456789ABCDEF"},
    {"SHOULD FAIL", "0x181d", "servicedata", "f2a22bb2070103003526"},
};

TheengsDecoder::BLE_ID_NUM test_uuid_id_num[]{
    TheengsDecoder::BLE_ID_NUM::LYWSD02,
    TheengsDecoder::BLE_ID_NUM::LYWSD02,
    TheengsDecoder::BLE_ID_NUM::LYWSD02,
    TheengsDecoder::BLE_ID_NUM::HHCCJCY01HHCC,
    TheengsDecoder::BLE_ID_NUM::HHCCJCY01HHCC,
    TheengsDecoder::BLE_ID_NUM::HHCCJCY01HHCC,
    TheengsDecoder::BLE_ID_NUM::HHCCJCY01HHCC,
    TheengsDecoder::BLE_ID_NUM::UNKNOWN_MODEL,
    TheengsDecoder::BLE_ID_NUM::XMTZC04HM,
};
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
    if (strcmp(test_servicedata[i][0], "SHOULD FAIL") == 0 &&
        decode_res != TheengsDecoder::BLE_ID_NUM::UNKNOWN_MODEL) {
      std::cout << "Decode result returned model ID: " << bleObject["model_id"] << " UNKNOWN_MODEL expected "
                << test_servicedata[i][0] << " : " << test_servicedata[i][1] << std::endl;
      return 1;
    }

    if (decode_res == test_svcdata_id_num[i]) {
      std::cout << "Found : ";
      bleObject.remove("servicedata");
      serializeJson(doc, std::cout);
      std::cout << std::endl;
    } else if (strcmp(test_servicedata[i][0], "SHOULD FAIL") == 0) {
      continue;
    } else {
      std::cout << "FAILED! Error parsing: " << test_servicedata[i][0]
                << " : " << test_servicedata[i][1] << std::endl;
      return 1;
    }
  }

  for (unsigned int i = 0; i < sizeof(test_mfgdata) / sizeof(test_mfgdata[0]); ++i) {
    doc.clear();
    std::cout << "trying " << test_mfgdata[i][0] << " : " << test_mfgdata[i][1] << std::endl;
    doc["name"] = test_mfgdata[i][1];
    doc["manufacturerdata"] = test_mfgdata[i][2];
    bleObject = doc.as<JsonObject>();

    decode_res = decoder.decodeBLEJson(bleObject);
    if (strcmp(test_mfgdata[i][0], "SHOULD FAIL") == 0 &&
        decode_res != TheengsDecoder::BLE_ID_NUM::UNKNOWN_MODEL) {
      std::cout << "Decode result returned model ID: " << bleObject["model_id"] << " UNKNOWN_MODEL expected "
                << test_mfgdata[i][0] << " : " << test_mfgdata[i][1] << " : "
                << test_mfgdata[i][2] << std::endl;
      return 1;
    }
    if (decode_res == test_mfgdata_id_num[i]) {
      std::cout << "Found : ";
      bleObject.remove("name");
      bleObject.remove("manufacturerdata");
      serializeJson(doc, std::cout);
      std::cout << std::endl;
    } else if (strcmp(test_mfgdata[i][0], "SHOULD FAIL") == 0) {
      continue;
    } else {
      std::cout << "FAILED! Error parsing: "
                << test_mfgdata[i][0] << " : " << test_mfgdata[i][1] << " : "
                << test_mfgdata[i][2] << std::endl;
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
    if (strcmp(test_uuid[i][0], "SHOULD FAIL") == 0 &&
        decode_res != TheengsDecoder::BLE_ID_NUM::UNKNOWN_MODEL) {
      std::cout << "Decode result returned model ID: " << bleObject["model_id"] << " UNKNOWN_MODEL expected "
                << test_uuid[i][0] << " : "
                << test_uuid[i][1] << " : " << test_uuid[i][2] << " : "
                << test_uuid[i][3] << std::endl;
      return 1;
    }

    if (decode_res == test_uuid_id_num[i]) {
      std::cout << "Found : ";
      bleObject.remove("servicedatauuid");
      bleObject.remove(test_uuid[i][2]);
      serializeJson(doc, std::cout);
      std::cout << std::endl;
    } else if (strcmp(test_uuid[i][0], "SHOULD FAIL") == 0) {
      continue;
    } else {
      std::cout << "FAILED! Error parsing: " << test_uuid[i][0] << " : "
                << test_uuid[i][1] << " : " << test_uuid[i][2] << " : "
                << test_uuid[i][3] << std::endl;
      serializeJson(doc, std::cout);
      std::cout << std::endl;
      return 1;
    }
  }

  if (!decoder.getTheengProperties("SHOULD_FAIL").empty()) {
    std::cout << "FAILED! Should fail getTheengProperties returned a value" << std::endl;
    return 1;
  }

  doc.clear();
  std::cout << "trying garbage inputs" << std::endl;
  doc["garbage"] = "input";
  bleObject = doc.as<JsonObject>();
  decode_res = decoder.decodeBLEJson(bleObject);
  if (decode_res >= 0) {
    std::cout << "FAILED! garbage input returned " << decode_res << std::endl;
    return 1;
  }

  if (decoder.testDocMax() < 0) {
    return 1;
  }
}
