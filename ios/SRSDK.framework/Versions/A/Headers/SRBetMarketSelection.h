//
//  SRBetMarketSelection.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRObject.h"
#import "SRBetMarket.h"

@interface SRBetMarketSelection : SRObject

/**
 * Selection ID.
 */
@property (nonatomic, readonly) NSString *selectionId;

/**
 * Market of this selection.
 */
@property (nonatomic, readonly) SRBetMarket *market;

/**
 * Name of the selection.
 */
@property (nonatomic, readonly) NSString *name;

/**
 * Internatinal name of the selection.
 */
@property (nonatomic, readonly) NSString *nameInternational;

/**
 * Odds for this selection.
 */
@property (nonatomic, readonly) float odds;

/**
 * Returns a list of odds types in different formats (Dec, Frac, Indo, HK, MY, Prob, US).
 */
@property (nonatomic, readonly) NSDictionary *displayOdds;

/**
 * Is this selection enabled on market.
 */
@property (nonatomic, readonly) BOOL enabled;

/**
 * Sort order of this selection.
 */
@property (nonatomic, readonly) int sortOrder;

/**
 * Was this market selection cleared.
 */
@property (nonatomic, readonly) BOOL cleared;

/**
 * Was this market selection winning.
 */
@property (nonatomic, readonly) BOOL win;


@end

