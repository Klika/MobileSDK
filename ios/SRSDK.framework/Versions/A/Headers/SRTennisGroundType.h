//
//  SRTennisGroundType.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRObject.h"
#import "SRConstTennisGroundType.h"

/**
 * Represents the localized tennis tournament ground type.
 */
@interface SRTennisGroundType : SRObject {
}

/**
 * Type of ground type.
 * @see SRConstTennisGroundType.h for available types.
 */
@property (nonatomic,readonly) SRConstTennisGroundType type;

/**
 * Localized ground type name.
 */
@property (nonatomic,readonly) NSString* name;


@end

