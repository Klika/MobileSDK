//
//  SRMatchOdd.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRMatchOddType.h"
#import "SRMatchOddOutcome.h"
#import "SRObject.h"

/**
 * Match odds provided by bookmaker.
 */
@interface SRMatchOdd : SRObject

/**
* Client match Id.
*/
@property (nonatomic,readonly) int clientMatchId;

/**
 * Bookmaker unique id.
 */
@property (nonatomic,readonly) int bookmakerId;

/**
 * Bookmaker bet id. Optional.
 */
@property (nonatomic,readonly) int bookmakerbetId;

/**
 * Odd type details. Long ans short text.
 */
@property (nonatomic,readonly) SRMatchOddType*  type;

/**
 * Array of match odd outcomes.
 * @see SRMatchOddOutcome
 */
@property (nonatomic,readonly) NSArray* odds;

/**
 * Is this a live bet.
 */
@property (nonatomic,readonly) BOOL livebet;

/**
* Is match odds.
*/
@property (nonatomic,readonly) BOOL isMatchOdds;

/**
 * Extra odd details. Optional.
 */
@property (nonatomic,readonly) NSString* extra;


@end

