//
//  SRPlayerTeamStatistics.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRTeam.h"
#import "SRPlayerTeamSeason.h"
#import "SRPlayerStat.h"
#import "SRObject.h"

@class SRTeam;

/**
 * Player statistics for a team.
 */
@interface SRPlayerTeamStatistics : SRObject {
}

/**
 * Team of a player, this statistic is provided.
 */
@property (nonatomic,readonly) SRTeam*  team;

/**
 * Array of seasons, player played.
 * @see SRPlayerTeamSeason
 */
@property (nonatomic,readonly) NSArray*  seasons;


@end

