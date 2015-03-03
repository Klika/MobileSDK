//
//  SRConstEventTime.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
typedef enum _SRConstEventTime {
	EVENTTIME_NORMAL                = 0,
    EVENTTIME_UNKNOWN               = -1,
    EVENTTIME_BEFORE_MATCHSTART     = -2,
    EVENTTIME_DURING_HALF_TIME      = -3,
    EVENTTIME_AFTER_MATCH           = -4,
    EVENTTIME_PLAYER_NOT_ON_PITCH   = -5
} SRConstEventTime;

