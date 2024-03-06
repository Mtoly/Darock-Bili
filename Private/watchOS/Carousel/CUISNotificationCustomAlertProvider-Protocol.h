//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CUISNotificationCustomAlertProvider_Protocol_h
#define CUISNotificationCustomAlertProvider_Protocol_h
@import Foundation;

@protocol CUISNotificationCustomAlertProvider <CUISAlertProvider>
/* instance methods */
- (BOOL)wantsAlertForNotification:(id)notification;
- (void)addNotification:(id)notification;
- (void)addNotification:(id)notification replaceNotification:(id)notification;
- (void)modifyNotification:(id)notification;
- (void)removeNotification:(id)notification;
@optional
/* instance methods */
- (void)setNotificationProviderDelegate:(id)delegate;
- (void)noteNotificationsInvalidated;
- (void)activateAlertForNotification:(id)notification completion:(id /* block */)completion;
- (void)visibilityUpdatedForBundleIdentifier:(id)identifier visible:(BOOL)visible;
@end

#endif /* CUISNotificationCustomAlertProvider_Protocol_h */