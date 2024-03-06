//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 573.2.0.0.0
//
#ifndef AAUIMockAchievementsDataProvider_h
#define AAUIMockAchievementsDataProvider_h
@import Foundation;

#include "AAUIAchievementsDataProvider.h"

@class NSArray;

@interface AAUIMockAchievementsDataProvider : AAUIAchievementsDataProvider {
  /* instance variables */
  NSArray *_achievements;
}

/* instance methods */
- (id)init;
- (id)recentAndRelevantAchievementAtIndexPath:(id)path;
- (id)achievementAtIndexPath:(id)path;
- (long long)numberOfItemsInSection:(long long)section;
- (long long)numberOfSections;
- (id)headerStringForSection:(long long)section isRecentAndRelevant:(BOOL)relevant;
- (void)addInitialLoadObserver:(id)observer;
- (void)removeInitialLoadObserver:(id)observer;
- (void)addRecentAndRelevantSectionObserver:(id)observer;
- (void)removeRecentAndRelevantSectionObserver:(id)observer;
- (void)addMainSectionObserver:(id)observer;
- (void)removeMainSectionObserver:(id)observer;
- (void)startFetching;
- (void)stopFetching;
- (id)_achievementForTemplate:(id)template earnedInstanceCount:(long long)count earnedInstanceOffset:(long long)offset earnedInstanceValue:(long long)value goalValue:(long long)value progressValue:(long long)value;
- (id)_currentMonthlyChallengeAchievementForTemplate:(id)template localizableSuffix:(id)suffix goalValue:(long long)value progressValue:(long long)value isEarned:(BOOL)earned;
- (id)_fitnessUIAssetsURLWithKey:(id)key value:(id)value;
- (id)_dateComponentsWithDayOffset:(long long)offset;
- (id)_ACHDateComponentIntervalWithMonthOffset:(unsigned long long)offset;
- (id)_monthStringFromTemplateName:(id)name;
- (id)_distanceUnitForLocale:(id)locale;
@end

#endif /* AAUIMockAchievementsDataProvider_h */