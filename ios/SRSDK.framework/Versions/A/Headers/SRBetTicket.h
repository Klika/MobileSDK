//
//  SRBetTicket.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//
#import <Foundation/Foundation.h>
#import "SRObject.h"
#import "SRBetBookmaker.h"
#import "SRConstBetTicketStatus.h"
#import "SRConstBetTicketStakeType.h"
#import "SRConstBetProductType.h"
#import "SRConstBetType.h"

@interface SRBetTicket : SRObject

/**
 * Ticket identifier.
 */
@property (nonatomic, readonly) NSString *ticketId;

/**
 * Bookmaker who holds a ticket.
 */
@property (nonatomic, readonly) SRBetBookmaker *bookmaker;

/**
 * Currency of a placed ticket.
 */
@property (nonatomic, readonly) NSString *currency;

/**
 * Bet type.
 * @see SRConstBetType.h
 */
@property (nonatomic, readonly) SRConstBetType betType;

/**
 * Display name of a bet type for example "Single".
 */
@property (nonatomic, readonly) NSString *displayBetType;

/**
 * Stake of a ticket.
 */
@property (nonatomic, readonly) float ticketStake;

/**
 * Possible winning value.
 */
@property (nonatomic, readonly) float possibleWinning;

/**
 * Actual winning value if ticket was winning.
 */
@property (nonatomic, readonly) float totalReturn;

/**
 * Ticket stake type.
 * @see SRConstBetTicketStakeType.h
 */
@property (nonatomic, readonly) SRConstBetTicketStakeType stakeType;

/**
 * Status of a ticket.
 * @see SRConstBetTicketStatus.h
 */
@property (nonatomic, readonly) SRConstBetTicketStatus status;

/**
 * Status display name.
 */
@property (nonatomic, readonly) NSString *displayStatus;

/**
 * Time when ticket was recieved.
 */
@property (nonatomic, readonly) NSDate *receivedTime;

/**
 * Time when ticket was settled.
 */
@property (nonatomic, readonly) NSDate *settledTime;

/**
 * Time when ticket was updated.
 */
@property (nonatomic, readonly) NSDate *updatedTime;

/**
 * Type of a bet.
 * @see SRConstBetType.h
 */
@property (nonatomic, readonly) SRConstBetProductType betProductType;

/**
 * Lines/bet list on a ticket.
 */
@property (nonatomic, readonly) NSArray *ticketLines;

/**
 * Any possible errors when ticket fails to calculate or place.
 */
@property (nonatomic, readonly) NSArray *errorList;


@end

