//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDClientConnection_h
#define HMDClientConnection_h
@import Foundation;

#include "HMFObject.h"
#include "HMDHomeManager.h"
#include "HMFMessageReceiver-Protocol.h"

@class HMFMessageDispatcher, NSMutableArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDClientConnection : HMFObject<HMFMessageReceiver>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMutableArray *commandsBeingExecuted;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithHomeManager:(id)manager queue:(id)queue messageDispatcher:(id)dispatcher;
- (void)_registerForMessages;
- (void)dealloc;
- (void)_handleSiriCommand:(id)command;
- (void)_handleSiriSyncDataRequest:(id)request;
- (void)_handleDaemonRequest:(id)request;
- (void)_handleSiriIntentRequest:(id)request;
- (void)_handleIdmsAccountUsernameModified:(id)modified;
@end

#endif /* HMDClientConnection_h */