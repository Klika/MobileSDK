//
//  SREventSuspensionOver.h
//  SRSDK
//
//  Copyright (c) 2015 Sportradar AG. All rights reserved.
//

#import "SREvent.h"

@interface SREventSuspensionOver : SREvent

/**
 * Suspended team.
 */
@property (nonatomic,readonly) SRTeamBase *suspendedTeam;


@end
