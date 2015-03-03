//
//  SRGameScore.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRConstGameScoreAdvantage.h"
#import "SRObject.h"

/**
 * Score of one game. This is tennis specific.
 */
@interface SRGameScore : SRObject {
}

/**
 * Score of home/first player/team.
 */
@property (nonatomic,readonly) int team1Score;

/**
 * Score of away/second player/team.
 */
@property (nonatomic,readonly) int team2Score;

/**
 * Does any player have advantage in game, if score 40:40.
 * @see SRConstGameScoreAdvantage.h
 */
@property (nonatomic,readonly) SRConstGameScoreAdvantage advantage;


@end

