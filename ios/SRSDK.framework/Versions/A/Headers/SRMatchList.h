//
//  SRMatchList.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRMatch.h"


// typedef for filter
typedef BOOL (^MatchListFilter)(SRMatch* match);

// class definition
@class SRMatchList;

// protocol delegate definition
@protocol SRMatchListDelegate <NSObject>

- (void)didReceiveMatches:(SRMatchList*)matchList loadedDays:(NSSet*)loadedDays;

@end

@interface SRMatchList : NSObject {
    NSArray *operations;        // array of NSOperation instances, representing network operations.
}

+ (SRMatchList *)todayMatches:(id<SRMatchListDelegate>)delegate;
+ (SRMatchList *)weeklyMatches:(id<SRMatchListDelegate>)delegate;
- (SRMatchList *)initMatchListWithFilter:(MatchListFilter)filter delegate:(id<SRMatchListDelegate>)delegate startDay:(int)startDay endDay:(int)endDay;

/**
 * Cancel all network operations taking place.
 */
- (void)cancel;

@property (nonatomic, readonly) NSArray*  matches;
@property (nonatomic, readonly) MatchListFilter listFilterCallback;
@property (nonatomic, readonly) int startDay;
@property (nonatomic, readonly) int endDay;
@property (nonatomic, readonly) NSSet *loadedDays;
@property (nonatomic, weak) id<SRMatchListDelegate> delegate;


@end

