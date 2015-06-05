//
//  SRTournamentTenis.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRCountry.h"
#import "SRGender.h"
#import "SRTournamentTennisType.h"
#import "SRTennisGroundType.h"
#import "SRTournament.h"
#import "SRTeamTennis.h"
	
/**
 * Represents the tennis tournament additional data.
 */
@interface SRTournamentTennis :SRTournament

/**
 * Name of the city hosting the tournament.
 */
@property (nonatomic,readonly) NSString* city;

/**
 * Country hosting the tournament.
 */
@property (nonatomic,readonly) SRCountry*  country;

/**
 * Gender of the tournament participants.
 */
@property (nonatomic,readonly) SRGender*  gender;

/**
 * Type of the tennis tournament (singles or doubles).
 */
@property (nonatomic,readonly) SRTournamentTennisType *type;

/**
 * Ground type tournament is played on.
 */
@property (nonatomic,readonly) SRTennisGroundType *groundType;

/**
 * Number of sets on a tournament.
 */
@property (nonatomic,readonly) int sets;

/**
 * Is this qualifying tournament.
 */
@property (nonatomic,readonly) BOOL qualification;

/**
 * Tournaments's start date.
 */
@property (nonatomic,readonly) NSDate* startDate;

/**
 * Tournaments's end date.
 */
@property (nonatomic,readonly) NSDate* endDate;

/**
 * Number of competitors in a tournament, loaded with loadAdditionalData->SR_LOAD_ADDITIONAL_DATA_TOURNAMENT_TENNIS_INFO.
 */
@property (nonatomic,readonly) int numOfCompetitors;

/**
 * Tournament prize, loaded with loadAdditionalData->SR_LOAD_ADDITIONAL_DATA_TOURNAMENT_TENNIS_INFO.
 */
@property (nonatomic,readonly) int prize;

/**
 * Tournament prize currency, loaded with loadAdditionalData->SR_LOAD_ADDITIONAL_DATA_TOURNAMENT_TENNIS_INFO.
 */
@property (nonatomic,readonly) NSString* prizeCurrency;

/**
 * Last winner of this tournament, loaded with loadAdditionalData->SR_LOAD_ADDITIONAL_DATA_TOURNAMENT_TENNIS_INFO.
 */
@property (nonatomic,readonly) SRTeamTennis* lastWinner;


@end

