//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HMEventTrigger_HFDebugging_h
#define HMEventTrigger_HFDebugging_h
@import Foundation;

@interface HMEventTrigger (HFDebugging) <HFTriggerProtocol>
/* class methods */
+ (id)hf_newTriggerWithBuilder:(id)builder inHome:(id)home;
+ (id)hf_allTriggerValuesForCharacteristic:(id)characteristic similarToValue:(id)value;
+ (BOOL)_hf_valueIsValidForCharacteristic:(id)characteristic value:(id)value;
+ (id)hf_representativeTriggerValueForCharacteristic:(id)characteristic similarToValue:(id)value;
+ (id)hf_naturalLanguageNameWithOptions:(id)options events:(id)events;
+ (id)hf_naturalLanguageNameWithOptions:(id)options events:(id)events forUser:(id)user;
+ (id)hf_naturalLanguageNameWithOptions:(id)options events:(id)events recurrences:(id)recurrences;
+ (id)hf_naturalLanguageNameWithOptions:(id)options events:(id)events recurrences:(id)recurrences forUser:(id)user;
+ (id)hf_naturalLanguageNameWithOptions:(id)options region:(id)region forUser:(id)user;
+ (id)hf_naturalLanguageNameWithOptions:(id)options presenceEvent:(id)event;
+ (id)hf_naturalLanguageDescriptionForCharacteristic:(id)characteristic;
+ (id)hf_naturalLanguageNameWithOptions:(id)options characteristics:(id)characteristics triggerValue:(id)value;
+ (id)_hf_naturalLanguageNameWithOptions:(id)options sensorCharacteristics:(id)characteristics triggerValue:(id)value;
+ (id)_hf_alarmNaturalLanguageNameWithNameStringKey:(id)key nameType:(unsigned long long)type thresholdKey:(id)key thresholdValueDescription:(id)description roomName:(id)name actionsDescription:(id)description;
+ (id)_hf_naturalLanguageNameWithOptions:(id)options nonSensorCharacteristics:(id)characteristics triggerValue:(id)value;
+ (id)hf_triggerValueNaturalLanguageDescriptionFormatterWithCharacteristics:(id)characteristics;
+ (id)hf_triggerValueNaturalLanguageDescriptionWithCharacteristics:(id)characteristics triggerValue:(id)value;
+ (id)hf_triggerValueNaturalLanguageDescriptionWithCharacteristics:(id)characteristics triggerValue:(id)value visibleTriggerValues:(id)values;
+ (id)hf_triggerRangeValueNaturalLanguageDescriptionWithCharacteristics:(id)characteristics triggerValueRange:(id)range thresholdValue:(id)value;
+ (id)hf_triggerValueNaturalLanguageDescriptionWithCharacteristics:(id)characteristics triggerValueRange:(id)range thresholdValue:(id)value;
+ (id)hf_localizationKeyForProgrammableSwitchCharacteristic:(id)characteristic value:(id)value;
+ (id)hf_localizedStringForProgrammableSwitchCharacteristic:(id)characteristic value:(id)value;
+ (id)hf_naturalLanguageTurnOffAfterDuration:(id)duration style:(unsigned long long)style;
+ (id)_hf_triggerRangeKeyComponentForRangeType:(unsigned long long)type;
+ (unsigned long long)hf_triggerRangeTypeWithCharacteristics:(id)characteristics triggerValueRange:(id)range thresholdValue:(id)value;
+ (id)_hf_localizedStringOrNilIfNotFoundForKey:(id)key;
+ (id)hf_naturalLanguageDetailsWithRecurrences:(id)recurrences conditions:(id)conditions endEvents:(id)events withOptions:(id)options;
+ (id)_hf_naturalLanguageDetailsSentenceElementsWithRecurrences:(id)recurrences conditions:(id)conditions endEvents:(id)events withOptions:(id)options;

/* instance methods */
- (id)hf_copyAsBuilder;
- (id)hf_updateWithBuilder:(id)builder;
- (id)hf_durationEndEvent;
- (id)hf_effectiveRecurrences;
- (unsigned long long)hf_triggerType;
- (BOOL)hf_isHomeAppCreatedTrigger;
- (id)hf_markTriggerAsHomeAppCreated;
- (id)hf_unmarkTriggerAsHomeAppCreated;
- (id)hf_designateTrigger:(BOOL)trigger;
- (id)hf_characteristicsInEvents;
- (BOOL)hf_requiresConfirmationToRun;
- (BOOL)hf_affectsCharacteristics:(id)characteristics;
- (id)hf_naturalLanguageNameWithHome:(id)home type:(unsigned long long)type;
- (id)hf_naturalLanguageNameWithOptions:(id)options;
- (id)_hf_naturalLanguageDetailsSentenceElementsWithOptions:(id)options;
- (id)hf_stateDumpBuilderWithContext:(id)context;
@end

#endif /* HMEventTrigger_HFDebugging_h */