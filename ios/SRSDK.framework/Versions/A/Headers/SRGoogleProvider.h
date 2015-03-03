//
//  SRGoogleProvider.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SRSocialLoginProvider.h"

@interface SRGoogleProvider : NSObject <SRSocialLoginProvider>

/**
 * Google access token.
 */
@property (nonatomic, strong) NSString *accessToken;

/**
 * Google access token.
 */
@property (nonatomic, strong) NSString *refreshToken;


@end
