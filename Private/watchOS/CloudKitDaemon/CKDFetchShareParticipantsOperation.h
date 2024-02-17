//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDFetchShareParticipantsOperation_h
#define CKDFetchShareParticipantsOperation_h
@import Foundation;

#include "CKDOperation.h"
#include "CKDPublicIdentityLookupRequest.h"

@class NSArray;
@protocol CKFetchShareParticipantsOperationCallbacks;

@interface CKDFetchShareParticipantsOperation : CKDOperation

@property (retain, nonatomic) CKDPublicIdentityLookupRequest *pendingRequest;
@property (retain, nonatomic) NSArray *userIdentityLookupInfos;
@property (retain, @dynamic, nonatomic) NSObject<CKFetchShareParticipantsOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ shareParticipantFetchedBlock;

/* instance methods */
- (id)initWithOperationInfo:(id)info container:(id)container;
- (id)activityCreate;
- (void)_handleFetchedInfo:(id)info withIdentity:(id)identity error:(id)error;
- (int)operationType;
- (void)_fetchIdentities;
- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)error;
- (void)finishWithError:(id)error;
@end

#endif /* CKDFetchShareParticipantsOperation_h */