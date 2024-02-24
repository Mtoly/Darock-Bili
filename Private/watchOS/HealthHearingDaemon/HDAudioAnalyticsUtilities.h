//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDAudioAnalyticsUtilities_h
#define HDAudioAnalyticsUtilities_h
@import Foundation;

@interface HDAudioAnalyticsUtilities : NSObject
/* class methods */
+ (id)localGregorianCalendar;
+ (double)leqFromStatistics:(id)statistics;
+ (double)durationFromStatistics:(id)statistics;
+ (double)doseFromStatistics:(id)statistics days:(long long)days;
+ (long long)exposureAlertCount:(id)count;
+ (id)fullDays:(long long)days beforeDate:(id)date;
+ (id)rollingDays:(long long)days beforeDate:(id)date;
+ (id)boundedIntegerForExposureDuration:(double)duration;
+ (id)boundedIntegerForSyncDelayDuration:(double)duration;
+ (id)boundedIntegerForEventDuration:(double)duration;
+ (id)boundedIntegerForLockedDuration:(double)duration;
+ (id)boundedIntegerForTimeSinceLastNotification:(double)notification;
+ (id)boundedIntegerForLEQ:(double)leq;
+ (id)boundedIntegerForSoundReductionLEQ:(double)leq;
+ (id)boundedIntegerForDose:(double)dose;
+ (id)boundedIntegerForValue:(double)value orderedBuckets:(id)buckets sentinel:(id)sentinel transformer:(id /* block */)transformer;
+ (id)audioAverageAndDurationForExposureType:(long long)type profile:(id)profile startDate:(id)date endDate:(id)date error:(id *)error;
+ (id)_quantityTypeForExposureType:(long long)type;
+ (id)audioExposureEventsForExposureType:(long long)type profile:(id)profile startDate:(id)date endDate:(id)date error:(id *)error;
+ (id)latestAudioExposureEventForExposureType:(long long)type profile:(id)profile error:(id *)error;
@end

#endif /* HDAudioAnalyticsUtilities_h */