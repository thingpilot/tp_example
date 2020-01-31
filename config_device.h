/**
  * @file    config_device.h
  * @version 0.1.0
  * @brief   Configuration file
  */

/** Define to prevent recursive inclusion
 */
#pragma once
#include "mbed.h"

/** Define to prevent recursive inclusion
 */
#define app_id "MyEnvApp"
#define dev_id "hms_002"

/**CLOCK SYNC IF TRUE IS GOING TO TRY TO SET THE TIME*/
#define CLOCK_SYNCH false
#if (CLOCK_SYNCH)
    #define CLOCK_SYNCH_TIME 51660 //1-86400 time in seconds (HH*3600)+(MM*60)
#endif
/**DEFINE SECONDS FOR DEACTIVATING THE INTERRUPT FROM GOING OFF */
#define INTERRUPT_DELAY 60

/**SCHEDULER SPECIFICS - FALSE==INTERVAL TIMES, TRUE==SCHEDULED TIMES*/
#define SCHEDULER false
/*If the SCHEDULER IS TRUE DEFINE WHICH METRIC GROUPS YOU ARE USING && THE SIZE(No TIMES) */
#define METRIC_GROUPS_ON 1 /*DEFINE THE NUMBER OF METRIC GROUPS ACTIVATED- 0-4 */
#if (SCHEDULER)
    #define SCHEDULER_A false
    #define SCHEDULER_B false
    #define SCHEDULER_C false
    #define SCHEDULER_D false
    #define SCHEDULER_A_SIZE 3
    #define SCHEDULER_B_SIZE 1
    #define SCHEDULER_C_SIZE 0
    #define SCHEDULER_D_SIZE 0
#endif

//todo: should i have send for each metric group?!
/** IF USING NBIOT DEFINE SEND SCHEDULER AS TRUE*/
#define SEND_SCHEDULER false
#if(SEND_SCHEDULER)
    #define SEND_SCHEDULER_SIZE 10
#endif

/**The device will restart after 3 error status. */
#define STATUS_ERROR_TOLERANCE 5

//TODO: INTERRUPT ONLY MODE

#if !defined(INTERRUPT_DELAY)
    #define INTERRUPT_DELAY 120
#endif

