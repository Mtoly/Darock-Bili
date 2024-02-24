//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 138.2.0.0.0
//
#ifndef _TtC23FitnessCoachingServices21AchievementDataSource_FitnessCoachingServices_h
#define _TtC23FitnessCoachingServices21AchievementDataSource_FitnessCoachingServices_h
@import Foundation;

@interface FitnessCoachingServices.AchievementDataSource (FitnessCoachingServices) <FCSFirstGlanceAchievementEvaluatorDataSource>
/* instance methods */
- (void)monthlyChallengeForDate:(NSDate *)date calendar:(NSCalendar *)calendar completion:(id /* block */)completion;
- (void)achievementsWithNames:(NSArray *)names completion:(id /* block */)completion;
@end

#endif /* _TtC23FitnessCoachingServices21AchievementDataSource_FitnessCoachingServices_h */