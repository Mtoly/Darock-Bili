//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CUISNotificationNCCellFactoryDelegate_Protocol_h
#define CUISNotificationNCCellFactoryDelegate_Protocol_h
@import Foundation;

@protocol CUISNotificationNCCellFactoryDelegate <NSObject>
/* instance methods */
- (void)cellFactory:(id)factory didUpdateSupportedSectionIDs:(id)ids;
- (void)cellFactory:(id)factory requestDismissNotification:(id)notification;
- (void)cellFactory:(id)factory requestReloadCellsForNotifications:(id /* block */)notifications;
@end

#endif /* CUISNotificationNCCellFactoryDelegate_Protocol_h */