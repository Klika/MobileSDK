//
//  SRPlayerSoccer.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRPlayerPosition.h"
#import "SRPlayerStatistics.h"
#import "SRPlayer.h"

@class SRPlayerStatistics;

/**
 * Represents soccer specific player information.
 */
@interface SRPlayerSoccer : SRPlayer

/**
 * Preferred player's playing foot. Localized string.
 */
@property (nonatomic,readonly) NSString* preferredFoot;

/**
 * Players roles in teams for which player has played.
 */
@property (nonatomic,readonly) NSArray*  playerRoles;

/**
 * Player statistics.
 */
@property (nonatomic,readonly) SRPlayerStatistics*  playerStatistics;


@end

