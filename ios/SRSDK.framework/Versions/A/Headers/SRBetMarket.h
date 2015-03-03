//
//  SRBetMarket.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRObject.h"
#import "SRBetBookmaker.h"
#import "SRMatch.h"
#import "SRConstBetProductType.h"

@interface SRBetMarket : SRObject

/**
 * Bookmaker market owner.
 */
@property (nonatomic, readonly) SRBetBookmaker *bookmaker;

/**
 * Market ID.
 */
@property (nonatomic, readonly) int marketId;

/**
 * Match id of this market.
 */
@property (nonatomic, readonly) SRMatch *match;

/**
 * Name of the market.
 */
@property (nonatomic, readonly) NSString *name;

/**
 * International name of the market.
 */
@property (nonatomic, readonly) NSString *nameInternational;

/**
 * Market type id.
 */
@property (nonatomic, readonly) NSString *typeId;

/**
 * Special value. For example Over/Under.
 */
@property (nonatomic, readonly) NSString *specialValue;

/**
 * Product type, this market belongs to.
 */
@property (nonatomic, readonly) SRConstBetProductType productType;

/**
 * Sort order of a market.
 */
@property (nonatomic, readonly) int sortIndex;

/**
 * Possible selections on a market.
 * @see SRBetMarketSelection
 */
@property (nonatomic, readonly) NSArray *selections;

/**
 * Is this market enabled.
 */
@property (nonatomic, readonly) BOOL enabled;


@end

