//
//  SRConstEventFlag.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
typedef enum _SRConstEventFlag {
	EVENT_FLAG_POST			= 1 << 0,
	EVENT_FLAG_HEAD			= 1 << 1,
	EVENT_FLAG_PENALTY		= 1 << 2,
	EVENT_FLAG_OWN_GOAL		= 1 << 3,
	EVENT_FLAG_BAR			= 1 << 4,
	EVENT_FLAG_PENALTY_GOAL = 1 << 5,
	EVENT_FLAG_PENALTY_MISS = 1 << 6
} SRConstEventFlag;

