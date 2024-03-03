//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDUserNotificationCenter_h
#define HMDUserNotificationCenter_h
@import Foundation;

#include "HMFObject.h"
#include "HMDUserNotificationCenterDelegate-Protocol.h"
#include "HMDUserNotificationCenterSettingsProviding-Protocol.h"
#include "HMMLogEventSubmitting-Protocol.h"
#include "UNUserNotificationCenterDelegate-Protocol.h"

@class NSString, UNUserNotificationCenter;

@interface HMDUserNotificationCenter : HMFObject<UNUserNotificationCenterDelegate, HMDUserNotificationCenterSettingsProviding>

@property (readonly) UNUserNotificationCenter *userNotificationCenter;
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter;
@property (weak) NSObject<HMDUserNotificationCenterDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithBundleIdentifier:(id)identifier logEventSubmitter:(id)submitter;
- (id)configureWithNotificationCategories:(id)categories;
- (void)setBadgeNumber:(long long)number;
- (void)updateContent:(id)content forNotificationWithRequestIdentifier:(id)identifier;
- (id)showNotificationWithTitle:(id)title body:(id)body threadIdentifier:(id)identifier categoryIdentifier:(id)identifier requestIdentifier:(id)identifier date:(id)date attachments:(id)attachments userInfo:(id)info shouldIgnoreDoNotDisturb:(BOOL)disturb interruptionLevel:(unsigned long long)level logEventTopic:(long long)topic;
- (void)removeNotificationRequestsWithIdentifiers:(id)identifiers;
- (void)fetchAreUserNotificationsEnabledWithCompletion:(id /* block */)completion;
- (void)_showNotification:(id)notification;
- (void)userNotificationCenter:(id)center didReceiveNotificationResponse:(id)response withCompletionHandler:(id /* block */)handler;
- (void)notificationSettingsWithCompletionHandler:(id /* block */)handler;
@end

#endif /* HMDUserNotificationCenter_h */