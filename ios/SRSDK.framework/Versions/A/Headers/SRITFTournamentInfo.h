//
//  SRITFTournamentInfo.h
//  SRSDK
//
//  Copyright (c) 2015 Sportradar AG. All rights reserved.
//

#import "SRObject.h"

@interface SRITFTournamentInfo : SRObject

@property (nonatomic,readonly) int tournamentId;

/**
 * Tournament name provided by ITF.
 */
@property (nonatomic,readonly) NSString* tournamentName;

@property (nonatomic,readonly) int prize;

@property (nonatomic,readonly) NSString* prizeCurrency;

@property (nonatomic,readonly) NSString* tournamentIdent;

@property (nonatomic,readonly) NSDate* startDate;

@property (nonatomic,readonly) NSDate* endDate;


@end
