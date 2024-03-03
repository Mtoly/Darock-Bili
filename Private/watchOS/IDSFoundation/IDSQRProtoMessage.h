//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSQRProtoMessage_h
#define IDSQRProtoMessage_h
@import Foundation;

#include "IDSQRProtoH3Message.h"

@interface IDSQRProtoMessage : NSObject {
  /* instance variables */
  IDSQRProtoH3Message *_message;
}

@property (nonatomic) unsigned long long transactionID;
@property (nonatomic) double startTime;
@property (readonly, nonatomic) int messageType;

/* class methods */
+ (id)dataWithEmptyUnAllocBindResponse;

/* instance methods */
- (id)initWithType:(int)type candidatePair:(id)pair options:(id)options;
- (BOOL)_setupAllocbindRequest:(id)request candidatePair:(id)pair options:(id)options;
- (BOOL)_setupInfoRequest:(id)request candidatePair:(id)pair options:(id)options;
- (BOOL)_setupParticipantUpdateRequest:(id)request candidatePair:(id)pair options:(id)options;
- (BOOL)_setupRegisterRequest:(id)request candidatePair:(id)pair options:(id)options;
- (BOOL)_setupRegisterAckRequest:(id)request candidatePair:(id)pair options:(id)options;
- (BOOL)_setupPluginControlRequest:(id)request candidatePair:(id)pair options:(id)options;
- (BOOL)_setupSessionInfoRequest:(id)request candidatePair:(id)pair options:(id)options;
- (BOOL)_setupPutmaterialRequest:(id)request candidatePair:(id)pair options:(id)options;
- (BOOL)_setupStatsRequest:(id)request candidatePair:(id)pair options:(id)options;
- (BOOL)_setupTestRequest:(id)request candidatePair:(id)pair options:(id)options;
- (BOOL)_setupUnallocbindRequest:(id)request candidatePair:(id)pair options:(id)options;
- (id)initWithData:(id)data;
- (id)allocbindResponse;
- (id)infoResponse;
- (id)participantUpdateResponse;
- (id)pluginControlResponse;
- (id)sessionInfoResponse;
- (id)getMaterialResponse;
- (id)putMaterialResponse;
- (id)statsResponse;
- (id)testResponse;
- (id)unallocbindResponse;
- (id)diagnosticIndication;
- (id)errorIndication;
- (id)goAwayIndication;
- (id)participantUpdateIndication;
- (id)pluginControlIndication;
- (id)reallocateIndication;
- (id)sessionInfoIndication;
- (id)putMaterialIndication;
- (id)registerIndication;
- (id)registerResponse;
- (id)data;
@end

#endif /* IDSQRProtoMessage_h */