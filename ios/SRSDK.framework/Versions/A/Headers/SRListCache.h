//
//  SRListCache.h
//  SRSDK
//
//  Created by Domen Kržišnik on 07/03/14.
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SRListCacheElement:NSObject{}

@property (nonatomic, strong) NSArray* list;
@property (nonatomic, strong) NSDate* expiryDate;

@end

@interface SRListCache : NSObject

@property (nonatomic, assign) int defaultExpiryTimeMinutes;

- (id)initWithExpiryTime:(int)expiryTimeMinutes;

- (NSArray *)cachedListForKey:(NSString*)key;

- (NSArray *)cachedListForIntKey:(int)key;

- (void)cacheList:(NSArray*)list forIntKey:(int)key;

- (void)cacheList:(NSArray*)list forKey:(NSString*)key;

- (BOOL)checkIfExpiredForIntKey:(int)key;

- (BOOL)checkIfExpiredForKey:(NSString*)key;

- (void)clearCache;

@end
