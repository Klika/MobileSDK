//
//  SRLocalSettingsManager.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Manager for storing data to local device.
 */
@interface SRLocalSettingsManager : NSObject

+ (SRLocalSettingsManager *)sharedInstance;

/**
 * Retrieves the object for the specified key.
 */
- (id)objectForKey:(NSString *)key;

/**
 * Store object for specified key.
 */
- (void)setObject:(id <NSCoding>)object forKey:(NSString *)key;

/**
 Removes the object for the specified key.
 */
- (void)removeObjectForKey:(NSString *)key;

/**
 Removes all objects from the local storage.
 */
- (void)removeAllObjects;


@end
