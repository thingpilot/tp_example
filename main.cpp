/**
  * @file    main.cpp
  * @version 0.1.0
  * @author  Adam Mitchell
  * @brief   Main file for use with Thingpilot node core devices
  */

/** Includes
 */
#include <mbed.h>
#include "node_flow.h"

/** NodeFlow defines three pure virtual functions that the user must override
 *  in order to incorporate user-application/hardware-specific tasks. This override
 *  is done by defining a class that is derived from NodeFlow and overriding the 
 *  functions within this class
 */
class MyApp: public NodeFlow 
{
    public:

        /** Used to handle one-time setup of a peripheral, such as configuring
         *  an accelerometer interrupt
         */
        int setup();

        /** Used to define exactly what should happen when the device wakes
         *  from an external interrupt
         */
        int HandleInterrupt();

        /** Used to define exactly what should happen when the device wakes
         *  for a periodic task, i.e. reading a temperature sensor
         */
        uint8_t* HandlePeriodic(uint16_t &length);
};

int MyApp::setup()
{
    /* Do user HW-specific setup here, i.e. Arduino Setup function 
     */
    return 0;
}

uint8_t* MyApp::HandlePeriodic(uint16_t &length)
{
    /* Handle period sensor readings here 
     */
    uint8_t payload[8];
    return payload;  
}

int MyApp::HandleInterrupt()
{
    /** Handle interrupts here 
     */
    return 0;
}

/** Instantiate a MyApp object
 */
MyApp myapp;


int main()
{
    myapp.start();
}

