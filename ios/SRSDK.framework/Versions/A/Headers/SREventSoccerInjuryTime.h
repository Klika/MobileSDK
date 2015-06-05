//
//  SREventSoccerInjuryTime.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SREventSoccer.h"

/**
 * This event occurs when additional/injury time is known.
 */
@interface SREventSoccerInjuryTime :SREventSoccer

/**
 * Minutes of injury time played in case of event. 
 */
@property (nonatomic,readonly) int injuryTimePlayed;


@end

