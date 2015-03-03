//
//  SRConstLoadAdditionalDataType.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

typedef enum _SRConstLoadAdditionalDataType {
	SR_LOAD_ADDITIONAL_DATA_SEASON                  = 1 << 0,
	SR_LOAD_ADDITIONAL_DATA_LIVE_TABLE              = 1 << 1,
    SR_LOAD_ADDITIONAL_DATA_FIXTURES                = 1 << 2,
    SR_LOAD_ADDITIONAL_DATA_STATISTICS              = 1 << 3,
    SR_LOAD_ADDITIONAL_DATA_COMMENTS                = 1 << 4,
    SR_LOAD_ADDITIONAL_DATA_MATCH_INFO              = 1 << 5,
    SR_LOAD_ADDITIONAL_DATA_EVENTS                  = 1 << 6,
    SR_LOAD_ADDITIONAL_DATA_ODDS                    = 1 << 7,
    SR_LOAD_ADDITIONAL_DATA_LINEUPS                 = 1 << 8,
    SR_LOAD_ADDITIONAL_DATA_EVENT_UPDATE            = 1 << 9,
    SR_LOAD_ADDITIONAL_DATA_TEAM_INFO               = 1 << 10,
    SR_LOAD_ADDITIONAL_DATA_PLAYER_INFO             = 1 << 11,
    SR_LOAD_ADDITIONAL_DATA_TEAM_SQUAD              = 1 << 12,
    SR_LOAD_ADDITIONAL_DATA_CUP_ROSTER              = 1 << 13,
    SR_LOAD_ADDITIONAL_DATA_SEASON_TOP_ASSISTS      = 1 << 14,
    SR_LOAD_ADDITIONAL_DATA_SEASON_TOP_CARDS        = 1 << 15,
    SR_LOAD_ADDITIONAL_DATA_SEASON_TOP_GOALS        = 1 << 16,
    SR_LOAD_ADDITIONAL_DATA_TEAM_LAST_MATCHES       = 1 << 17,
    SR_LOAD_ADDITIONAL_DATA_TEAM_NEXT_MATCHES       = 1 << 18,
    SR_LOAD_ADDITIONAL_DATA_TOURNAMENT_TENNIS_INFO  = 1 << 19,
    SR_LOAD_ADDITIONAL_DATA_TEAM_TENNIS_GROUND_STATS= 1 << 20,
    SR_LOAD_ADDITIONAL_DATA_ALL                     = (1 << 21) - 1,
} SRConstLoadAdditionalDataType;

