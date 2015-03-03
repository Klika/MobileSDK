//
//  SRTwitterProvider.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SRSocialLoginProvider.h"

@interface SRTwitterProvider : NSObject <SRSocialLoginProvider>

/**
 * Twitter access token.
 */
@property (nonatomic, strong) NSString *accessToken;

/**
 * Twitter secret.
 */
@property (nonatomic, strong) NSString *tokenSecret;

/**
 * Twitter user id.
 */
@property (nonatomic, readwrite) int userId;


@end
