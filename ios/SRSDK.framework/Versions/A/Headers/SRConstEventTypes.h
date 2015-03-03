//
//  SRConstEventTypes.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
typedef enum _SRConstEventTypes {
    EVENTTYPE_FUN_FACT                        = -10,
    
    EVENTTYPE_MATCH_STARTED                   = 10,
    EVENTTYPE_TEMPORARY_INTERUPTION_OVER      = 16, // game resumed
    EVENTTYPE_MATCH_ENDED                     = 20,
    EVENTTYPE_CURRENT_PERIOD                  = 22,
    EVENTTYPE_SECOND_PERIOD_STARTED           = 23,
    EVENTTYPE_PERIOD_STARTED                  = 24,
    EVENTTYPE_FIRST_EXTRA_PERIOD_STARTED      = 27,
    EVENTTYPE_SECOND_EXTRA_PERIOD_STARTED     = 28,
    EVENTTYPE_PENALTIES_STARTED               = 29,
    EVENTTYPE_SCORE_CHANGED                   = 30, // GOAL, POINT depends on sport
    EVENTTYPE_SCORE_AFTER_NORMAL              = 32,
    EVENTTYPE_SCORE_AFTER_EXTRATIME           = 33,
    EVENTTYPE_SCORE_AFTER_PENALTIES           = 34,
    EVENTTYPE_SCORE_AFTER_PERIOD_1            = 35,
    EVENTTYPE_SCORE_AFTER_PERIOD_2            = 36,
    EVENTTYPE_SCORE_AFTER_PERIOD_3            = 37,
    EVENTTYPE_SCORE_AFTER_PERIOD_4            = 38,
    EVENTTYPE_SCORE_AFTER_PERIOD_5            = 39,
    EVENTTYPE_YELLOW_CARD                     = 40,
    EVENTTYPE_SCORE_IN_EXTRA_PERIOD_1         = 41,
    EVENTTYPE_SCORE_IN_EXTRA_PERIOD_2         = 42,
    EVENTTYPE_RED_CARD_AFTER_SECOND_YELLOW    = 45,
    EVENTTYPE_RED_CARD                        = 50,
    EVENTTYPE_SUBSTITUTION                    = 60,
    EVENTTYPE_CORNER_KICKS_FOR_A_TEAM         = 70,
    EVENTTYPE_SCORE_AFTER_PERIOD_6            = 71,
    EVENTTYPE_SCORE_AFTER_PERIOD_7            = 72,
    EVENTTYPE_SCORE_AFTER_PERIOD_8            = 73,
    EVENTTYPE_SCORE_AFTER_PERIOD_9            = 74,
    EVENTTYPE_LINEUP_AVAILABLE                = 80,
    EVENTTYPE_INJURY_TIME_SHOWN               = 90,
    EVENTTYPE_INJURY_TIME_PLAYED              = 91,
    EVENTTYPE_FREEKICK_TAKEN                  = 150,
    EVENTTYPE_GOALKICK_TAKEN                  = 151,
    EVENTTYPE_THROWIN_TAKEN                   = 152,
    EVENTTYPE_OFFSIDE                         = 153,
    EVENTTYPE_CORNER_KICK_TAKEN               = 154,
    EVENTTYPE_SHOT_ON_TARGET                  = 155,
    EVENTTYPE_SHOT_OFF_TARGET                 = 156,
    EVENTTYPE_GOALKEEPER_SAVE                 = 157,
    EVENTTYPE_PLAYER_INJURED                  = 158,
    EVENTTYPE_PENALTY_REWARDED                = 161,
    EVENTTYPE_ATTENDANCE                      = 165,
    EVENTTYPE_PLAYER_GOES_TO_INJURY           = 167,
    EVENTTYPE_PLAYER_BACK_FROM_INJURY         = 168,
    EVENTTYPE_SHOT_BLOCKED                    = 172,
    EVENTTYPE_PENALTY_MISSED                  = 666,
    EVENTTYPE_PENALTY_SHOT                    = 1002,
    EVENTTYPE_FIRST_SERVER                    = 1022,
    EVENTTYPE_MATCH_ABOUT_TO_START            = 1024,
    EVENTTYPE_TENNIS_SCORE_CHANGED            = 1025,
    EVENTTYPE_TENNIS_FIRST_SERVE_FAULT        = 1032,
    EVENTTYPE_TIMEOUT                         = 1035,
    EVENTTYPE_TENNIS_SERVICE_TAKEN            = 1061,
    EVENTTYPE_WON_COIN_TOSS                   = 1120,
    EVENTTYPE_WHO_DECIDE_SERVICE              = 1121,
    EVENTTYPE_MATCH_CALLED                    = 1124,
    EVENTTYPE_START_PLAY_ON_LEFT              = 1128,
    
    // currently doesn't need to be in documentation
    EVENTTYPE_ATTACKING_VIEW                  = 1103,
    EVENTTYPE_BALL_COORDINATES                = 1140,
    
    EVENTTYPE_PLAYERS_WARMING_UP              = 1180,
    EVENTTYPE_PLAYERS_ON_PITCH                = 1181
} SRConstEventTypes;

