//
//  SRPlayerTeamSeason.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRSeason.h"
#import "SRPlayer.h"
#import "SRTeam.h"
#import "SRPlayerStat.h"
#import "SRObject.h"

@class SRTeam;

/**
 * Player statistics for a team in a season.
 */
@interface SRPlayerTeamSeason : SRObject {
}

/**
 * Season.
 */
@property (nonatomic,readonly) SRSeason*  season;

/**
 * Team.
 */
@property (nonatomic,readonly) SRTeam*  team;

/**
 * Player statistics details.
 */
@property (nonatomic,readonly) SRPlayerStat*  statistics;


@end

