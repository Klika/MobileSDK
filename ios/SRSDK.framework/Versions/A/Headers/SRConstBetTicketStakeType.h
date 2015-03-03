//
//  SRConstTicketStakeType.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

typedef enum _SRConstBetTicketStakeType {
    TICKET_STAKE_UNKNOWN = 0,
    TICKET_STAKE_PER_BET,           // stake for one line
    TICKET_STAKE_PER_LINE,          // stake for one line defined in ticket line
    TICKET_STAKE_TOTAL              // stake for all lines
} SRConstBetTicketStakeType;
