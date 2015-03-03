//
//  SREventSoccer.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRPlayer.h"
#import "SREvent.h"
#import "SRPlayerAwareEvent.h"

/**
 * Soccer specific event.
 */
@interface SREventSoccer : SREvent <SRPlayerAwareEvent> {
}

/**
 * Time of the event in injury time of the match.
 */
@property (nonatomic,readonly) int injuryTime;

/**
 * Player that is involved in this event.
 * 
 * In case of a substitution, this property is null. Use <playerIn> and <playerOut> instead.
 */
@property (nonatomic,readonly) SRPlayer*  player;


@end

