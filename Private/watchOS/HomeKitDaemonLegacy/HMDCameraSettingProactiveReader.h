//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCameraSettingProactiveReader_h
#define HMDCameraSettingProactiveReader_h
@import Foundation;

#include "HMFObject.h"
#include "HMDAccessory.h"
#include "HMDCameraSettingProactiveReaderDelegate-Protocol.h"
#include "HMFLogging-Protocol.h"

@class HMCameraStreamPreferences, HMFMessage, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface HMDCameraSettingProactiveReader : HMFObject<HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSString *sessionID;
@property (weak) HMDAccessory *accessory;
@property (readonly) NSSet *streamControlMessageHandlers;
@property (readonly) HMCameraStreamPreferences *streamPreferences;
@property (readonly) NSString *logIdentifier;
@property (retain) HMFMessage *pendingMessage;
@property (weak) NSObject<HMDCameraSettingProactiveReaderDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_streamingStatusForResponse:(id)response;
+ (id)logCategory;

/* instance methods */
- (id)initWithWorkQueue:(id)queue sessionID:(id)id accessory:(id)accessory message:(id)message streamControlMessageHandlers:(id)handlers streamPreferences:(id)preferences logIdentifier:(id)identifier;
- (BOOL)hasPendingNegotiateMessageForSessionWithIdentifier:(id)identifier;
- (void)handleMessage:(id)message;
- (void)readSetting;
- (void)_handleStreamStatusMultireadResponse:(id)response;
- (id)_availableStreamControlMessageHandlersForReadResponses:(id)responses;
- (id)_inUseStreamControlMessageHandlersForReadResponses:(id)responses;
- (void)_callDidCompleteReadDelegateCallback;
@end

#endif /* HMDCameraSettingProactiveReader_h */