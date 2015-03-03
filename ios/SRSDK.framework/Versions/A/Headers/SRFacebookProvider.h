//
//  SRFacebookProvider.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SRSocialLoginProvider.h"

@interface SRFacebookProvider : NSObject <SRSocialLoginProvider>

/**
 * Facebook access token.
 */
@property (nonatomic, strong) NSString *accessToken;


@end
