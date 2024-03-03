//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 473.0.1.0.0
//
#ifndef PKHostPlugIn_h
#define PKHostPlugIn_h
@import Foundation;

#include "PKPlugInCore.h"
#include "NSXPCConnectionDelegate-Protocol.h"
#include "PKCorePlugInProtocol-Protocol.h"
#include "PKHost.h"
#include "PKPlugIn-Protocol.h"
#include "PKPlugInPrivate-Protocol.h"

@class NSArray, NSBundle, NSDate, NSDictionary, NSMutableSet, NSString, NSURL, NSUUID, NSUserDefaults, NSXPCConnection, Protocol;
@protocol OS_dispatch_queue;

@interface PKHostPlugIn : PKPlugInCore<PKPlugInPrivate, NSXPCConnectionDelegate>

@property (retain) PKHost *host;
@property (retain) NSXPCConnection *pluginConnection;
@property (retain) NSObject<OS_dispatch_queue> *_replyQueue;
@property (retain) NSObject<OS_dispatch_queue> *_syncQueue;
@property (retain) NSObject<OS_dispatch_queue> *_startQueue;
@property (retain) NSObject<PKCorePlugInProtocol> *service;
@property (retain) NSObject<PKCorePlugInProtocol> *syncService;
@property (retain) NSUUID *supersedingUUID;
@property (weak) NSObject<PKPlugIn> *supersededBy;
@property (retain) NSUUID *multipleInstanceUUID;
@property (readonly) NSUUID *effectiveUUID;
@property (retain) NSString *serviceExtension;
@property (retain) NSDictionary *discoveryExtensions;
@property (retain) NSArray *sandboxExtensions;
@property (retain) id queuedHostPrincipal;
@property (retain) Protocol *queuedHostProtocol;
@property unsigned long long state;
@property unsigned int useCount;
@property (retain) id plugInPrincipal;
@property (retain) id embeddedPrincipal;
@property (retain) NSBundle *embeddedBundle;
@property (readonly) NSUserDefaults *defaults;
@property BOOL terminating;
@property (retain) NSDate *beganUsingAt;
@property (retain) NSDictionary *sourceForm;
@property (retain) NSDictionary *environment;
@property (readonly) NSMutableSet *requests;
@property (readonly) NSUUID *uuid;
@property (readonly) NSDate *timestamp;
@property (retain) NSDictionary *extensionState;
@property (copy) NSArray *preferredLanguages;
@property (readonly) NSArray *launchPersonas;
@property (copy) NSString *sandboxProfile;
@property (readonly) unsigned int extensionPointPlatform;
@property (readonly) NSString *identifier;
@property (readonly) NSString *version;
@property (readonly) NSURL *url;
@property (readonly) NSURL *containingUrl;
@property (readonly) BOOL onSystemVolume;
@property (readonly) NSDictionary *bundleInfoDictionary;
@property (readonly) NSDictionary *plugInDictionary;
@property (readonly) NSDictionary *attributes;
@property (readonly) NSDictionary *entitlements;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *localizedShortName;
@property (readonly) NSString *localizedContainingName;
@property (readonly) NSDictionary *localizedFileProviderActionNames;
@property long long userElection;
@property (readonly) BOOL spent;
@property (readonly) BOOL active;
@property (copy) id /* block */ notificationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithForm:(id)form host:(id)host;
- (void)updateFromForm:(id)form host:(id)host;
- (void)suspend;
- (void)resume;
- (void)setReplyQueue:(id)queue;
- (void)connection:(id)connection handleInvocation:(id)invocation isReply:(BOOL)reply;
- (void)setHostPrincipal:(id)principal withProtocol:(id)protocol;
- (id)createInstanceWithUUID:(id)uuid;
- (void)beginUsing:(id /* block */)using;
- (void)beginUsingWithSubsystemOptions:(id)options completion:(id /* block */)completion;
- (void)beginUsingRequest:(id)request withSubsystemOptions:(id)options completion:(id /* block */)completion;
- (void)beginUsingRequest:(id)request completion:(id /* block */)completion;
- (BOOL)beginUsingWithError:(id *)error;
- (BOOL)beginUsingWithSubsystemOptions:(id)options error:(id *)error;
- (BOOL)beginUsingRequest:(id)request withSubsystemOptions:(id)options error:(id *)error;
- (BOOL)beginUsingRequest:(id)request error:(id *)error;
- (void)addRequestUUID:(id)uuid;
- (void)startPlugInRequest:(id)request synchronously:(BOOL)synchronously subsystemOptions:(id)options completion:(id /* block */)completion;
- (void)preparePlugInUsingService:(id)service completion:(id /* block */)completion;
- (void)setBootstrapWithSubsystemOptions:(id)options;
- (BOOL)loadExtensions:(id)extensions error:(id *)error;
- (BOOL)isSandboxed;
- (BOOL)useBundle:(id)bundle error:(id *)error;
- (void)endUsing:(id /* block */)using;
- (void)endUsingRequest:(id)request completion:(id /* block */)completion;
- (BOOL)endUsingWithError:(id *)error;
- (BOOL)endUsingRequest:(id)request error:(id *)error;
- (void)unwind:(unsigned long long)unwind force:(BOOL)force;
- (void)messageTraceUsage;
- (void)changeState:(unsigned long long)state;
@end

#endif /* PKHostPlugIn_h */