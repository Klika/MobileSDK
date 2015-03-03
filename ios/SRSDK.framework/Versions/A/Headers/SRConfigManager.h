//
//  SRConfigManager.h
//  SRSDK
//
//  Copyright (c) 2013 Sportradar. All rights reserved.
//

#import "SRConfiguration.h"

/*!
 An object responsible for offering the SDK with all relevant client side information that control the behavior and parameters of the server requests.
 */
@interface SRConfigManager : NSObject
/**
 Sport Radar SDK server URL address.
 */
@property (nonatomic, readonly) NSString *feedUrl;
/**
 Service id, returned from backend server.
 */
@property (nonatomic, readonly)  NSString *serviceId;
/*!
 Interval in seconds when the <SRDataManager> data manager will repeatedly request for a new complete matches list.
 */
@property (nonatomic, readonly) int fullFeedInterval;
/*!
 The mask for live updating matches data (to set which data will be live updates)
 */
@property (nonatomic, readonly) int liveUpdateMask;
/*!
 Class singleton instance variable for <SRConfigManager>.
 
 When first accessing this variable, the configuration from config.plist is parsed. If the configuration is incomplete, errors might occur at this point.
 */
+ (SRConfigManager *)sharedInstance;

+ (void)initWithConfiguration:(SRConfiguration *)configuration andClientId:(NSString *)clientId andServiceId:(NSString *)serviceId;


@end
