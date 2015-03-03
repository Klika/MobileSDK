//
//  SRBlockDefinitions.h
//  SRSDK
//
//  Created by Domen Kržišnik on 18/03/14.
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#ifndef SRSDK_SRBlockDefinitions_h
#define SRSDK_SRBlockDefinitions_h

#import "SRConstLoadAdditionalDataType.h"

@class SRObject;
@class SRHead2HeadModel;

typedef void (^SRLoadAdditionalDataSuccessCallback)(SRObject* object, SRConstLoadAdditionalDataType dataLoaded);
typedef void (^SRLoadHead2HeadDataSuccessCallback)(SRHead2HeadModel* object);
typedef void (^SRErrorCallback)(NSError * error);
typedef void (^SRSportsListCallback)(NSArray * sports);
typedef void (^SRCategoriesListCallback)(NSArray * categories);
typedef void (^SRTournamentsListCallback)(NSArray * tournaments, NSArray * uniqueTournaments);
typedef void (^SRTournamentTreeCallback)(SRObject *tournamentStructure);
typedef void (^SRObjectCallback)(SRObject *object);
typedef void (^SRLiveUpdateSuccessCallback)(SRObject* object, NSArray *responseStatuses);
typedef void (^SRTeamsListBlock)(NSArray * teams);


#endif
