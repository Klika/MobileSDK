//
//  SRNetworkActivityDelegate.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Use this delegate to show network activity on the GUI. This is useful for automatic network operations in SRMatchList and SRMatchManager.
 */
@protocol SRNetworkActivityDelegate <NSObject>

- (void)networkActivityStarted;
- (void)networkActivityEnded;

@end
