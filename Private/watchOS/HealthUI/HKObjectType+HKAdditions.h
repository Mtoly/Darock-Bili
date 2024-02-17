//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKObjectType_HKAdditions_h
#define HKObjectType_HKAdditions_h
@import Foundation;

@interface HKObjectType (HKAdditions)
/* instance methods */
- (long long)associatedSampleAggregationStyle;
- (id)hk_numberFormatterForUnit:(id)unit decimalPrecisionRule:(id)rule;
- (id)hk_numberFormatterForUnit:(id)unit decimalPrecisionRule:(id)rule formattingContext:(long long)context;
- (Class)hk_valueFormatterClass;
- (Class)hk_valueFormatterClassForUnit:(id)unit;
- (id)hk_primaryMetadataKey;
- (id)hk_secondaryMetadataKey;
- (id)hk_metadataValueDisplayTypeInStore:(id)store;
- (id)hk_formatPrimaryMetadataValueForObject:(id)object unitPreferencesController:(id)controller;
- (id)hk_formatSecondaryMetadataValueForObject:(id)object unitPreferencesController:(id)controller;
- (id)_hk_formatMetadataValueForMetadataKey:(id)key object:(id)object unitPreferenceController:(id)controller;
- (id)hk_formatMetadataValue:(id)value displayType:(id)type unitPreferencesController:(id)controller;
@end

#endif /* HKObjectType_HKAdditions_h */