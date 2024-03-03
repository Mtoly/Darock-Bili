//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2253.0.0.0.0
//
#ifndef MCUserNotificationQueueEntry_h
#define MCUserNotificationQueueEntry_h
@import Foundation;

@class NSString;

@interface MCUserNotificationQueueEntry : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *defaultButtonText;
@property (retain, nonatomic) NSString *alternateButtonText;
@property (retain, nonatomic) NSString *otherButtonText;
@property (retain, nonatomic) NSString *textfieldPlaceholder;
@property (nonatomic) BOOL displayOnLockScreen;
@property (nonatomic) BOOL dismissOnLock;
@property (nonatomic) BOOL displayInAppWhitelistModes;
@property (nonatomic) double dismissAfterTimeInterval;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) id notification;
@property (retain, nonatomic) NSString *identifier;

/* instance methods */
@end

#endif /* MCUserNotificationQueueEntry_h */