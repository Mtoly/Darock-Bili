//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKHRAFibBurdenControlServer_Protocol_h
#define HKHRAFibBurdenControlServer_Protocol_h
@import Foundation;

@protocol HKHRAFibBurdenControlServer <NSObject>
/* instance methods */
- (void)remote_triggerAnalysis;
- (void)remote_determineIfAnalysisCanRunWithFeatureStatus:(id)status completion:(id /* block */)completion;
- (void)remote_addTachogramClassificationForSampleUUID:(id)uuid hasAFib:(BOOL)afib completion:(id /* block */)completion;
- (void)remote_queryAllTachogramClassificationsWithCompletion:(id /* block */)completion;
- (void)remote_queryTachogramClassificationForSampleUUID:(id)uuid completion:(id /* block */)completion;
- (void)remote_deleteAllTachogramClassificationsWithCompletion:(id /* block */)completion;
- (void)remote_deleteTachogramClassificationForSampleUUID:(id)uuid completion:(id /* block */)completion;
- (void)remote_determineMajorityTimeZoneForStartDayIndex:(long long)index endDayIndex:(long long)index completion:(id /* block */)completion;
- (void)remote_queryEligibleTachogramsForStartDayIndex:(long long)index endDayIndex:(long long)index completion:(id /* block */)completion;
- (void)remote_queryEligibleTachogramsForPreviousSixWeeksForWeekday:(long long)weekday completion:(id /* block */)completion;
- (void)remote_queryEligibleTachogramsForPreviousSixWeeksForTimeOfDayBucket:(long long)bucket completion:(id /* block */)completion;
- (void)remote_addTachogramsForStartDayIndex:(long long)index endDayIndex:(long long)index chanceOfAFib:(id)afib chanceOfWrite:(id)write minutesBetweenSamples:(id)samples startingHour:(id)hour endingHour:(id)hour completion:(id /* block */)completion;
- (void)remote_performAnalysisForWeekContainingDayIndex:(long long)index completion:(id /* block */)completion;
- (void)remote_injectBurdenValues:(id)values completion:(id /* block */)completion;
- (void)remote_sendNotificationWithMode:(id)mode completion:(id /* block */)completion;
- (void)remote_fetchSevenDayAnalysisBreadcrumbsWithCompletion:(id /* block */)completion;
@end

#endif /* HKHRAFibBurdenControlServer_Protocol_h */