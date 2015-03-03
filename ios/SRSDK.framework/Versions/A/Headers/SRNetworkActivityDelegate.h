//
//  SRNetworkActivityDelegate.h
//  SRSDK
//
//  Created by Jure Zemljic on 11/08/14.
//  Copyright (c) 2014 Klika d.o.o. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Use this delegate to show network activity on the GUI. This is useful for automatic network operations in SRMatchList and SRMatchManager.
 */
@protocol SRNetworkActivityDelegate <NSObject>

- (void)networkActivityStarted;
- (void)networkActivityEnded;

@end
