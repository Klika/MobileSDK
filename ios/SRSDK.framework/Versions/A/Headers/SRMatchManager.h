//
//  SRMatchManager.h
//  SRSDK
//
//  Created by Domen Kržišnik on 31/03/14.
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SRMatch.h"
#if TARGET_OS_IPHONE
    #import <UIKit/UIKit.h>
#endif

static const int MAXIMUM_NO_LIVE_UPDATE_INTERVAL = 15;   // fallback value if there is no live update for long time

@protocol SRMatchManagerDelegate

- (void)matchDataIsLoaded;

@end

/**
 * Match manager handles tracking match. It starts a timer and refetches match state and events every 10 seconds. Its reasonable to track only live matches.
 */
@interface SRMatchManager : NSObject {
    NSMutableArray *lastResponseStatuses;
    int tickCount;
}

/**
 * Match tracked by match manager.
 */
@property (nonatomic, strong) SRMatch *match;

/**
 * The receiver's delegate.
 */
@property (nonatomic, weak) id<SRMatchManagerDelegate>delegate;

/**
 * Starts tracking a match. Timer tracker starts only if match is live. Initially all match info is requested for both live and non live matches.
 */
- (id)initWithMatch:(SRMatch*)matchData;

/**
 * Stop tracking should be called when some view, displaying match tracking is closed.
 */
- (void)stopTracking;

@end
