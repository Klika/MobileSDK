//
//  SREventSoccerGoal.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRConstEventFlag.h"
#import "SRPlayer.h"
#import "SREvent.h"
#import "SRPlayerAwareEvent.h"

/**
 * This is all sports score change event.
 */
@interface SREventScoreChange : SREvent <SRPlayerAwareEvent>

/**
 * Team which scored.
 */
@property (nonatomic,readonly) SRTeamBase *scoringTeam;

/**
 * Which player scored. Can be nil.
 */
@property (nonatomic,readonly) SRPlayer *scorer;

/**
 * How many points where there in the score. In most cases value is 1, except for example in basketball match.
 */
@property (nonatomic,readonly) int points;

/**
 * What's the current score of a match.
 */
@property (nonatomic,readonly) SRMatchScore *result;

/**
 * Flags that provide additional information regarding a shot or goal in soccer.
 * @see SRConstEventFlag.h
 */
@property (nonatomic,readonly) SRConstEventFlag flags;

/**
 * Array of player who assisted.
 * @see SRPlayer
 */
@property (nonatomic,readonly) NSArray* assistants;

@end

