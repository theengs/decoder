const char* _H5140_json = "{\"brand\":\"Govee\",\"model\":\"Smart CO2 Monitor\",\"model_id\":\"H5140\",\"tag\":\"0f03\",\"condition\":[\"name\",\"contain\",\"GV5140\",\"&\",\"manufacturerdata\",\">=\",20,\"index\",0,\"01000101\"],\"properties\":{\"tempc\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,6,false,false],\"post_proc\":[\"/\",10000]},\"hum\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",8,6,false,false],\"post_proc\":[\"&\",2147483647,\"%\",1000,\"/\",10]},\"co2\":{\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,4,false,false]}}}";
/* R""""(
{
   "brand":"Govee",
   "model":"Smart CO2 Monitor",
   "model_id":"H5140",
   "tag":"0f03",
   "condition":["name", "contain", "GV5140", "&", "manufacturerdata", ">=", 20, "index", 0, "01000101"],
   "properties":{
      "tempc":{
         "decoder":["value_from_hex_data", "manufacturerdata", 8, 6, false, false],
         "post_proc":["/", 10000]
      },
      "hum":{
         "decoder":["value_from_hex_data", "manufacturerdata", 8, 6, false, false],
         "post_proc":["&", 2147483647, "%", 1000, "/", 10]
      },
      "co2":{
         "decoder":["value_from_hex_data", "manufacturerdata", 14, 4, false, false]
      }
   }
})"""";*/

/*
 * Govee H5140 Smart CO2 Monitor - BLE Manufacturer Data Format
 * =============================================================
 *
 * Advertisement name pattern: GV5140XXXX (where XXXX is device suffix)
 * Manufacturer data: 20 hex characters (10 bytes)
 *
 * Byte layout:
 *   Positions 0-7:   01000101 (constant header)
 *   Positions 8-13:  XXXXXX (24-bit combined temp/humidity)
 *   Positions 14-17: YYYY (16-bit CO2 in ppm, big-endian)
 *   Positions 18-19: 00 (padding/unknown)
 *
 * Decoding formulas:
 *   - temp_celsius = 24bit_value / 10000
 *   - humidity_percent = (24bit_value % 1000) / 10
 *   - co2_ppm = 16bit_value
 *
 * Example: 0100010103fcbf044c00
 *   - Header: 01000101
 *   - Temp/Hum: 03fcbf = 261311 decimal
 *     - Temperature: 261311 / 10000 = 26.13°C (79.04°F)
 *     - Humidity: (261311 % 1000) / 10 = 31.1%
 *   - CO2: 044c = 1100 ppm
 *
 * Tested with OpenMQTTGateway on ESP32
 */

const char* _H5140_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"co2\":{\"unit\":\"ppm\",\"name\":\"carbon_dioxide\"}}}";
/*R""""(
{
   "properties":{
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      },
      "co2":{
         "unit":"ppm",
         "name":"carbon_dioxide"
      }
   }
})"""";*/
