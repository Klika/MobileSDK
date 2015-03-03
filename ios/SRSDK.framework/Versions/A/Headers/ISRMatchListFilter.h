//
//  ISRMatchListFilter.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRMatch.h"
	
@protocol ISRMatchListFilter 
-(BOOL) check:(SRMatch* )aMatch;



@end

