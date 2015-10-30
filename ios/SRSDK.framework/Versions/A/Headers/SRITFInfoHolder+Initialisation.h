//
//  SRITFInfoHolder+Initialisation.h
//  SRSDK
//
//  Copyright (c) 2015 Sportradar AG. All rights reserved.
//

#import "SRITFInfoHolder.h"

@interface SRITFInfoHolder (Initialisation)

+ (void)putMatchInfo:(SRITFMatchInfo *)matchInfo;

+ (void)putTournamentInfo:(SRITFTournamentInfo *)tournamentInfo;

@end
