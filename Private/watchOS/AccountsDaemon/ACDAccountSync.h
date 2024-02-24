//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 956.0.0.0.0
//
#ifndef ACDAccountSync_h
#define ACDAccountSync_h
@import Foundation;

@class ACAccountStore, NSTimer;
@protocol OS_dispatch_queue;

@interface ACDAccountSync : NSObject {
  /* instance variables */
  int _circleToken;
  int _keychainToken;
  NSTimer *_timer;
  NSObject<OS_dispatch_queue> *_syncQueue;
  BOOL _enabled;
  BOOL _duchessEnabled;
  ACAccountStore *_store;
}

/* class methods */
+ (id)sharedAccountSyncServer;
+ (id)accountSyncUnsupportedTypes;
+ (id)accountSyncSupportedTypes;
+ (id)accountSyncPropertiesForAccount:(id)account;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)setupAccountSync;
- (BOOL)checkCircleState;
@end

#endif /* ACDAccountSync_h */