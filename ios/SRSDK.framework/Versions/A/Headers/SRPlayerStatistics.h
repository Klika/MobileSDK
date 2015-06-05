//
//  SRPlayerStatistics.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRPlayer.h"
#import "SRPlayerTeamStatistics.h"
#import "SRPlayerStat.h"
#import "SRObject.h"

/**
 * Statistics details for player.
 */
@interface SRPlayerStatistics : SRObject

@property (nonatomic,readonly) SRConstSports sportId;

/**
 * Player.
 */
@property (nonatomic,readonly) SRPlayer *player;

/**
 * Array of statistics for each team player has played.
 * @see SRPlayerTeamStatistics
 */
@property (nonatomic,readonly) NSArray*  teams;

/**
 * Player's whole career statistics. This is the same as summing up all the teams statistics of this player.
 */
@property (nonatomic,readonly) SRPlayerStat*  total;


@end

