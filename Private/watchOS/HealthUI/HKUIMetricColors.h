//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKUIMetricColors_h
#define HKUIMetricColors_h
@import Foundation;

@class UIColor;

@interface HKUIMetricColors : NSObject

@property (retain, nonatomic) UIColor *keyColor;
@property (retain, nonatomic) UIColor *contextViewPrimaryTextColor;
@property (retain, nonatomic) UIColor *contextViewSecondaryTextColor;

/* class methods */
+ (id)defaultClinicalColors;
+ (id)allergiesClinicalColors;
+ (id)carePlansClinicalColors;
+ (id)clinicalNotesClinicalColors;
+ (id)conditionsClinicalColors;
+ (id)devicesClinicalColors;
+ (id)immunizationsClinicalColors;
+ (id)insuranceClinicalColors;
+ (id)labResultsClinicalColors;
+ (id)medicationsClinicalColors;
+ (id)medicationTrackingColors;
+ (id)proceduresClinicalColors;
+ (id)socialHistoryClinicalColors;
+ (id)vitalsClinicalColors;
+ (id)unknownCategoryClinicalColors;
+ (id)vitalsColors;
+ (id)activityColors;
+ (id)bodyMeasurementColors;
+ (id)mindfulnessColors;
+ (id)mobilityColors;
+ (id)nutritionColors;
+ (id)reproductiveHealthColors;
+ (id)sleepColors;
+ (id)sleepColorsForSleepAnalysis:(long long)analysis;
+ (id)hearingHealthColors;
+ (id)respiratoryColors;
+ (id)otherColors;
+ (id)symptomsColors;
+ (id)categoryColorsWithColor:(id)color;
+ (id)defaultContextViewColorsUsingColor:(id)color;
+ (id)disabledContextViewColor;
+ (id)workoutContextViewColors;

/* instance methods */
@end

#endif /* HKUIMetricColors_h */