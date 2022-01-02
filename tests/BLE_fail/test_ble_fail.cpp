#include <iostream>

#include "decoder.h"

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
    {"Cleargrass THP sensor", "08094c0140342d5801040c01810207024d2702015c"},
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
    {"SHOULD FAIL", "0c01810207024d270201508094c0140342d5801040"}};

// manufacturer data test input [test name] [device name] [data]
const char* test_mfgdata[][3] = {
    {"Inkbird TH1", "sps", "660a03150110805908"},
    {"SHOULD FAIL", "fail", "270201508094c014"}};

// uuid test input [test name] [uuid] [data source] [data]
const char* test_uuid[][4] = {
    {"MiBand", "fee0", "servicedata", "a21e0000"},
    {"SHOULD FAIL", "fa11", "servicedata", "123456789ABCDEF"}};

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
    } else if (strcmp(test_servicedata[i][0], "SHOULD FAIL") == 0) {
      continue;
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
    } else if (strcmp(test_mfgdata[i][0], "SHOULD FAIL") == 0) {
      continue;
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
    } else if (strcmp(test_uuid[i][0], "SHOULD FAIL") == 0) {
      continue;
    } else {
      std::cout << "FAILED! Error parsing: " << test_uuid[i][0] << " : " << test_uuid[i][1] << " : " << test_uuid[i][2] << " : " << test_uuid[i][3] << std::endl;
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
  if (decoder.decodeBLEJson(bleObject) != false) {
    std::cout << "FAILED! garbage input returned true" << std::endl;
    return 1;
  }
  
  if (decoder.testDocMax() < 0) {
    return 1;
  }
}