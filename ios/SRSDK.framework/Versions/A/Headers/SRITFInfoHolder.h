//
//  SRITFInfoHolder.h
//  SRSDK
//
//  Copyright (c) 2015 Sportradar AG. All rights reserved.
//

#import "SRObject.h"
#import "SRITFMatchInfo.h"
#import "SRITFTournamentInfo.h"

@interface SRITFInfoHolder : SRObject

+ (SRITFMatchInfo *)matchInfoForMatchId:(int)matchId;

+ (SRITFTournamentInfo *)tournamentInfoForTournamentId:(int)tournamentId;


@end
