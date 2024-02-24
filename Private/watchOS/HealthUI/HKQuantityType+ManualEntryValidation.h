//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKQuantityType_ManualEntryValidation_h
#define HKQuantityType_ManualEntryValidation_h
@import Foundation;

@interface HKQuantityType (ManualEntryValidation)
/* class methods */
+ (id)typeIdentifiersSupportingManualEntryValidation;

/* instance methods */
- (long long)associatedSampleAggregationStyle;
- (unsigned long long)validateQuantityForManualEntry:(id)entry;
@end

#endif /* HKQuantityType_ManualEntryValidation_h */