//
//  SRConfiguration.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SRConstLogging.h"

@interface SRConfiguration : NSObject

/**
 * Valid backend app key.
 */
@property (nonatomic, strong) NSString *appKey;

/**
 ISO 639 language code of the client using this SDK.
 
 The language code is used in string localization.
 */
@property (nonatomic, strong) NSString *languageCode;

/**
 Time zone of the client using this SDK.
 
 The time zone code is used in date and time resolution from UTC to local time.
 */
@property (nonatomic, strong) NSTimeZone *timezone;

/**
 Level of logging used in the SDK.
 */
@property (nonatomic, readwrite) SRConstLogging loggingLevel;

/**
 * Bookmaker app key.
 */
@property (nonatomic, strong) NSString *bettingApiKey;


@end
