//
//  SRConstPreMatchOddType.h
//  SRSDK
//
//  Copyright (c) 2015 Sportradar AG All rights reserved.
//

typedef enum _SRConstMatchOddType {
    MATCH_ODD_TPYE_UNKNOWN = 0,
    MATCH_ODD_TPYE_TWO_WAY = 1,
    MATCH_ODD_TPYE_THREE_WAY = 2, // Sometimes also 17
    MATCH_ODD_TPYE_OVER_UNDER = 3,
    MATCH_ODD_TPYE_HANDICAP = 5,
    MATCH_ODD_TPYE_MATCH_WINNER = 13,
    MATCH_ODD_TPYE_HALF_TIME = 21,
    MATCH_ODD_TPYE_CORRECT_SCORE = 22, // Sometimes also 52
    MATCH_ODD_TPYE_TWO_WAY_INC_OT = 24,
} SRConstMatchOddType;
