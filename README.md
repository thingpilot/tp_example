## Thingpilot blank example program

**v0.4.0** *31/01/2019*
- Added a credentials.h file if enabled the user will manually provide the credentials
- The maximum transmitted bytes for lora is now 255 instead of 64. to change the max size 
  the user will have to change it from the mbed_app.json file -> lora.tx-max-size":255
- Updated to the latest nodeflow v0.4.0
- Tested with mbed-os up to 5.15.0
- Updated example the user can use the following from Nodeflow.h
- start() drives all the application. It handles the different modem and configuration.
- add_record"<DataType>"(data) for adding variable type records to eeprom
- increment(i) Increment with a value i.
- read_increment(&increment_value) Read current increment value.

**v0.3.0** *25/11/2019*

 - Use version of [node flow](https://github.com/thingpilot/node_flow) that includes all required drivers for all targets

**v0.2.0** *25/11/2019*

 - Include scheduler array in main.cpp 

**v0.1.0** *25/11/2019*

 - Derive NodeFlow class in main.cpp and provide templates to override functions 
 - Add [config_device.h](https://github.com/thingpilot/deviceconfig)
 - Add [Thingpilot NB-IoT drivers](https://github.com/thingpilot/thingpilot_nbiot)
 - Add [Thingpilot LoRa drivers](https://github.com/thingpilot/thingpilot_semtech_lora)
 - Add [Mbed LoRa drivers](https://github.com/ARMmbed/mbed-semtech-lora-rf-drivers)
 - Add v0.5.0 of custom_targets.json from [mbed targets](https://github.com/thingpilot/mbed_targets)
 - Add node_flow.lib to include the latest master from [node flow](https://github.com/thingpilot/node_flow)
 - Adding mbed-os.lib (pointing to 5.14.2) to program to allow Mbed Studio to import the program from default (master) branch

