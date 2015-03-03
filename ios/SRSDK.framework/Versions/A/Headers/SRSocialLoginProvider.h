//
//  SRSocialLoginProvider.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol SRSocialLoginProvider <NSObject>

- (NSDictionary *)postParams;

- (NSString *)providerName;

@end
