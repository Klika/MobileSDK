//
//  SRNotificationSubscribable.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SRConstSports.h"

/**
 * Every model class conforming to this protocol can be used to subscribe to push notifications.
 */
@protocol SRNotificationSubscribable <NSObject>

- (NSString *)tagName;
- (NSString *)tagId;
- (SRConstSports)sportIdent;

@end
