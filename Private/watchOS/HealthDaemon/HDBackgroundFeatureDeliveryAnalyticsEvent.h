//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDBackgroundFeatureDeliveryAnalyticsEvent_h
#define HDBackgroundFeatureDeliveryAnalyticsEvent_h
@import Foundation;

#include "HKAnalyticsEvent-Protocol.h"

@class NSString;

@interface HDBackgroundFeatureDeliveryAnalyticsEvent : NSObject<HKAnalyticsEvent> {
  /* instance variables */
  NSString *_featureIdentifier;
  NSString *_eventType;
  NSString *_countryCode;
  long long _countryCodeProvenance;
  NSString *_errorCategory;
  NSString *_errorDetail;
}

@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

/* instance methods */
- (id)initWithFeatureIdentifier:(id)identifier eventType:(id)type countryCode:(id)code countryCodeProvenance:(long long)provenance errorCategory:(id)category errorDetail:(id)detail;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)source error:(id *)error;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)source error:(id *)error;
@end

#endif /* HDBackgroundFeatureDeliveryAnalyticsEvent_h */