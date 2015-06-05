//
//  SRMatchUpdatedNotification.h
//  SRSDK
//
//  Created by Domen Kržišnik on 01/04/14.
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SREvent.h"
#import "SRMatch.h"
/*!
 Represents a notification object for any tracked matches that get updated. Notifications also have array's with new events.
 
 Array _eventsAdd contains enabled events. If same event is updated(details changed) then it's in _eventsUpdate array . Array _eventsRemove contains disabled events.
 
 This notification object is sent by the <SRDataManager> through NSNotificationCenter using the notification name <a href="../docs/SRConstSRNotifications.html#SRDataManagerPartialUpdateNotification">SRDataManagerPartialUpdateNotification</a>
 */
@interface SRMatchUpdatedNotification : NSObject

/*!
 Array of <SRMatch> matches that were updated during the process of polling.
 */
@property (nonatomic, readonly) NSArray * updatedMatchList;
@property (nonatomic, readonly) NSArray * eventsAdd;
@property (nonatomic, readonly) NSArray * eventsRemove;
@property (nonatomic, readonly) NSArray * eventsUpdate;

@end