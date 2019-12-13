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
Serial pc(TP_PC_TXU,TP_PC_RXU);

float scheduler[4]={0,0,0,0};

/**Uncomment if using the scheduler and DEFINE SCHEDULER TRUE on config_device.h*/
// float schedulerA[NUMBER_OF_TIMES]={HH.MM,HH.MM};
// float schedulerB[1]={HH.MM};
// float schedulerC[1]={HH.MM};
// float schedulerD[1]={HH.MM};

/*Uncomment if using NB-IOT */
//float nbiot_send_scheduler[2]={HH.MM,HH.MM};

void ThingPilot::setup(){
    // put your setup code here, to run once:
}

int main(){ 
    myapp.start();
}

void ThingPilot::HandleInterrupt(){
     // Handle interrupts here 
}

/**MetricGroupA for handling either scheduled times(SCHEDULED TRUE in the config_device.h) 
  * or a constant periodic time (SCHEDULED FALSE & SIZE 1) for all sensors 
  * To use the other metric groups the user has to define SCHEDULED FALSE && the SIZE 2 for MetricGroupA && MetricGroupB 
  * 
  */
void ThingPilot::MetricGroupA(){

}

void ThingPilot::MetricGroupB(){
    
}

void ThingPilot::MetricGroupC(){
   
}
void ThingPilot::MetricGroupD(){
  
}




