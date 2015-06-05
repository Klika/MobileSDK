//
//  SRSoccerCornerSide.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRConstCornerSide.h"
#import "SRObject.h"

/**
 * Represents corner side.
 */
@interface SRSoccerCornerSide : SRObject

/**
 * Corner side type.
 * @see SRConstCornerSide.h for available sides
 */
@property (nonatomic,readonly) SRConstCornerSide id;

/**
 * Localized corner side name.
 */
@property (nonatomic,readonly) NSString* name;


@end

