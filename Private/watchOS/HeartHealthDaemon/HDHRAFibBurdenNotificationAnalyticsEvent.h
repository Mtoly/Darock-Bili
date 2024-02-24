//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDHRAFibBurdenNotificationAnalyticsEvent_h
#define HDHRAFibBurdenNotificationAnalyticsEvent_h
@import Foundation;

#include "HDHRAFibBurdenAnalyticsEventHealthAppNotificationsAuthorizedProvider-Protocol.h"
#include "HDHRAFibBurdenNotificationAnalyticsEventFocusModeDeterminer-Protocol.h"
#include "HKAnalyticsEvent-Protocol.h"

@class HKFeatureStatus, HKHRAFibBurdenNotificationMode, NSString;

@interface HDHRAFibBurdenNotificationAnalyticsEvent : NSObject<HKAnalyticsEvent> {
  /* instance variables */
  HKHRAFibBurdenNotificationMode *_notificationMode;
  HKFeatureStatus *_featureStatus;
  NSObject<HDHRAFibBurdenNotificationAnalyticsEventFocusModeDeterminer> *_focusModeDeterminer;
  NSObject<HDHRAFibBurdenAnalyticsEventHealthAppNotificationsAuthorizedProvider> *_notificationsAuthorizedProvider;
}

@property (readonly, nonatomic) BOOL isEventSubmissionIHAGated;
@property (readonly, nonatomic) NSString *eventName;

/* instance methods */
- (id)initWithNotificationMode:(id)mode featureStatus:(id)status profile:(id)profile;
- (id)initWithNotificationMode:(id)mode featureStatus:(id)status focusModeDeterminer:(id)determiner notificationsAuthorizedProvider:(id)provider;
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)source error:(id *)error;
- (id)makeIHAGatedEventPayloadWithDataSource:(id)source error:(id *)error;
- (id)_notificationTypeStringForType:(long long)type;
@end

#endif /* HDHRAFibBurdenNotificationAnalyticsEvent_h */