//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDBackgroundWorkoutRunner_h
#define HDBackgroundWorkoutRunner_h
@import Foundation;

#include "HDAssertionObserver-Protocol.h"
#include "HDDaemon.h"
#include "HDProcessStateObserver-Protocol.h"

@class HDAssertionManager, NSString;
@protocol OS_dispatch_queue;

@interface HDBackgroundWorkoutRunner : NSObject<HDProcessStateObserver, HDAssertionObserver> {
  /* instance variables */
  HDDaemon *_daemon;
  HDAssertionManager *_assertionManager;
  NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)hasBackgroundPermissionForBundleIdentifier:(id)identifier errorOut:(id *)out;
+ (id)acquireBKSAssertionForClient:(id)client;
+ (void)releaseBKSAssertion:(id)bksassertion forClient:(id)client;

/* instance methods */
- (id)initWithDaemon:(id)daemon;
- (void)dealloc;
- (id)takeBackgroundRunningAssertionForOwnerIdentifier:(id)identifier client:(id)client includeCoreLocationAssertion:(BOOL)assertion;
- (void)assertionManager:(id)manager assertionTaken:(id)taken;
- (void)assertionManager:(id)manager assertionInvalidated:(id)invalidated;
- (void)processDidEnterForeground:(id)foreground;
@end

#endif /* HDBackgroundWorkoutRunner_h */