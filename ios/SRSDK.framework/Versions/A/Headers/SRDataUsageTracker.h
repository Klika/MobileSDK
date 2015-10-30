//
//  SRDataUsageTracker.h
//  SRSDK
//
//  Copyright (c) 2015 Sportradar AG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SRDataUsageTracker : NSObject

/**
 * Total bytes transferred by SDK.
 * @return Total sum
 */
+ (NSUInteger)getTotalBytesTransferred;

/**
 * Total bytes transferred by SDK in human readable format.
 * @return Total sum
 */
+ (NSString *)getHumanReadableTotalBytesTransferred;

/**
 * Total bytes transferred by SDK.
 * @return Mapped values, key is URL, value is byte count
 */
+ (NSDictionary *)getBytesTransferred;

/**
 * Total bytes transferred in human readable format.
 * @return Key is URL, value is human readable value
 */
+ (NSDictionary *)getHumanReadableBytesTransferred;

/**
 * Resets data usage tracker.
 */
+ (void)reset;


@end
