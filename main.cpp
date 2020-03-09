/**
*******************************************************************************************
*                               __|__       
*                        --@--@--(_)--@--@--                 
* @file    main.cpp
* @version 0.1.0
* @author  A Fab User 
* @brief   This sketch demonstrates how to measure and send data with the ThingPilot module
*         
*          A) TARGET: TP_WRIGHT_V1_0_0 for NB-IOT || TP_EARHART_V1_0_0 for LoRaWan
*          B) For Earhart: It uses ABP to send data to the ttn network. 
*             All keys have to be specified in the mbed_lib.json in big endian byte order
* 
*******************************************************************************************
**/

/** Includes 
 */
#include "ThingPilot.h"
ThingPilot myapp;


float scheduler[METRIC_GROUPS_ON]={60};

/**Uncomment if using the scheduler and DEFINE SCHEDULER TRUE on config_device.h*/
// float schedulerA[NUMBER_OF_TIMES]={HH.MM, HH.MM,HH.MM};
// float schedulerB[1]={HH.MM};
// float schedulerC[1]={HH.MM};
// float schedulerD[1]={HH.MM};

/*Uncomment if using NB-IOT or LORA with scheduler*/
float send_scheduler[10]={11,11.55,12.22,12.56,13.25,13.3,14,14.3,16,15.45};

void ThingPilot::setup()
{
    set_time(39600);
}

int main()
{ 

    myapp.start();
}

void ThingPilot::HandleInterrupt()
{
    // Handle interrupts here 
    debug("Heyy interrupt\n");
}

/**MetricGroupA for handling either scheduled times(SCHEDULED TRUE in the config_device.h) 
  * or a constant periodic time (SCHEDULED FALSE & SIZE 1) for all sensors 
  * To use the other metric groups the user has to define SCHEDULED FALSE && the SIZE 2 for MetricGroupA && MetricGroupB 
  * 
  */
void ThingPilot::MetricGroupA()
{
    add_record<uint8_t>(100);
  
}

void ThingPilot::MetricGroupB()
{
  
}

void ThingPilot::MetricGroupC()
{
  
}
void ThingPilot::MetricGroupD()
{
   
}



