//
//  SRMatchOddOutcome.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRObject.h"

@interface SRMatchOddOutcome : SRObject

@property (nonatomic,readonly) int id;

/**
 * Odd name. For example "3:1".
 */
@property (nonatomic,readonly) NSString* name;

/**
 * Odd value. For example "23.0".
 */
@property (nonatomic,readonly) float odds;

@property (nonatomic,readonly) NSString* tbid;


@end

