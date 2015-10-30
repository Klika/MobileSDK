//
//  SRConstPlayerStat.h
//  SRSDK
//
//  Copyright (c) 2015 Sportradar AG. All rights reserved.
//

typedef enum _SRConstPlayerStat {
    
    /**
     * Number of goals scored.
     */
    PLAYER_STAT_GOALS,
    
    /**
     * Number of red cards received that followed two yellow cards.
     */
    PLAYER_STAT_YELLOW_RED_CARDS,
    
    /**
     * Number of yellow cards received.
     */
    PLAYER_STAT_YELLOW_CARDS,
    
    /**
     * Number of red cards received.
     */
    PLAYER_STAT_RED_CARDS,
    
    /**
     * Number of matches played.
     */
    PLAYER_STAT_NUMBER_OF_MATCHES,
    
    /**
     * Number of assists given.
     */
    PLAYER_STAT_ASSISTS,
    
    /**
     * Number of points this player gained his team through his <goals> goals.
     */
    PLAYER_STAT_GOAL_POINTS,
    
    /**
     * Number of penalties this player has taken.
     */
    PLAYER_STAT_PENALTIES,
    
    /**
     * Sum of all the time played in the matches in minutes.
     */
    PLAYER_STAT_MINUTES_PLAYED,
    
    /**
     * Number of times this player was substituted into the match.
     */
    PLAYER_STAT_SUBSTITUTIONS_IN,
    
    /**
     * Number of times this player was substituted from the match by another player.
     */
    PLAYER_STAT_SUBSTITUTIONS_OUT
} SRConstPlayerStat;
