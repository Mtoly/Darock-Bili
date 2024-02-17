//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDSharedHomeUpdateSession_h
#define HMDSharedHomeUpdateSession_h
@import Foundation;

#include "HMDHome.h"
#include "HMDSharedHomeUpdateSessionDelegate-Protocol.h"
#include "HMFDumpState-Protocol.h"
#include "HMFLogging-Protocol.h"
#include "HMFTimerDelegate-Protocol.h"

@class HMFMessageDispatcher, HMFTimer, NSDictionary, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDSharedHomeUpdateSession : NSObject<HMFLogging, HMFTimerDelegate, HMFDumpState> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_workQueue;
  HMDHome *_home;
  NSDictionary *_messagePayload;
  HMFMessageDispatcher *_messageDispatcher;
  HMFTimer *_timer;
  unsigned long long _retryCount;
  double _currentTimerValue;
}

@property (readonly, nonatomic) NSString *homeIdentifier;
@property (readonly, nonatomic) NSUUID *sessionID;
@property (readonly, weak, nonatomic) NSObject<HMDSharedHomeUpdateSessionDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithHome:(id)home delegate:(id)delegate workQueue:(id)queue messagePayload:(id)payload messageDispatcher:(id)dispatcher;
- (void)dealloc;
- (id)logIdentifier;
- (void)requestDataSync;
- (void)timerDidFire:(id)fire;
- (id)dumpState;
@end

#endif /* HMDSharedHomeUpdateSession_h */