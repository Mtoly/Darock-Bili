//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFAbstractRangeStatusItem_h
#define HFAbstractRangeStatusItem_h
@import Foundation;

#include "HFStatusItem.h"
#include "HFServiceLikeStatusItem-Protocol.h"

@interface HFAbstractRangeStatusItem : HFStatusItem<HFServiceLikeStatusItem>
/* class methods */
+ (unsigned long long)statusItemCategory;
+ (id)serviceTypes;
+ (id)controllableServiceTypes;
+ (id)sensorServiceTypes;
+ (id)currentValueCharacteristicType;
+ (id)targetValueCharacteristicType;
+ (id)minimumTargetValueCharacteristicType;
+ (id)maximumTargetValueCharacteristicType;
+ (id)currentModeCharacteristicTypes;
+ (id)targetModeCharacteristicTypes;
+ (id)unknownValueDescriptionString;
+ (id)overrideValueDisplayRange;
+ (id /* block */)displayValueComparator;
+ (id)customValueFormatter;
+ (unsigned long long)abstractTargetModeInResponse:(id)response;
+ (unsigned long long)abstractCurrentModeInResponse:(id)response;
+ (BOOL)isPercentRange;
+ (BOOL)shouldShowAverageForRange:(id)range;
+ (id)valueRangeForCharacteristicType:(id)type withResponses:(id)responses;
+ (id)descriptionStringForCharacteristicType:(id)type withResponses:(id)responses;
+ (id)formatValue:(id)value forCharacteristic:(id)characteristic;
+ (id)_defaultValueFormatter;
+ (id)titleStringForState:(long long)state;
+ (long long)currentStateForResponses:(id)responses;
+ (unsigned long long)badgeTypeForState:(long long)state;

/* instance methods */
- (id)iconDescriptorForRepresentedHomeKitObjects:(id)objects;
- (id)_subclass_updateWithOptions:(id)options;
@end

#endif /* HFAbstractRangeStatusItem_h */