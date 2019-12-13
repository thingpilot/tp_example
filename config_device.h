/**
  * @file    config_device.h
  * @version 0.1.0
  * @author  Rafaella Neofytou, Adam Mitchell
  * @brief   
  */

/** Define to prevent recursive inclusion
 */
#pragma once
#include "mbed.h"

/**CLOCK SYNC IF TRUE IS GOING TO TRY TO SET THE TIME*/
#define CLOCK_SYNCH false
#if (CLOCK_SYNCH)
    #define CLOCK_SYNCH_TIME 86400 //1-86400 time in seconds 
#endif
/**DEFINE SECONDS FOR DEACTIVATING THE INTERRUPT FROM GOING OFF */
#define INTERRUPT_DELAY 60

/**SCHEDULER SPECIFICS - FALSE==INTERVAL TIMES, TRUE==SCHEDULED TIMES*/
#define SCHEDULER false
/*If the SCHEDULER IS TRUE DEFINE WHICH METRIC GROUPS YOU ARE USING && THE SIZE(No TIMES) */

#if (SCHEDULER)
    #define SCHEDULER_A true
    #define SCHEDULER_B true
    #define SCHEDULER_C true
    #define SCHEDULER_D false
    #define SCHEDULER_A_SIZE 10
    #define SCHEDULER_B_SIZE 4
    #define SCHEDULER_C_SIZE 4
    #define SCHEDULER_D_SIZE 0
#endif

#if(!SCHEDULER)
    #define METRIC_GROUPS_ON 4 /*DEFINE THE NUMBER OF METRIC GROUPS ACTIVATED- 0-4 */
#endif

/** IF USING NBIOT DEFINE SEND SCHEDULER AS TRUE*/
#define SEND_SCHEDULER false
#if(SEND_SCHEDULER)
    #define SEND_SCHEDULER_SIZE 2
#endif

/**The device will restart after 5 error status. TODO: Consecutive errors */
#define STATUS_ERROR_TOLERANCE 5

//TODO:move this
#if !defined(INTERRUPT_DELAY)
    #define INTERRUPT_DELAY 0
#endif


