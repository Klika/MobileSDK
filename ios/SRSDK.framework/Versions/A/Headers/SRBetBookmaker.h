//
//  SRBetBookmaker.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRObject.h"

@interface SRBetBookmaker : SRObject

/**
 * Bookmaker ID.
 */
@property (nonatomic, readonly) int bookmakerId;

/**
 * Name of a bookmaker.
 */
@property (nonatomic, readonly) NSString *name;

/**
 * Default language of a bookmaker.
 */
@property (nonatomic, readonly) NSString *defaultLanguage;

/**
 * Array of NSString currencies, which are also keys for currencyLimits property dictionary.
 * @see currencyLimits
 */
@property (nonatomic, readonly) NSArray *supportedCurrencies;

/**
 * Default currency, bookmaker operates with.
 */
@property (nonatomic, readonly) NSString *defaultCurrency;

/**
 * Are singles supported.
 */
@property (nonatomic, readonly) BOOL supportSingleBet;

/**
 * Are multiple lines supported.
 */
@property (nonatomic, readonly) BOOL supportMultiBet;

/**
 * Minimum number of lines on a ticket.
 */
@property (nonatomic, readonly) int minLinesPerTicket;

/**
 * Maximum number of lines on a ticket.
 */
@property (nonatomic, readonly) int maxLinesPerTicket;

/**
 * Currency limits, mapped by currency string.
 */
@property (nonatomic, readonly) NSDictionary *currencyLimits;


@end

