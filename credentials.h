/**
 ******************************************************************************
 * @file    credentials.h
 * @version 0.1.0
 * @brief   Holds the credentials for TTN configuration for OTAA and ABP
 ******************************************************************************
 */
 
/* Don't build if target != below 
 */
#if BOARD == EARHART_V1_0_0 || BOARD == DEVELOPMENT_BOARD_V1_1_0 /* #endif at EoF */

/*!
 * When set to 1 the application uses the Over-the-Air activation procedure LORAWAN_CONNECTION_OTAA
 * When set to 0 the application uses the Personalization activation procedure ABP
 */
#define OVER_THE_AIR_ACTIVATION false

#if(OVER_THE_AIR_ACTIVATION)
#define DEV_EUI     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
#define APP_EUI     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
#define APP_KEY     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
#endif /* #if(OVER_THE_AIR_ACTIVATION) */

#if(!OVER_THE_AIR_ACTIVATION)
#define DEV_ADD     0x00000000
#define NWKS_KEY    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
#define APPS_KEY    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00

#endif /*#if(OVER_THE_AIR_ACTIVATION) */

#endif /* #if BOARD == EARHART_V1_0_0 || BOARD == DEVELOPMENT_BOARD_V1_1_0  */