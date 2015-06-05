//
//  ResponseCacheItem.h
//  SRSDK
//
//  Created by Jure Zemljic on 15/05/15.
//  Copyright (c) 2015 Sportradar AG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseCacheItem : NSObject <NSCoding>

@property (nonatomic,readonly) NSDate* expiryDate;

@property (nonatomic,readonly) NSDictionary *reponseJson;

+(instancetype)initWithJson:(NSDictionary *)json andExpiryDate:(NSDate *)date;


@end
