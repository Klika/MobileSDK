//
//  SRITFMatchInfo.h
//  SRSDK
//
//  Copyright (c) 2015 Sportradar AG. All rights reserved.
//

#import "SRObject.h"

@interface SRITFMatchInfo : SRObject

/**
 * Match id.
 */
@property (nonatomic,readonly) int matchId;

@property (nonatomic,readonly) int clientMatchId;

@property (nonatomic,readonly) NSString* tournamentIdent;

/**
 * Court name.
 */
@property (nonatomic,readonly) NSString* court;

/**
 * Player/first player in doubles details url.
 */
- (NSString *)getTeam1Player1DetailsUrl;

/**
 * Player/first player in doubles details url.
 */
- (NSString *)getTeam2Player1DetailsUrl;

/**
 * Second player details url. Only available for doubles.
 */
- (NSString *)getTeam1Player2DetailsUrl;

/**
 * Second player details url. Only available for doubles.
 */
- (NSString *)getTeam2Player2DetailsUrl;


@end
