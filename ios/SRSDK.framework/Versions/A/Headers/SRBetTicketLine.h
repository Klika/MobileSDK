//
//  SRBetTicketLine.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRObject.h"
#import "SRConstBetSettlingStatus.h"
#import "SRMatch.h"

@interface SRBetTicketLine : SRObject

/**
 * Market id.
 */
@property (nonatomic, readonly) NSString* marketId;

/**
 * Name of a market.
 */
@property (nonatomic, readonly) NSString *name;

/**
 * Match this ticket line belongs to.
 */
@property (nonatomic, readonly) SRMatch *match;

/**
 * Odds for this line.
 */
@property (nonatomic, readonly) float odds;

/**
 * Selected type on a market.
 */
@property (nonatomic, readonly) NSString *selection;

/**
 * Winning selection on a market.
 */
@property (nonatomic, readonly) NSString *winningSelection;

/**
 * Settling status of a ticket line.
 * @see SRConstBetSettlingStatus.h
 */
@property (nonatomic, readonly) SRConstBetSettlingStatus settlingStatus;

/**
 * Returns a list of odds types in different formats (Dec, Frac, Indo, HK, MY, Prob, US).
 */
@property (nonatomic, readonly) NSDictionary *displayOdds;


@end

