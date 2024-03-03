//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSample_HKMenstrualCycles_h
#define HKSample_HKMenstrualCycles_h
@import Foundation;

@interface HKSample (HKMenstrualCycles)
/* class methods */
+ (id)hkmc_defaultMetadata;

/* instance methods */
- (BOOL)hkmc_wasEnteredFromCycleTracking;
- (BOOL)hkmc_isNotPresentSymptom;
- (BOOL)hkmc_isCycleFactorSample;
- (BOOL)hkmc_isSleepDependentSample;
@end

#endif /* HKSample_HKMenstrualCycles_h */