//
//  SRObject.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRBlockDefinitions.h"
#import "SRConstLoadAdditionalDataType.h"

/**
 * Basic model class.
 */
@interface SRObject : NSObject

/**
 * Load additional data for model object. Loading additional data is supported only for some classes, like SRMatch or SRTournament. Calls are async. Results can be retreived with callback.
 * @param aType Type of data to load
 * @param aSuccess Success callback
 * @param aError Error callback
 * @see SRConstLoadAdditionalDataType.h for available types
 */
-(void)loadAdditionalData:(SRConstLoadAdditionalDataType)aType aSuccess:(SRLoadAdditionalDataSuccessCallback)aSuccess aError:(SRErrorCallback)aError;



@end

