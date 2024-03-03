//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFRemoteExecutionCoordinator_h
#define WFRemoteExecutionCoordinator_h
@import Foundation;

#include "IDSServiceDelegate-Protocol.h"
#include "WFRemoteExecutionSessionDelegate-Protocol.h"

@class IDSService, NSMapTable, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface WFRemoteExecutionCoordinator : NSObject<WFRemoteExecutionSessionDelegate, IDSServiceDelegate>

@property (retain, nonatomic) NSMutableArray *activeSessions;
@property (retain, nonatomic) NSMapTable *completionsForSessions;
@property (retain, nonatomic) IDSService *service;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BOOL allowRunRequests;
@property (readonly, nonatomic) NSString *pairedDeviceModelIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedCoordinator;

/* instance methods */
- (id)initAndAllowRunRequests:(BOOL)requests;
- (void)cancelAllSessions;
- (void)cancelPendingFileTransfers;
- (void)cancelSessions:(id)sessions;
- (void)cancelRequest:(id)request;
- (id)sessionFromRequestIdentifier:(id)identifier;
- (void)sendRunRequest:(id)request userInterface:(id)interface parameterInputProvider:(id)provider completionHandler:(id /* block */)handler;
- (void)handleRunRequestResponse:(id)response service:(id)service account:(id)account fromID:(id)id context:(id)context;
- (void)handleAlertRequest:(id)request service:(id)service account:(id)account fromID:(id)id context:(id)context;
- (BOOL)sendStopRequest:(id)request error:(id *)error;
- (void)handleAskWhenRunRequest:(id)request service:(id)service account:(id)account fromID:(id)id context:(id)context;
- (void)sendAceCommandDictionary:(id)dictionary completion:(id /* block */)completion;
- (void)handleAceCommandResponse:(id)response service:(id)service account:(id)account fromID:(id)id context:(id)context;
- (void)sendDialogRequest:(id)request completion:(id /* block */)completion;
- (void)handleDialogRequestResponse:(id)response service:(id)service account:(id)account fromID:(id)id context:(id)context;
- (void)handleRunRequest:(id)request service:(id)service account:(id)account fromID:(id)id context:(id)context;
- (void)sendRunRequestResponse:(id)response completion:(id /* block */)completion;
- (void)sendAlertRequest:(id)request completion:(id /* block */)completion;
- (void)handleAlertRequestResponse:(id)response service:(id)service account:(id)account fromID:(id)id context:(id)context;
- (void)handleStopRequest:(id)request service:(id)service account:(id)account fromID:(id)id context:(id)context;
- (void)sendAskWhenRunRequest:(id)request completion:(id /* block */)completion;
- (void)handleAskWhenRunRequestResponse:(id)response service:(id)service account:(id)account fromID:(id)id context:(id)context;
- (void)handleIncomingAceCommand:(id)command service:(id)service account:(id)account fromID:(id)id context:(id)context;
- (void)handleDialogRequest:(id)request service:(id)service account:(id)account fromID:(id)id context:(id)context;
- (void)sendFileAtURL:(id)url transferIdentifier:(id)identifier requestIdentifier:(id)identifier error:(id *)error;
- (void)service:(id)service account:(id)account incomingResourceAtURL:(id)url metadata:(id)metadata fromID:(id)id context:(id)context;
- (id)unknownRequestMessageWithIdentifier:(id)identifier;
- (void)service:(id)service account:(id)account incomingUnhandledProtobuf:(id)protobuf fromID:(id)id context:(id)context;
- (void)service:(id)service account:(id)account incomingMessage:(id)message fromID:(id)id context:(id)context;
- (id)unknownRequestError;
- (void)handleUnknownRequestMessage:(id)message;
- (id)sessionsOfClass:(Class)class;
- (void)sessionDidFinish:(id)finish;
- (void)finishSessionWithRequest:(id)request;
- (BOOL)messageCameFromPairedDevice:(id)device;
- (BOOL)shouldDropMessageDueToStaleness:(id)staleness;
- (BOOL)hasPairedDevice;
- (id)pairedDevice;
- (void)service:(id)service account:(id)account identifier:(id)identifier didSendWithSuccess:(BOOL)success error:(id)error;
- (id)defaultIDSOptions;
- (void)mapSelectorsForIncomingProtobuf;
@end

#endif /* WFRemoteExecutionCoordinator_h */