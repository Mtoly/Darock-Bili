//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4416.36.0.0.0
//
#ifndef SBSLockScreenServiceConnection_h
#define SBSLockScreenServiceConnection_h
@import Foundation;

@class BSServiceConnection, NSCountedSet;

@interface SBSLockScreenServiceConnection : NSObject {
  /* instance variables */
  BSServiceConnection *_connection;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSCountedSet *_lock_preventPasscodeLockReasons;
  NSCountedSet *_lock_preventSpuriousScreenUndimReasons;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)launchEmergencyDialerWithCompletion:(id /* block */)completion;
- (void)requestPasscodeUnlockUIWithOptions:(id)options withCompletion:(id /* block */)completion;
- (void)requestPasscodeCheckUIWithOptions:(id)options withCompletion:(id /* block */)completion;
- (id)preventPasscodeLockWithReason:(id)reason;
- (id)preventSpuriousScreenUndimWithReason:(id)reason;
- (void)lockDeviceAnimated:(BOOL)animated withCompletion:(id /* block */)completion;
@end

#endif /* SBSLockScreenServiceConnection_h */