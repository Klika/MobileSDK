//
//  SRMatchTableComparison.h
//  SRSDK
//
//  Copyright (c) 2014 Sportradar AG All rights reserved.
//

#import "SRObject.h"

/**
 * Table comparisson of two teams in a match.
 */
@interface SRMatchTableComparison : SRObject

/**
 * Array of two live table rows from home and away teams taken from the tournament's live table data.
 + @see SRLiveTableItem for live table row details
 */
@property (nonatomic,readonly) NSArray*  tableComparisonItems;

/**
 * Number of total rows. Helps for representing team position in overall table.
 */
@property (nonatomic,readonly) int numberOfRows;

@end
