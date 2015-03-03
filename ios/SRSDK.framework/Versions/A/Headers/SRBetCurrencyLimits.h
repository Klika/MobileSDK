//
//  SRBetCurrencyLimits.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRObject.h"

@interface SRBetCurrencyLimits : SRObject

@property (nonatomic, readonly) float minPerBetStake;
@property (nonatomic, readonly) float maxPerBetStake;
@property (nonatomic, readonly) float maxWinSingle;
@property (nonatomic, readonly) float maxWinMulti;


@end

