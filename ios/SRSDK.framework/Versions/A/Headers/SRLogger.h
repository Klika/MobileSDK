//
//  SRLogger.h
//  SRSDK
//
//  Copyright (c) 2013 Sportradar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SRConstLogging.h"

@interface SRLogger : NSObject

@property (nonatomic, strong) NSArray* logLevelTranslations;

+ (SRLogger*) sharedInstance;

- (void)setLogLevel: (int)level;
- (void)logMessage: (NSString*)message forLevel:(int)level;

+ (void)logError:(NSString*)message;
+ (void)logWarning:(NSString*)message;

@end
