//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDHeartDailyAnalytics_h
#define HDHeartDailyAnalytics_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDictionary, NSMutableDictionary;

@interface HDHeartDailyAnalytics : NSObject<NSCopying>

@property (readonly, copy, nonatomic) NSDictionary *payload;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)updateIsEcgOnboarded:(BOOL)onboarded;
- (void)updateIsIrnOnboarded:(BOOL)onboarded;
- (void)updateIsImproveHealthAndActivityAllowed:(BOOL)allowed;
- (void)updateElectrocardiogramClassificationCount:(long long)count;
- (void)updateIrregularRhythmNotificationClassificationCount:(long long)count;
- (void)updateActiveWatchProductType:(id)type;
- (void)updateActiveWatchSystemBuildVersion:(id)version;
- (void)updateWeeksSinceElectrocardiogramOnboarded:(id)onboarded;
- (void)updateWithElectrocardiogramClassifications:(id)classifications isWithin24HoursPostIRN:(BOOL)irn;
- (void)updateECGActiveAlgorithmVersion:(id)version;
- (void)updateECGUpdateVersionPhone:(id)phone;
- (void)updateECGUpdateVersionWatch:(id)watch;
- (void)updateECGOnboardingCountryCode:(id)code;
- (void)updateIRNOnboardingCountryCode:(id)code;
- (void)updateIsAtrialFibrillationEnabled:(id)enabled;
- (void)updateWasWatchWornPast24Hours:(BOOL)hours;
- (void)updateCountRecordedTachogramsPast24Hours:(long long)hours;
- (void)updateCountAnalyzedTachogramsPast24Hours:(long long)hours;
- (void)updateCountMobileAssetsDownloadedPast24Hours:(long long)hours;
- (void)updateOTAFactorPackID:(id)id;
- (void)updateAgeInYears:(id)years;
- (void)updateSex:(long long)sex;
- (void)updateAreHealthNotificationsAuthorized:(BOOL)authorized;
- (void)updateNumberOfStandAndIdleHoursInPreviousCalendarDay:(id)day;
- (void)updateDaysSinceLastCountryMonitorCheck:(id)check;
- (void)updateDaysSinceLastCountryMonitorFetch:(id)fetch;
- (void)updateLastCountryMonitorFetchBuildNumber:(id)number;
- (void)updateIsGlucoseEnhancedChartingDelivered:(BOOL)delivered;
- (void)updateGlucoseEnhancedChartingCountryCode:(id)code;
- (void)updateHighHeartRateNotificationThreshold:(id)threshold;
- (void)updateLowHeartRateNotificationThreshold:(id)threshold;
- (void)updateIsTachycardiaDetectionEnabled:(BOOL)enabled;
- (void)updateIsBradycardiaDetectionEnabled:(BOOL)enabled;
- (void)updateAlgorithmVersionIRN:(id)irn;
- (void)updateAtrialFibrillationDetectionV2CountryCode:(id)code;
- (void)updateIsAtrialFibrillationEnabledV2:(id)v2;
- (void)updateIsMenstrualCyclesHeartRateInputDelivered:(BOOL)delivered;
- (void)updateMenstrualCyclesHeartRateInputCountryCode:(id)code;
- (void)updateIsRespiratoryRateDelivered:(BOOL)delivered;
- (void)updateIsRespiratoryRateEnabledInPrivacy:(id)privacy;
- (void)updateRespiratoryRateCountryCode:(id)code;
@end

#endif /* HDHeartDailyAnalytics_h */