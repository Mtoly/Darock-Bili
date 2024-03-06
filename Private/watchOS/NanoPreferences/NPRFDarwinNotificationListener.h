//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1108.10.0.0.0
//
#ifndef NPRFDarwinNotificationListener_h
#define NPRFDarwinNotificationListener_h
@import Foundation;

@class NSString;

@interface NPRFDarwinNotificationListener : NSObject

@property (readonly, nonatomic) NSString *notificationName;
@property (copy, nonatomic) id /* block */ callback;
@property (copy, nonatomic) id /* block */ callbackWithUserInfo;

/* instance methods */
- (id)initWithNotificationName:(id)name callback:(id /* block */)callback;
- (id)initWithNotificationName:(id)name callbackWithUserInfo:(id /* block */)info;
- (void)dealloc;
- (void)_listenForNotifications;
- (void)_stopListeningForNotifications;
@end

#endif /* NPRFDarwinNotificationListener_h */