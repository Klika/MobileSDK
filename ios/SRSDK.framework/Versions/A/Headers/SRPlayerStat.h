//
//  SRPlayerStat.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRObject.h"
	
/**
 * Represents individual player's statistics throughout his career.
 */
@interface SRPlayerStat : SRObject

/**
 * Number of goals scored.
 */
@property (nonatomic,readonly) int goals;

/**
 * Number of red cards received that followed two yellow cards.
 */
@property (nonatomic,readonly) int yellowRedCards;

/**
 * Number of yellow cards received.
 */
@property (nonatomic,readonly) int yellowCards;

/**
 * Number of red cards received.
 */
@property (nonatomic,readonly) int redCards;

/**
 * Number of matches played.
 */
@property (nonatomic,readonly) int numberOfMatches;

/**
 * Number of assists given.
 */
@property (nonatomic,readonly) int assists;

/**
 * Number of points this player gained his team through his <goals> goals.
 */
@property (nonatomic,readonly) int goalPoints;

/**
 * Number of penalties this player has taken.
 */
@property (nonatomic,readonly) int penalties;

/**
 * Sum of all the time played in the matches in minutes.
 */
@property (nonatomic,readonly) int minutesPlayed;

/**
 * Number of times this player was substituted into the match.
 */
@property (nonatomic,readonly) int substitutionsIn;

/**
 * Number of times this player was substituted from the match by another player.
 */
@property (nonatomic,readonly) int substitutionsOut;


@end

