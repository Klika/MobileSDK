//
//  SREventSuspension.h
//  SRSDK
//
//  Copyright (c) 2015 Sportradar AG. All rights reserved.
//

#import "SREvent.h"

@interface SREventSuspension : SREvent

/**
 * Suspended team.
 */
@property (nonatomic,readonly) SRTeamBase *suspendedTeam;

/**
 * Suspended player, can be null.
 */
@property (nonatomic,readonly) SRPlayer *suspendedPlayer;

/**
 * Duration of suspension in minutes.
 */
@property (nonatomic,readonly) int suspensionDuration;


@end
