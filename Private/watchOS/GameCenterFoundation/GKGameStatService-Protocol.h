//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKGameStatService_Protocol_h
#define GKGameStatService_Protocol_h
@import Foundation;

@protocol GKGameStatService <NSObject>
/* instance methods */
- (void)getRecentMatchesForGameDescriptor:(id)descriptor leaderboardIdentifier:(id)identifier handler:(id /* block */)handler;
- (void)getRecentMatchesForGameDescriptor:(id)descriptor achievementIdentifier:(id)identifier handler:(id /* block */)handler;
- (void)getRecentMatchesForGameDescriptor:(id)descriptor includeCompatibleMultiplayerGames:(BOOL)games handler:(id /* block */)handler;
- (void)getRecentMatchesForGameDescriptor:(id)descriptor otherPlayer:(id)player handler:(id /* block */)handler;
- (void)getRecentPlayersWithHandler:(id /* block */)handler;
- (void)getAchievementDescriptionsForGameDescriptor:(id)descriptor handler:(id /* block */)handler;
- (void)getAchievementsForGameDescriptor:(id)descriptor players:(id)players handler:(id /* block */)handler;
- (void)submitAchievements:(id)achievements whileScreeningChallenges:(BOOL)challenges withEligibleChallenges:(id)challenges handler:(id /* block */)handler;
- (void)resetAchievementsWithHandler:(id /* block */)handler;
- (void)getLeaderboadForRequest:(id)request handler:(id /* block */)handler;
- (void)submitScores:(id)scores whileScreeningChallenges:(BOOL)challenges withEligibleChallenges:(id)challenges attemptInProcessFirst:(BOOL)first handler:(id /* block */)handler;
- (void)getLeaderboardSummaryForGameDescriptor:(id)descriptor localPlayer:(id)player baseLeaderboardID:(id)id leaderboardID:(id)id timeScope:(long long)scope handler:(id /* block */)handler;
- (void)getLeaderboardsForGameDescriptor:(id)descriptor player:(id)player setIdentifier:(id)identifier handler:(id /* block */)handler;
- (void)getLeaderboardSetsForGameDescriptor:(id)descriptor handler:(id /* block */)handler;
- (void)setDefaultLeaderboardID:(id)id handler:(id /* block */)handler;
- (void)getDefaultLeaderboardIDWithHandler:(id /* block */)handler;
- (void)getLeaderboardsForGameDescriptor:(id)descriptor player:(id)player leaderboardIDs:(id)ids setIdentifier:(id)identifier handler:(id /* block */)handler;
- (void)getPreviousInstanceForLeaderboard:(id)leaderboard gameDescriptor:(id)descriptor player:(id)player handler:(id /* block */)handler;
- (void)getEntriesForLeaderboard:(id)leaderboard gameDescriptor:(id)descriptor localPlayer:(id)player playerScope:(long long)scope timeScope:(long long)scope range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range players:(id)players handler:(id /* block */)handler;
- (void)getEntriesForLeaderboard:(id)leaderboard gameDescriptor:(id)descriptor localPlayer:(id)player playerScope:(long long)scope timeScope:(long long)scope range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range players:(id)players locale:(id)locale handler:(id /* block */)handler;
- (void)submitScore:(long long)score context:(unsigned long long)context leaderboardIDs:(id)ids forPlayer:(id)player whileScreeningChallenges:(BOOL)challenges withEligibleChallenges:(id)challenges gameDescriptor:(id)descriptor handler:(id /* block */)handler;
- (void)submitInstanceScore:(long long)score context:(unsigned long long)context leaderboardID:(id)id forPlayer:(id)player whileScreeningChallenges:(BOOL)challenges withEligibleChallenges:(id)challenges handler:(id /* block */)handler;
- (void)createLeaderboardBasedOnID:(id)id recipients:(id)recipients inviteMessage:(id)message context:(id)context duration:(double)duration handler:(id /* block */)handler;
- (void)startLeaderboardWithID:(id)id handler:(id /* block */)handler;
- (void)endLeaderboardWithID:(id)id handler:(id /* block */)handler;
- (void)deleteLeaderboardWithID:(id)id handler:(id /* block */)handler;
@end

#endif /* GKGameStatService_Protocol_h */