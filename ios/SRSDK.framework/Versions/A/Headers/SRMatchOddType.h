//
//  SRMatchOddType.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRObject.h"
#import "SRConstMatchOddType.h"

/**
 * Match odd type.
 */
@interface SRMatchOddType : SRObject

/**
 * Unique id of odd type.
 * See SRConstMatchOddType
 */
@property (nonatomic,readonly) SRConstMatchOddType id;

/**
 * Odd type name. For example "Over/Under".
 */
@property (nonatomic,readonly) NSString* name;

/**
 * Odd type short name. For example "Total".
 */
@property (nonatomic,readonly) NSString* shortName;


@end

