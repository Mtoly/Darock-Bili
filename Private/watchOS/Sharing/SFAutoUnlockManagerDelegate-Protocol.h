//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFAutoUnlockManagerDelegate_Protocol_h
#define SFAutoUnlockManagerDelegate_Protocol_h
@import Foundation;

@protocol SFAutoUnlockManagerDelegate <NSObject>
@optional
/* instance methods */
- (void)manager:(id)manager enablingLockedDevice:(id)device;
- (void)manager:(id)manager didEnableDevice:(id)device;
- (void)manager:(id)manager failedToEnableDevice:(id)device error:(id)error;
- (void)manager:(id)manager beganAttemptWithDevice:(id)device;
- (void)manager:(id)manager completedUnlockWithDevice:(id)device;
- (void)manager:(id)manager failedAttemptWithError:(id)error;
- (void)manager:(id)manager deviceRequestedRelock:(id)relock;
@end

#endif /* SFAutoUnlockManagerDelegate_Protocol_h */