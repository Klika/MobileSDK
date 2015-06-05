//
//  SRSDKCore.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

// prevent releasing application with liveodds feed
#ifndef DEBUG

#if (defined DEBUG_LIVEODDS_FEED) && DEBUG_LIVEODDS_FEED == 1
#error You can't release application with liveodds feed
#endif

#if (defined DEBUG_PVR_MODE) && DEBUG_PVR_MODE == 1
#error You can't release application with PVR mode enabled
#endif

#if (defined DEBUG_SAPI_STAGING) && DEBUG_SAPI_STAGING == 1
#error You can't release application with SAPI staging URL
#endif

#endif

#import <Foundation/Foundation.h>
#import "SRConfiguration.h"
#import "SRNetworkActivityDelegate.h"

@interface SRSDK : NSObject

+ (void)startWithConfiguration:(SRConfiguration *)configuration;

+ (void)startWithConfiguration:(SRConfiguration *)configuration andNetworkActivityDelegate:(id<SRNetworkActivityDelegate>)networkActivityDelegate;

/**
 * Was SDK properly initialized with backend. Was valid app key provided.
 */
+ (BOOL)isValidated;

/**
 * Returns accurate time from server, independent from device time settings.
 */
+ (NSDate *)getAccurateTime;

#if (defined DEBUG_PVR_MODE) && DEBUG_PVR_MODE == 1
+ (NSUInteger)getPvrOffset;

+ (void)setPvrOffsetBasedOnEvent:(NSNumber *)offset;
#endif

@end
