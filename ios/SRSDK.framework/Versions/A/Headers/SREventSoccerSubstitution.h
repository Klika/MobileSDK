//
//  SREventSoccerSubstitution.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRPlayerSoccer.h"
#import "SREventSoccer.h"
#import "SRPlayerAwareEvent.h"

/**
 * Soccer player substitution event.
 */
@interface SREventSoccerSubstitution : SREventSoccer <SRPlayerAwareEvent> {
}

/**
 * In case this event is a substitution, this would be the player that entered the match.
 */
@property (nonatomic,readonly) SRPlayerSoccer*  playerIn;

/**
 * In case this event is a substitution, this would be the player that leaved the match.
 */
@property (nonatomic,readonly) SRPlayerSoccer*  playerOut;


@end

