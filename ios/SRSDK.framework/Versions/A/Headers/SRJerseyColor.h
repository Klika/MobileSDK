//
//  SRJerseyColor.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRObject.h"

/**
 * Represents jersey color components for each jersey.
 */
@interface SRJerseyColor : SRObject

/**
 * Base color of this jersey.
 */
@property (nonatomic,readonly) NSString* base;

/**
 * Sleeve color of this jersey.
 */
@property (nonatomic,readonly) NSString* sleeve;

/**
 * Number color of this jersey.
 */
@property (nonatomic,readonly) NSString* number;

/**
 * Stripe color of this jersey.
 */
@property (nonatomic,readonly) NSString* stripes;

/**
 * Horizontal stripe of this jersey.
 */
@property (nonatomic,readonly) NSString* horizontalStripes;

/**
 * Split color of this jersey.
 */
@property (nonatomic,readonly) NSString* split;


@end

