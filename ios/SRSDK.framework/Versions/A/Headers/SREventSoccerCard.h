//
//  SREventSoccerCard.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRConstCardType.h"
#import "SREventSoccer.h"

/**
 * Soccer card event.
 */
@interface SREventSoccerCard : SREventSoccer

/**
 * Type of the card received in case this event.
 * @see SRConstCardType.h for valid card types
 */
@property (nonatomic,readonly) SRConstCardType cardType;


@end

