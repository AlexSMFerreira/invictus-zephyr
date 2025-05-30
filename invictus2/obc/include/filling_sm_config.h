#ifndef _FILLING_SM_CONFIG_H_
#define _FILLING_SM_CONFIG_H_

// NOTE: Pressures in bar
//       weights in kg
//       temperatures in ºC

// TODO: Set safe pause values
#define SAFE_PAUSE_TARGET_PRE_P  0xF00
#define SAFE_PAUSE_TRIGGER_PRE_P 0xBAD

#define FILLING_COPV_TARGET_PRE_P 200

#define PRE_PRESSURIZING_TARGET_MAIN_P  5
#define PRE_PRESSURIZING_TRIGGER_MAIN_P 7

#define FILLING_N20_TARGET_MAIN_P  35
#define FILLING_N20_TARGET_MAIN_W  7
#define FILLING_N20_TRIGGER_MAIN_P 38
#define FILLING_N20_TRIGGER_MAIN_T 2

#define POST_PRESSURIZING_TARGET_MAIN_P  50
#define POST_PRESSURIZING_TRIGGER_MAIN_P 55

#endif // _FILLING_SM_CONFIG_H_
