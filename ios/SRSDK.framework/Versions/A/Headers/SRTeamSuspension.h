//
//  SRTeamSuspension.h
//  SRSDK
//
//  Copyright (c) 2015 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRObject.h"
#import "SRTeamBase.h"
#import "SRPlayer.h"

@interface SRTeamSuspension : SRObject

/**
 * Suspended team.
 */
@property(nonatomic,readonly) SRTeamBase* suspendedTeam;

/**
 * Suspended player, can be nil.
 */
@property(nonatomic,readonly) SRPlayer* suspendedPlayer;

/**
 * Suspension length in minutes.
 */
@property(nonatomic,readonly) int suspensionLength;

/**
 * Remaining seconds of suspension.
 */
@property(nonatomic,readonly) int secondsLeft;


@end