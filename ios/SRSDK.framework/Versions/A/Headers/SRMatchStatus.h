//
//  SRMatchStatus.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRConstMatchStatuses.h"
#import "SRObject.h"

/**
 * Representing match status.
 */
@interface SRMatchStatus : SRObject {
}

/**
 * Match status type.
 * @see SRConstMatchStatuses.h for available statuses
 */
@property (nonatomic,readonly) SRConstMatchStatuses id;

/**
 * Localized match status name.
 */
@property (nonatomic,readonly) NSString* name;


@end

