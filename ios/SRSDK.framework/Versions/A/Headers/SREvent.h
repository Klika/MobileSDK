//
//  SREvent.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRConstEventTypes.h"
#import "SRMatchStatus.h"
#import "SRTeam.h"
#import "SRMatchScore.h"
#import "SRObject.h"
#import "SRConstEventTime.h"

#define MATCH_TIME_UNKNOWN ((int) -100)

/**
 * Event on a match.
 */
@interface SREvent : SRObject

/**
 * Unique event id.
 * 
 * Event ids follow in a chronological order.
 */
@property (nonatomic,readonly) int eventId;

/**
 * Sport id of event.
 */
@property (nonatomic,readonly) int sportId;

/**
 * Event for match with id.
 */
@property (nonatomic,readonly) int matchId;

/**
 * Event type.
 * @see SRConstEventTypes.h
 */
@property (nonatomic,readonly) SRConstEventTypes typeId;

/**
 * Localized event type name.
 */
@property (nonatomic,readonly) NSString* name;

/**
 * Indicates whether event is valid or not in a case of a mistake interpreting the event on the live match. A disabled event should be ignored.
 */
@property (nonatomic,readonly) BOOL disabled;

/**
 * Match status of this event. SRMatch::statusId is updated from this field when an event arrives.
 */
@property (nonatomic,readonly) SRMatchStatus*  status;

/**
 * Time of event creation.
 */
@property (nonatomic,readonly) NSDate* createdDateTime;

/**
 * Event update time. This is different to SREvent::createdDateTime only if event is manually edited on server.
 */
@property (nonatomic,readonly) NSDate* updatedDateTime;

/**
 * The team this event was created for.
 */
@property (nonatomic,readonly) SRTeamBase*  team;

/**
 * Time of the event in minutes from the start of the match.
 */
@property (nonatomic,readonly) int time;

/**
 * In case the time can not be defined (e.g. before start of the match), the value is less than 0 and take values from SRConstEventTime.
 * @see SRConstEventTime.h
 */
@property (nonatomic,readonly) SRConstEventTime timeType;

/**
 * Event position on the playing ground vertical axis in percents from 0 to 100.
 */
@property (nonatomic,readonly) int eventX;

/**
 * Event position on the playing ground horizontal axis in percents from 0 to 100.
 */
@property (nonatomic,readonly) int eventY;


@end

