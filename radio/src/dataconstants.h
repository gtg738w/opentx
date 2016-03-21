/*
 * Copyright (C) OpenTX
 *
 * Based on code named
 *   th9x - http://code.google.com/p/th9x
 *   er9x - http://code.google.com/p/er9x
 *   gruvin9x - http://code.google.com/p/gruvin9x
 *
 * License GPLv2: http://www.gnu.org/licenses/gpl-2.0.html
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _DATACONSTANTS_H_
#define _DATACONSTANTS_H_

#if defined(EXPORT)
  #define LUA_EXPORT(...)                     LEXP(__VA_ARGS__)
  #define LUA_EXPORT_MULTIPLE(...)            LEXP_MULTIPLE(__VA_ARGS__)
  #define LUA_EXPORT_EXTRA(...)               LEXP_EXTRA(__VA_ARGS__)
#else
  #define LUA_EXPORT(...)
  #define LUA_EXPORT_MULTIPLE(...)
  #define LUA_EXPORT_EXTRA(...)
#endif

#define NUM_STICKS             4

#if defined(PCBHORUS)
  #define MAX_MODELS           60
  #define NUM_CHNOUT           32 // number of real output channels CH1-CH32
  #define MAX_FLIGHT_MODES     9
  #define MAX_MIXERS           64
  #define MAX_EXPOS            64
  #define NUM_LOGICAL_SWITCH   64 // number of custom switches
  #define NUM_CFN              64 // number of functions assigned to switches
  #define MAX_SCRIPTS          9
  #define MAX_INPUTS           32
  #define NUM_TRAINER          16
  #define NUM_POTS             7
  #define NUM_XPOTS            3
  #define MAX_SENSORS          32
  #define MAX_CUSTOM_SCREENS   5
#elif defined(PCBFLAMENCO)
  #define MAX_MODELS           60
  #define NUM_CHNOUT           32 // number of real output channels CH1-CH32
  #define MAX_FLIGHT_MODES     9
  #define MAX_MIXERS           64
  #define MAX_EXPOS            64
  #define NUM_LOGICAL_SWITCH   32 // number of custom switches
  #define NUM_CFN              64 // number of functions assigned to switches
  #define MAX_SCRIPTS          7
  #define MAX_INPUTS           32
  #define NUM_TRAINER          16
  #define NUM_POTS             3
  #define NUM_XPOTS            0
  #define MAX_SENSORS          32
#elif defined(PCBTARANIS)
  #define MAX_MODELS           60
  #define NUM_CHNOUT           32 // number of real output channels CH1-CH32
  #define MAX_FLIGHT_MODES     9
  #define MAX_MIXERS           64
  #define MAX_EXPOS            64
  #define NUM_LOGICAL_SWITCH   64 // number of logical switches
  #define NUM_CFN              64 // number of functions assigned to switches
  #define MAX_SCRIPTS          7
  #define MAX_INPUTS           32
  #define NUM_TRAINER          16
  #if defined(REV9E)
    #define NUM_POTS           8
    #define NUM_XPOTS          4
  #else
    #define NUM_POTS           5
    #define NUM_XPOTS          3
  #endif
  #define MAX_SENSORS          32
#elif defined(PCBSKY9X)
  #define MAX_MODELS           60
  #define NUM_CHNOUT           32 // number of real output channels CH1-CH32
  #define MAX_FLIGHT_MODES     9
  #define MAX_MIXERS           64
  #define MAX_EXPOS            32
  #define NUM_LOGICAL_SWITCH   64 // number of custom switches
  #define NUM_CFN              64 // number of functions assigned to switches
  #define NUM_TRAINER          16
  #define NUM_POTS             3
  #define NUM_XPOTS            0
  #define MAX_SENSORS          32
#elif defined(CPUM2560) || defined(CPUM2561)
  #define MAX_MODELS           30
  #define NUM_CHNOUT           16 // number of real output channels CH1-CH16
  #define MAX_FLIGHT_MODES     6
  #define MAX_MIXERS           32
  #define MAX_EXPOS            16
  #define NUM_LOGICAL_SWITCH   12 // number of custom switches
  #define NUM_CFN              24 // number of functions assigned to switches
  #define NUM_TRAINER          8
  #define NUM_POTS             3
  #define NUM_XPOTS            0
  #define MAX_SENSORS          0
#elif defined(CPUM128)
  #define MAX_MODELS           30
  #define NUM_CHNOUT           16 // number of real output channels CH1-CH16
  #define MAX_FLIGHT_MODES     5
  #define MAX_MIXERS           32
  #define MAX_EXPOS            14
  #define NUM_LOGICAL_SWITCH   12 // number of custom switches
  #define NUM_CFN              24 // number of functions assigned to switches
  #define NUM_TRAINER          8
  #define NUM_POTS             3
  #define NUM_XPOTS            0
  #define MAX_SENSORS          0
#else
  #define MAX_MODELS           16
  #define NUM_CHNOUT           16 // number of real output channels CH1-CH16
  #define MAX_FLIGHT_MODES     5
  #define MAX_MIXERS           32
  #define MAX_EXPOS            14
  #define NUM_LOGICAL_SWITCH   12 // number of custom switches
  #define NUM_CFN              16 // number of functions assigned to switches
  #define NUM_TRAINER          8
  #define NUM_POTS             3
  #define NUM_XPOTS            0
  #define MAX_SENSORS          0
#endif

#if defined(CPUARM)
  #define MAX_TIMERS           3
#else
  #define MAX_TIMERS           2
#endif

#define NUM_CYC                3
#define NUM_CAL_PPM            4

enum CurveType {
  CURVE_TYPE_STANDARD,
  CURVE_TYPE_CUSTOM,
  CURVE_TYPE_LAST = CURVE_TYPE_CUSTOM
};

#define MIN_POINTS             3
#define MAX_POINTS             17

#if defined(PCBHORUS)
  #define LEN_MODEL_NAME               15
  #define LEN_TIMER_NAME               8
  #define LEN_FLIGHT_MODE_NAME         10
  #define LEN_BITMAP_NAME              10
  #define LEN_EXPOMIX_NAME             6
  #define LEN_CHANNEL_NAME             6
  #define LEN_INPUT_NAME               4
  #define LEN_CURVE_NAME               3
  #define LEN_CFN_NAME                 10
  #define MAX_CURVES                   32
  #define NUM_POINTS                   512
#elif defined(PCBFLAMENCO)
  #define LEN_MODEL_NAME               12
  #define LEN_TIMER_NAME               8
  #define LEN_FLIGHT_MODE_NAME         10
  #define LEN_EXPOMIX_NAME             6
  #define LEN_CHANNEL_NAME             6
  #define LEN_INPUT_NAME               4
  #define LEN_CURVE_NAME               3
  #define LEN_CFN_NAME                 8
  #define MAX_CURVES                   32
  #define NUM_POINTS                   512
#elif defined(PCBTARANIS)
  #define LEN_MODEL_NAME               12
  #define LEN_TIMER_NAME               8
  #define LEN_FLIGHT_MODE_NAME         10
  #define LEN_BITMAP_NAME              10
  #define LEN_EXPOMIX_NAME             8
  #define LEN_CHANNEL_NAME             6
  #define LEN_INPUT_NAME               4
  #define LEN_CURVE_NAME               3
  #define LEN_CFN_NAME                 8
  #define MAX_CURVES                   32
  #define NUM_POINTS                   512
#elif defined(CPUARM)
  #define LEN_MODEL_NAME               10
  #define LEN_TIMER_NAME               3
  #define LEN_FLIGHT_MODE_NAME         6
  #define LEN_EXPOMIX_NAME             6
  #define LEN_CFN_NAME                 6
  #define MAX_CURVES                   16
  #define NUM_POINTS                   512
#else
  #define LEN_MODEL_NAME               10
  #define LEN_FLIGHT_MODE_NAME         6
  #define MAX_CURVES                   8
  #define NUM_POINTS                   (112-MAX_CURVES)
#endif

#if defined(PCBTARANIS) || defined(PCBSKY9X) || defined(PCBHORUS)
  #define NUM_MODULES                  2
#else
  #define NUM_MODULES                  1
#endif

#if defined(PCBFLAMENCO)
  #define NUM_SWITCHES                 5
#elif defined(PCBTARANIS) && defined(REV9E)
  #define NUM_SWITCHES                 18 // yes, it's a lot!
#elif defined(PCBTARANIS) || defined(PCBHORUS)
  #define NUM_SWITCHES                 8
#else
  #define NUM_SWITCHES                 7
#endif

#define XPOTS_MULTIPOS_COUNT           6

#if defined(PCBTARANIS)
  #define MAX_ROTARY_ENCODERS          0
  #define NUM_ROTARY_ENCODERS          0
#elif defined(REVX)
  #define MAX_ROTARY_ENCODERS          1
  #define NUM_ROTARY_ENCODERS          0
#elif defined(PCBSKY9X)
  #define MAX_ROTARY_ENCODERS          1
  #define NUM_ROTARY_ENCODERS          1
#elif defined(CPUM2560)
  #define MAX_ROTARY_ENCODERS          2
  #define NUM_ROTARY_ENCODERS          2
#else
  #define MAX_ROTARY_ENCODERS          0
  #define NUM_ROTARY_ENCODERS          0
#endif

#if defined(COLORLCD)
enum MainViews {
  VIEW_BLANK,
  VIEW_TIMERS_ALTITUDE,
  VIEW_CHANNELS,
  VIEW_TELEM1,
  VIEW_TELEM2,
  VIEW_TELEM3,
  VIEW_TELEM4,
  VIEW_COUNT
};
#elif defined(PCBTARANIS)
enum MainViews {
  VIEW_TIMERS,
  VIEW_INPUTS,
  VIEW_SWITCHES,
  VIEW_COUNT
};
#else
enum MainViews {
  VIEW_OUTPUTS_VALUES,
  VIEW_OUTPUTS_BARS,
  VIEW_INPUTS,
  VIEW_TIMER2,
  VIEW_COUNT
};
#endif

enum BeeperMode {
  e_mode_quiet = -2,
  e_mode_alarms,
  e_mode_nokeys,
  e_mode_all
};

#if defined(PCBFLAMENCO)
  enum ModuleIndex {
    EXTERNAL_MODULE,
    TRAINER_MODULE,
  };
  enum TrainerMode {
    TRAINER_MODE_MASTER,
    TRAINER_MODE_SLAVE
  };
#elif defined(PCBTARANIS) || defined(PCBHORUS)
  enum ModuleIndex {
    INTERNAL_MODULE,
    EXTERNAL_MODULE,
    TRAINER_MODULE
  };
  enum TrainerMode {
    TRAINER_MODE_MASTER_TRAINER_JACK,
    TRAINER_MODE_SLAVE,
    TRAINER_MODE_MASTER_SBUS_EXTERNAL_MODULE,
    TRAINER_MODE_MASTER_CPPM_EXTERNAL_MODULE,
    TRAINER_MODE_MASTER_BATTERY_COMPARTMENT,
  };
#elif defined(PCBSKY9X)
  enum ModuleIndex {
    EXTERNAL_MODULE,
    EXTRA_MODULE,
    TRAINER_MODULE
  };
#endif

enum UartModes {
#if defined(CLI) || defined(DEBUG)
  UART_MODE_DEBUG,
#else
  UART_MODE_NONE,
#endif
  UART_MODE_TELEMETRY_MIRROR,
  UART_MODE_TELEMETRY,
  UART_MODE_SBUS_TRAINER,
  // UART_MODE_CPPM_TRAINER,
  UART_MODE_COUNT,
  UART_MODE_MAX = UART_MODE_COUNT-1
};

#if defined(PCBHORUS)
  #define LEN_SWITCH_NAME              3
  #define LEN_ANA_NAME                 3
  #define LEN_MODEL_FILENAME           16
  #define LEN_BLUETOOTH_NAME           10
#elif defined(PCBFLAMENCO)
  #define LEN_SWITCH_NAME              3
  #define LEN_ANA_NAME                 3
#elif defined(PCBTARANIS)
  #define LEN_SWITCH_NAME              3
  #define LEN_ANA_NAME                 3
  #define LEN_BLUETOOTH_NAME           10
#endif

#if defined(CPUARM)
#define TELEM_LABEL_LEN           4
enum TelemetryUnit {
  UNIT_RAW,
  UNIT_VOLTS,
  UNIT_AMPS,
  UNIT_MILLIAMPS,
  UNIT_KTS,
  UNIT_METERS_PER_SECOND,
  UNIT_FEET_PER_SECOND,
  UNIT_KMH,
  UNIT_MPH,
  UNIT_METERS,
  UNIT_FEET,
  UNIT_CELSIUS,
  UNIT_FAHRENHEIT,
  UNIT_PERCENT,
  UNIT_MAH,
  UNIT_WATTS,
  UNIT_DB,
  UNIT_RPMS,
  UNIT_G,
  UNIT_DEGREE,
  UNIT_MILLILITERS,
  UNIT_FLOZ,
  UNIT_HOURS,
  UNIT_MINUTES,
  UNIT_SECONDS,
  // FrSky format used for these fields, could be another format in the future
  UNIT_FIRST_VIRTUAL,
  UNIT_CELLS = UNIT_FIRST_VIRTUAL,
  UNIT_DATETIME,
  UNIT_GPS,
  UNIT_GPS_LONGITUDE,
  UNIT_GPS_LATITUDE,
  UNIT_GPS_LONGITUDE_EW,
  UNIT_GPS_LATITUDE_NS,
  UNIT_DATETIME_YEAR,
  UNIT_DATETIME_DAY_MONTH,
  UNIT_DATETIME_HOUR_MIN,
  UNIT_DATETIME_SEC
};
#define UNIT_MAX UNIT_FLOZ
#define UNIT_DIST UNIT_METERS
#define UNIT_TEMPERATURE UNIT_CELSIUS
#define UNIT_SPEED UNIT_KMH
#else
#if !defined(CPUARM)
enum TelemetrySource {
  TELEM_NONE,
  TELEM_TX_VOLTAGE,
  TELEM_TIMER1,
  TELEM_TIMER2,
  TELEM_TIMER_MAX=TELEM_TIMER2,
  TELEM_RSSI_TX,
  TELEM_RSSI_RX,
  TELEM_A_FIRST,
  TELEM_A1=TELEM_A_FIRST,
  TELEM_A2,
  TELEM_A_LAST=TELEM_A2,
  TELEM_ALT,
  TELEM_RPM,
  TELEM_FUEL,
  TELEM_T1,
  TELEM_T2,
  TELEM_SPEED,
  TELEM_DIST,
  TELEM_GPSALT,
  TELEM_CELL,
  TELEM_CELLS_SUM,
  TELEM_VFAS,
  TELEM_CURRENT,
  TELEM_CONSUMPTION,
  TELEM_POWER,
  TELEM_ACCx,
  TELEM_ACCy,
  TELEM_ACCz,
  TELEM_HDG,
  TELEM_VSPEED,
  TELEM_ASPEED,
  TELEM_DTE,
  TELEM_MIN_A_FIRST,
  TELEM_MIN_A1=TELEM_MIN_A_FIRST,
  TELEM_MIN_A2,
  TELEM_MIN_A_LAST=TELEM_MIN_A2,
  TELEM_MIN_ALT,
  TELEM_MAX_ALT,
  TELEM_MAX_RPM,
  TELEM_MAX_T1,
  TELEM_MAX_T2,
  TELEM_MAX_SPEED,
  TELEM_MAX_DIST,
  TELEM_MAX_ASPEED,
  TELEM_MIN_CELL,
  TELEM_MIN_CELLS_SUM,
  TELEM_MIN_VFAS,
  TELEM_MAX_CURRENT,
  TELEM_MAX_POWER,
  TELEM_ACC,
  TELEM_GPS_TIME,
  TELEM_CSW_MAX = TELEM_MAX_POWER,
  TELEM_NOUSR_MAX = TELEM_A2,
#if defined(FRSKY)
  TELEM_DISPLAY_MAX = TELEM_MAX_POWER,
#else
  TELEM_DISPLAY_MAX = TELEM_TIMER2, // because used also in PlayValue
#endif
  TELEM_STATUS_MAX = TELEM_GPS_TIME,
  TELEM_FIRST_STREAMED_VALUE = TELEM_RSSI_TX,
};

#if defined(FRSKY_HUB)
  #define NUM_TELEMETRY      TELEM_CSW_MAX
#elif defined(WS_HOW_HIGH)
  #define NUM_TELEMETRY      TELEM_ALT
#elif defined(FRSKY)
  #define NUM_TELEMETRY      TELEM_A2
#elif defined(MAVLINK)
  #define NUM_TELEMETRY      4
#else
  #define NUM_TELEMETRY      TELEM_TIMER2
#endif

#endif

enum TelemetryUnit {
  UNIT_VOLTS,
  UNIT_AMPS,
  UNIT_METERS_PER_SECOND,
  UNIT_RAW,
  UNIT_SPEED,
  UNIT_DIST,
  UNIT_TEMPERATURE,
  UNIT_PERCENT,
  UNIT_MILLIAMPS,
  UNIT_A1A2_MAX = UNIT_MILLIAMPS,
  UNIT_MAH,
  UNIT_WATTS,
  UNIT_DB,
  UNIT_FEET,
  UNIT_KTS,
  UNIT_HOURS,
  UNIT_MINUTES,
  UNIT_SECONDS,
  UNIT_RPMS,
  UNIT_G,
  UNIT_HDG,
};
#endif

#if defined(PCBTARANIS)
  #define NUM_LINE_ITEMS 3
#else
  #define NUM_LINE_ITEMS 2
#endif

#if defined(PCBTARANIS)
#define MAX_TELEM_SCRIPT_INPUTS  8
#endif

#if defined(CPUARM)
enum TelemetryScreenType {
  TELEMETRY_SCREEN_TYPE_NONE,
  TELEMETRY_SCREEN_TYPE_VALUES,
  TELEMETRY_SCREEN_TYPE_GAUGES,
#if defined(LUA)
  TELEMETRY_SCREEN_TYPE_SCRIPT,
  TELEMETRY_SCREEN_TYPE_MAX = TELEMETRY_SCREEN_TYPE_SCRIPT
#else
  TELEMETRY_SCREEN_TYPE_MAX = TELEMETRY_SCREEN_TYPE_GAUGES
#endif
};
#define MAX_TELEMETRY_SCREENS 4
#define TELEMETRY_SCREEN_TYPE(screenIndex) TelemetryScreenType((g_model.frsky.screensType >> (2*(screenIndex))) & 0x03)
#define IS_BARS_SCREEN(screenIndex)        (TELEMETRY_SCREEN_TYPE(screenIndex) == TELEMETRY_SCREEN_TYPE_GAUGES)
#define MIN_BLADES -1   // 1 blade
#define MAX_BLADES 126  // 128 blades
#else
#define MAX_FRSKY_A_CHANNELS 2
#define MAX_TELEMETRY_SCREENS 2
#define IS_BARS_SCREEN(screenIndex)    (g_model.frsky.screensType & (1<<(screenIndex)))
#define MIN_BLADES 0 // 2 blades
#define MAX_BLADES 3 // 5 blades
#endif

#define FAILSAFE_CHANNEL_HOLD          2000
#define FAILSAFE_CHANNEL_NOPULSE       2001

#define LEN_SCRIPT_FILENAME            8
#define LEN_SCRIPT_NAME                8
#define MAX_SCRIPT_INPUTS              8
#define MAX_SCRIPT_OUTPUTS             6

enum PotsWarnMode {
  POTS_WARN_OFF,
  POTS_WARN_MANUAL,
  POTS_WARN_AUTO
};

#if !defined(PCBSTD)
  #define LEN_GVAR_NAME                3
  #define GVAR_MAX                     1024
  #define GVAR_MIN                     -GVAR_MAX
#endif

#define RESERVE_RANGE_FOR_GVARS        10
// even we do not spend space in EEPROM for 10 GVARS, we reserve the space inside the range of values, like offset, weight, etc.

#if defined(PCBSTD) && defined(GVARS)
  #define MAX_GVARS 5
#elif defined(PCBSTD)
  #define MAX_GVARS 0
#else
  #if defined(CPUARM)
    #define MAX_GVARS 9
  #else
    #define MAX_GVARS 5
  #endif
#endif

enum SwitchSources {
  SWSRC_NONE = 0,

  SWSRC_FIRST_SWITCH,

#if defined(PCBFLAMENCO)
  SWSRC_SA0 = SWSRC_FIRST_SWITCH,
  SWSRC_SA1,
  SWSRC_SA2,
  SWSRC_SB0,
  SWSRC_SB2,
  SWSRC_SC0,
  SWSRC_SC1,
  SWSRC_SC2,
  SWSRC_SC3,
  SWSRC_SC4,
  SWSRC_SC5,
  SWSRC_SE0,
  SWSRC_SE2,
  SWSRC_SF0,
  SWSRC_SF1,
  SWSRC_SF2,
  SWSRC_LAST_SWITCH = SWSRC_SF2,
#elif defined(PCBTARANIS) || defined(PCBHORUS)
  SWSRC_SA0 = SWSRC_FIRST_SWITCH,
  SWSRC_SA1,
  SWSRC_SA2,
  SWSRC_SB0,
  SWSRC_SB1,
  SWSRC_SB2,
  SWSRC_SC0,
  SWSRC_SC1,
  SWSRC_SC2,
  SWSRC_SD0,
  SWSRC_SD1,
  SWSRC_SD2,
  SWSRC_SE0,
  SWSRC_SE1,
  SWSRC_SE2,
  SWSRC_SF0,
  SWSRC_SF1,
  SWSRC_SF2,
  SWSRC_SG0,
  SWSRC_SG1,
  SWSRC_SG2,
  SWSRC_SH0,
  SWSRC_SH1,
  SWSRC_SH2,
  SWSRC_TRAINER = SWSRC_SH2,
#if defined(REV9E)
  SWSRC_SI0,
  SWSRC_SI1,
  SWSRC_SI2,
  SWSRC_SJ0,
  SWSRC_SJ1,
  SWSRC_SJ2,
  SWSRC_SK0,
  SWSRC_SK1,
  SWSRC_SK2,
  SWSRC_SL0,
  SWSRC_SL1,
  SWSRC_SL2,
  SWSRC_SM0,
  SWSRC_SM1,
  SWSRC_SM2,
  SWSRC_SN0,
  SWSRC_SN1,
  SWSRC_SN2,
  SWSRC_SO0,
  SWSRC_SO1,
  SWSRC_SO2,
  SWSRC_SP0,
  SWSRC_SP1,
  SWSRC_SP2,
  SWSRC_SQ0,
  SWSRC_SQ1,
  SWSRC_SQ2,
  SWSRC_SR0,
  SWSRC_SR1,
  SWSRC_SR2,
  SWSRC_LAST_SWITCH = SWSRC_SR2,
#else
  SWSRC_LAST_SWITCH = SWSRC_SH2,
#endif
#else
  SWSRC_ID0 = SWSRC_FIRST_SWITCH,
  SWSRC_ID1,
  SWSRC_ID2,
  SWSRC_THR,
  SWSRC_RUD,
  SWSRC_ELE,
  SWSRC_AIL,
  SWSRC_GEA,
  SWSRC_TRN,
  SWSRC_TRAINER = SWSRC_TRN,
  SWSRC_LAST_SWITCH = SWSRC_TRN,
#endif

#if NUM_XPOTS > 0
  SWSRC_FIRST_MULTIPOS_SWITCH,
  SWSRC_LAST_MULTIPOS_SWITCH = SWSRC_FIRST_MULTIPOS_SWITCH + (NUM_XPOTS*XPOTS_MULTIPOS_COUNT) - 1,
#endif

  SWSRC_FIRST_TRIM,
  SWSRC_TrimRudLeft = SWSRC_FIRST_TRIM,
  SWSRC_TrimRudRight,
  SWSRC_TrimEleDown,
  SWSRC_TrimEleUp,
  SWSRC_TrimThrDown,
  SWSRC_TrimThrUp,
  SWSRC_TrimAilLeft,
  SWSRC_TrimAilRight,
  SWSRC_LAST_TRIM = SWSRC_TrimAilRight,

#if defined(PCBSKY9X)
  SWSRC_REa,
#elif defined(CPUM2560)
  SWSRC_REa,
  SWSRC_REb,
#endif

  SWSRC_FIRST_LOGICAL_SWITCH,
  SWSRC_SW1 = SWSRC_FIRST_LOGICAL_SWITCH,
  SWSRC_SW2,
  SWSRC_SW3,
  SWSRC_SW4,
  SWSRC_SW5,
  SWSRC_SW6,
  SWSRC_SW7,
  SWSRC_SW8,
  SWSRC_SW9,
  SWSRC_SWA,
  SWSRC_SWB,
  SWSRC_SWC,
  SWSRC_LAST_LOGICAL_SWITCH = SWSRC_FIRST_LOGICAL_SWITCH+NUM_LOGICAL_SWITCH-1,

  SWSRC_ON,
  SWSRC_ONE,

#if defined(CPUARM)
  SWSRC_FIRST_FLIGHT_MODE,
  SWSRC_LAST_FLIGHT_MODE = SWSRC_FIRST_FLIGHT_MODE+MAX_FLIGHT_MODES-1,

  SWSRC_TELEMETRY_STREAMING,
  SWSRC_FIRST_SENSOR,
  SWSRC_LAST_SENSOR = SWSRC_FIRST_SENSOR+MAX_SENSORS-1,
#endif

  SWSRC_COUNT,

  SWSRC_OFF = -SWSRC_ON,

  SWSRC_LAST = SWSRC_COUNT-1,
  SWSRC_FIRST = -SWSRC_LAST,

#if defined(CPUARM)
  SWSRC_LAST_IN_LOGICAL_SWITCHES = SWSRC_COUNT-1,
  SWSRC_LAST_IN_MIXES = SWSRC_COUNT-1,
#else
  SWSRC_LAST_IN_LOGICAL_SWITCHES = SWSRC_LAST_LOGICAL_SWITCH,
  SWSRC_LAST_IN_MIXES = SWSRC_LAST_LOGICAL_SWITCH,
#endif

  SWSRC_FIRST_IN_LOGICAL_SWITCHES = -SWSRC_LAST_IN_LOGICAL_SWITCHES,
  SWSRC_FIRST_IN_MIXES = -SWSRC_LAST_IN_MIXES,

#if defined(CPUARM)
  SWSRC_INVERT = SWSRC_COUNT+1,
#endif
};

enum MixSources {
  MIXSRC_NONE,

#if defined(VIRTUALINPUTS)
  MIXSRC_FIRST_INPUT,             LUA_EXPORT_MULTIPLE("input", "Input [I%d]", MAX_INPUTS)
  MIXSRC_LAST_INPUT = MIXSRC_FIRST_INPUT+MAX_INPUTS-1,

  MIXSRC_FIRST_LUA,
  MIXSRC_LAST_LUA = MIXSRC_FIRST_LUA+(MAX_SCRIPTS*MAX_SCRIPT_OUTPUTS)-1,
#endif

  MIXSRC_FIRST_STICK,
  MIXSRC_Rud = MIXSRC_FIRST_STICK,      LUA_EXPORT("rud", "Rudder")
  MIXSRC_Ele,                           LUA_EXPORT("ele", "Elevator")
  MIXSRC_Thr,                           LUA_EXPORT("thr", "Throttle")
  MIXSRC_Ail,                           LUA_EXPORT("ail", "Aileron")

  MIXSRC_FIRST_POT,
#if defined(PCBHORUS)
  MIXSRC_S1 = MIXSRC_FIRST_POT,         LUA_EXPORT("s1", "Potentiometer S1")
  MIXSRC_6POS,                          LUA_EXPORT("6pos", "Multipos Switch")
  MIXSRC_S2,                            LUA_EXPORT("s2", "Potentiometer S2")
  MIXSRC_FIRST_SLIDER,
  MIXSRC_S3 = MIXSRC_FIRST_SLIDER,      LUA_EXPORT("s3", "Slider S3")
  MIXSRC_S4,                            LUA_EXPORT("s4", "Slider S4")
  MIXSRC_LS,                            LUA_EXPORT("ls", "Left rear slider")
  MIXSRC_RS,                            LUA_EXPORT("rs", "Right rear slider")
  MIXSRC_LAST_POT = MIXSRC_RS,
#elif defined(PCBFLAMENCO)
  MIXSRC_POT1 = MIXSRC_FIRST_POT,       LUA_EXPORT("sd", "Potentiometer D")
  MIXSRC_SLIDER1,                       LUA_EXPORT("ls", "Left slider")
  MIXSRC_SLIDER2,                       LUA_EXPORT("rs", "Right slider")
  MIXSRC_LAST_POT = MIXSRC_SLIDER2,
#elif defined(PCBTARANIS)
  MIXSRC_POT1 = MIXSRC_FIRST_POT,       LUA_EXPORT("s1", "Potentiometer 1")
  MIXSRC_POT2,                          LUA_EXPORT("s2", "Potentiometer 2")
  MIXSRC_POT3,                          LUA_EXPORT("s3", "Potentiometer 3")
  #if defined(REV9E)
    MIXSRC_POT4,                        LUA_EXPORT("s4", "Potentiometer 4 (X9E only)")
  #endif
  MIXSRC_FIRST_SLIDER,
  MIXSRC_SLIDER1 = MIXSRC_FIRST_SLIDER, LUA_EXPORT("ls", "Left slider")
  MIXSRC_SLIDER2,                       LUA_EXPORT("rs", "Right slider")
  #if defined(REV9E)
    MIXSRC_SLIDER3,                     LUA_EXPORT("lcs", "Left center slider (X9E only)")
    MIXSRC_SLIDER4,                     LUA_EXPORT("rcs", "Right center slider (X9E only)")
    MIXSRC_LAST_POT = MIXSRC_SLIDER4,
  #else
    MIXSRC_LAST_POT = MIXSRC_SLIDER2,
  #endif
#else
  MIXSRC_P1 = MIXSRC_FIRST_POT,
  MIXSRC_P2,
    MIXSRC_P3,
    MIXSRC_LAST_POT = MIXSRC_P3,
#endif

#if defined(PCBSKY9X)
  MIXSRC_REa,
  MIXSRC_LAST_ROTARY_ENCODER = MIXSRC_REa,
#elif defined(CPUM2560)
  MIXSRC_REa,
  MIXSRC_REb,
  #if ROTARY_ENCODERS > 2
    MIXSRC_REc,
    MIXSRC_REd,
    MIXSRC_LAST_ROTARY_ENCODER = MIXSRC_REd,
  #else
    MIXSRC_LAST_ROTARY_ENCODER = MIXSRC_REb,
  #endif
#endif

  MIXSRC_MAX,

  MIXSRC_FIRST_HELI,
  MIXSRC_CYC1 = MIXSRC_FIRST_HELI,   LUA_EXPORT("cyc1", "Cyclic 1")
  MIXSRC_CYC2,                       LUA_EXPORT("cyc2", "Cyclic 2")
  MIXSRC_CYC3,                       LUA_EXPORT("cyc3", "Cyclic 3")

  MIXSRC_FIRST_TRIM,
  MIXSRC_TrimRud = MIXSRC_FIRST_TRIM,  LUA_EXPORT("trim-rud", "Rudder trim")
  MIXSRC_TrimEle,                      LUA_EXPORT("trim-ele", "Elevator trim")
  MIXSRC_TrimThr,                      LUA_EXPORT("trim-thr", "Throttle trim")
  MIXSRC_TrimAil,                      LUA_EXPORT("trim-ail", "Aileron trim")
  MIXSRC_LAST_TRIM = MIXSRC_TrimAil,

  MIXSRC_FIRST_SWITCH,

#if defined(PCBFLAMENCO)
  MIXSRC_SA = MIXSRC_FIRST_SWITCH,  LUA_EXPORT("sa", "Switch A")
  MIXSRC_SB,                        LUA_EXPORT("sb", "Switch B")
  MIXSRC_SC,                        LUA_EXPORT("sc", "Switch C")
  MIXSRC_SE,                        LUA_EXPORT("se", "Switch E")
  MIXSRC_SF,                        LUA_EXPORT("sf", "Switch F")
  MIXSRC_LAST_SWITCH = MIXSRC_SF,
#elif defined(PCBTARANIS) || defined(PCBHORUS)
  MIXSRC_SA = MIXSRC_FIRST_SWITCH,  LUA_EXPORT("sa", "Switch A")
  MIXSRC_SB,                        LUA_EXPORT("sb", "Switch B")
  MIXSRC_SC,                        LUA_EXPORT("sc", "Switch C")
  MIXSRC_SD,                        LUA_EXPORT("sd", "Switch D")
  MIXSRC_SE,                        LUA_EXPORT("se", "Switch E")
  MIXSRC_SF,                        LUA_EXPORT("sf", "Switch F")
  MIXSRC_SG,                        LUA_EXPORT("sg", "Switch G")
  MIXSRC_SH,                        LUA_EXPORT("sh", "Switch H")
#if defined(REV9E)
  MIXSRC_SI,                        LUA_EXPORT("si", "Switch I (X9E only)")
  MIXSRC_SJ,                        LUA_EXPORT("sj", "Switch J (X9E only)")
  MIXSRC_SK,                        LUA_EXPORT("sk", "Switch K (X9E only)")
  MIXSRC_SL,                        LUA_EXPORT("sl", "Switch L (X9E only)")
  MIXSRC_SM,                        LUA_EXPORT("sm", "Switch M (X9E only)")
  MIXSRC_SN,                        LUA_EXPORT("sn", "Switch N (X9E only)")
  MIXSRC_SO,                        LUA_EXPORT("so", "Switch O (X9E only)")
  MIXSRC_SP,                        LUA_EXPORT("sp", "Switch P (X9E only)")
  MIXSRC_SQ,                        LUA_EXPORT("sq", "Switch Q (X9E only)")
  MIXSRC_SR,                        LUA_EXPORT("sr", "Switch R (X9E only)")
  MIXSRC_LAST_SWITCH = MIXSRC_SR,
#else
  MIXSRC_LAST_SWITCH = MIXSRC_SH,
#endif
#else
  MIXSRC_3POS = MIXSRC_FIRST_SWITCH,
  MIXSRC_THR,
  MIXSRC_RUD,
  MIXSRC_ELE,
  MIXSRC_AIL,
  MIXSRC_GEA,
  MIXSRC_TRN,
  MIXSRC_LAST_SWITCH = MIXSRC_TRN,
#endif
  MIXSRC_FIRST_LOGICAL_SWITCH,
  MIXSRC_SW1 = MIXSRC_FIRST_LOGICAL_SWITCH, LUA_EXPORT_MULTIPLE("ls", "Logical switch L%d", NUM_LOGICAL_SWITCH)
  MIXSRC_SW9 = MIXSRC_SW1 + 8,
  MIXSRC_SWA,
  MIXSRC_SWB,
  MIXSRC_SWC,
  MIXSRC_LAST_LOGICAL_SWITCH = MIXSRC_FIRST_LOGICAL_SWITCH+NUM_LOGICAL_SWITCH-1,

  MIXSRC_FIRST_TRAINER,                     LUA_EXPORT_MULTIPLE("trn", "Trainer input %d", NUM_TRAINER)
  MIXSRC_LAST_TRAINER = MIXSRC_FIRST_TRAINER+NUM_TRAINER-1,

  MIXSRC_FIRST_CH,
  MIXSRC_CH1 = MIXSRC_FIRST_CH,             LUA_EXPORT_MULTIPLE("ch", "Channel CH%d", NUM_CHNOUT)
  MIXSRC_CH2,
  MIXSRC_CH3,
  MIXSRC_CH4,
  MIXSRC_CH5,
  MIXSRC_CH6,
  MIXSRC_CH7,
  MIXSRC_CH8,
  MIXSRC_CH9,
  MIXSRC_CH10,
  MIXSRC_CH11,
  MIXSRC_CH12,
  MIXSRC_CH13,
  MIXSRC_CH14,
  MIXSRC_CH15,
  MIXSRC_CH16,
  MIXSRC_LAST_CH = MIXSRC_CH1+NUM_CHNOUT-1,

  MIXSRC_FIRST_GVAR,
  MIXSRC_GVAR1 = MIXSRC_FIRST_GVAR,         LUA_EXPORT_MULTIPLE("gvar", "Global variable %d", MAX_GVARS)
  MIXSRC_LAST_GVAR = MIXSRC_FIRST_GVAR+MAX_GVARS-1,

#if defined(CPUARM)
  MIXSRC_TX_VOLTAGE,                        LUA_EXPORT("tx-voltage", "Transmitter battery voltage [volts]")
  MIXSRC_TX_TIME,                           LUA_EXPORT("clock", "RTC clock [minutes from midnight]")
  MIXSRC_RESERVE1,
  MIXSRC_RESERVE2,
  MIXSRC_RESERVE3,
  MIXSRC_RESERVE4,
  MIXSRC_RESERVE5,
  MIXSRC_FIRST_TIMER,
  MIXSRC_TIMER1 = MIXSRC_FIRST_TIMER,       LUA_EXPORT("timer1", "Timer 1 value [seconds]")
  MIXSRC_TIMER2,                            LUA_EXPORT("timer2", "Timer 2 value [seconds]")
  MIXSRC_TIMER3,                            LUA_EXPORT("timer3", "Timer 3 value [seconds]")
  MIXSRC_LAST_TIMER = MIXSRC_TIMER3,
#endif

  MIXSRC_FIRST_TELEM,
#if defined(CPUARM)
  MIXSRC_LAST_TELEM = MIXSRC_FIRST_TELEM+3*MAX_SENSORS-1
#else
  MIXSRC_LAST_TELEM = MIXSRC_FIRST_TELEM+NUM_TELEMETRY-1
#endif
};

#define MIXSRC_FIRST   (MIXSRC_NONE+1)
#define MIXSRC_LAST    MIXSRC_LAST_CH
#define INPUTSRC_FIRST MIXSRC_Rud
#define INPUTSRC_LAST  MIXSRC_LAST_TELEM

enum BacklightMode {
  e_backlight_mode_off  = 0,
  e_backlight_mode_keys = 1,
  e_backlight_mode_sticks = 2,
  e_backlight_mode_all = e_backlight_mode_keys+e_backlight_mode_sticks,
  e_backlight_mode_on
};

enum Functions {
  // first the functions which need a checkbox
  FUNC_OVERRIDE_CHANNEL,
  FUNC_TRAINER,
  FUNC_INSTANT_TRIM,
  FUNC_RESET,
#if defined(CPUARM)
  FUNC_SET_TIMER,
#endif
  FUNC_ADJUST_GVAR,
#if defined(CPUARM)
  FUNC_VOLUME,
  FUNC_SET_FAILSAFE,
  FUNC_RANGECHECK,
  FUNC_BIND,
#endif
  // then the other functions
  FUNC_FIRST_WITHOUT_ENABLE,
  FUNC_PLAY_SOUND = FUNC_FIRST_WITHOUT_ENABLE,
  FUNC_PLAY_TRACK,
#if !defined(CPUARM)
  FUNC_PLAY_BOTH,
#endif
  FUNC_PLAY_VALUE,
#if defined(CPUARM)
  FUNC_RESERVE4,
  FUNC_PLAY_SCRIPT,
  FUNC_RESERVE5,
  FUNC_BACKGND_MUSIC,
  FUNC_BACKGND_MUSIC_PAUSE,
#endif
  FUNC_VARIO,
  FUNC_HAPTIC,
#if !defined(PCBSTD)
  FUNC_LOGS,
#endif
  FUNC_BACKLIGHT,
#if defined(PCBTARANIS)
  FUNC_SCREENSHOT,
#endif
#if defined(DEBUG)
  FUNC_TEST, // should remain the last before MAX as not added in companion9x
#endif
  FUNC_MAX
};

enum TimerModes {
  TMRMODE_NONE,
  TMRMODE_ABS,
  TMRMODE_THR,
  TMRMODE_THR_REL,
  TMRMODE_THR_TRG,
  TMRMODE_COUNT
};

enum CountDownModes {
  COUNTDOWN_SILENT,
  COUNTDOWN_BEEPS,
  COUNTDOWN_VOICE,
#if defined(CPUARM) && defined(HAPTIC)
  COUNTDOWN_HAPTIC,
#endif
  COUNTDOWN_COUNT
};

enum ResetFunctionParam {
  FUNC_RESET_TIMER1,
  FUNC_RESET_TIMER2,
#if defined(CPUARM)
  FUNC_RESET_TIMER3,
#endif
  FUNC_RESET_FLIGHT,
#if defined(FRSKY)
  FUNC_RESET_TELEMETRY,
#endif
#if ROTARY_ENCODERS > 0
  FUNC_RESET_ROTENC1,
#endif
#if ROTARY_ENCODERS > 1
  FUNC_RESET_ROTENC2,
#endif
#if defined(CPUARM)
  FUNC_RESET_PARAM_FIRST_TELEM,
  FUNC_RESET_PARAM_LAST_TELEM = FUNC_RESET_PARAM_FIRST_TELEM + MAX_SENSORS,
#endif
  FUNC_RESET_PARAMS_COUNT,
  FUNC_RESET_PARAM_LAST = FUNC_RESET_PARAMS_COUNT-1,
};

enum AdjustGvarFunctionParam {
  FUNC_ADJUST_GVAR_CONSTANT,
  FUNC_ADJUST_GVAR_SOURCE,
  FUNC_ADJUST_GVAR_GVAR,
  FUNC_ADJUST_GVAR_INCDEC,
};

#endif // _DATACONSTANTS_H_