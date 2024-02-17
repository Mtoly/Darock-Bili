//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDRemoteEventRouterServerMessageReceiver_h
#define HMDRemoteEventRouterServerMessageReceiver_h
@import Foundation;

#include "HMDRemoteEventRouterServer.h"
#include "HMFMessageReceiver-Protocol.h"

@class NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDRemoteEventRouterServerMessageReceiver : NSObject<HMFMessageReceiver> {
  /* instance variables */
  NSUUID *_uuid;
  NSObject<OS_dispatch_queue> *_queue;
  HMDRemoteEventRouterServer *_server;
}

@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)handleRequestMessage:(id)message;
@end

#endif /* HMDRemoteEventRouterServerMessageReceiver_h */