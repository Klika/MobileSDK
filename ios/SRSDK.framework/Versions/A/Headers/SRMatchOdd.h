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
@interface SRMatchOdd : SRObject {
}

/**
 * Bookmaker unique id.
 */
@property (nonatomic,readonly) int bookmakerid;

/**
 * Bookmaker bet id. Optional.
 */
@property (nonatomic,readonly) int bookmakerbetid;

/**
 * Odd type details. Long ans short text.
 */
@property (nonatomic,readonly) SRMatchOddType*  type;

/**
 * Array of match odd outcomes.
 * @see SRMatchOddOutcome
 */
@property (nonatomic,readonly) NSArray*  odds;

/**
 * Is this a live bet.
 */
@property (nonatomic,readonly) BOOL livebet;

/**
 * Extra odd details. Optional.
 */
@property (nonatomic,readonly) NSString* extra;


@end

