//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3301.4.1.0.0
//
#ifndef SiriCoreSiriConnection_h
#define SiriCoreSiriConnection_h
@import Foundation;

#include "SiriCoreSiriBackgroundConnection.h"
#include "SiriCoreSiriBackgroundConnectionDelegate-Protocol.h"
#include "SiriCoreSiriConnection-Protocol.h"

@class NSError, NSMutableArray, NSMutableSet, NSString, NSURL, SAConnectionPolicy;
@protocol OS_dispatch_group, OS_dispatch_queue, SiriCoreSiriConnectionDelegate;

@interface SiriCoreSiriConnection : NSObject<SiriCoreSiriBackgroundConnectionDelegate, SiriCoreSiriConnection> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  BOOL _isCanceled;
  BOOL _sendPings;
  BOOL _isCanceledInternal;
  NSMutableSet *_pendingBackgroundConnections;
  NSMutableSet *_comatoseBackgroundConnections;
  NSMutableSet *_scheduledRoutes;
  SiriCoreSiriBackgroundConnection *_activeBackgroundConnection;
  NSObject<OS_dispatch_group> *_activeConnectionGroup;
  NSMutableArray *_connMethodUsedHistory;
}

@property (copy, nonatomic) SAConnectionPolicy *connectionPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SiriCoreSiriConnectionDelegate> *delegate;
@property (copy, nonatomic) NSURL *url;
@property (nonatomic) BOOL prefersWWAN;
@property (nonatomic) BOOL skipPeer;
@property (nonatomic) BOOL useWiFiHint;
@property (copy, nonatomic) NSError *skipPeerError;
@property (nonatomic) BOOL forceReconnect;
@property (copy, nonatomic) NSString *aceHost;
@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) double timeout;
@property (copy, nonatomic) NSString *assistantIdentifier;
@property (copy, nonatomic) NSString *peerAssistantIdentifier;
@property (copy, nonatomic) NSString *peerType;
@property (copy, nonatomic) NSString *peerVersion;
@property (copy, nonatomic) NSString *productTypePrefix;
@property (nonatomic) BOOL usesProxyConnection;
@property (nonatomic) BOOL deviceIsInWalkaboutExperimentGroup;
@property (nonatomic) BOOL siriConnectionUsesPeerManagedSync;
@property (retain, nonatomic) Class peerProviderClass;
@property (copy, nonatomic) NSString *connectionId;
@property (nonatomic) BOOL imposePolicyBan;

/* instance methods */
- (id)init;
- (id)initWithQueue:(id)queue;
- (void)dealloc;
- (id)_connectionInfoForRoute:(id)route policy:(id)policy;
- (void)_startBackgroundConnectionWithRoute:(id)route policy:(id)policy;
- (void)_scheduleBackgroundConnectionWithRoute:(id)route delay:(double)delay policy:(id)policy;
- (void)start;
- (void)sendCommand:(id)command errorHandler:(id /* block */)handler;
- (void)sendCommands:(id)commands errorHandler:(id /* block */)handler;
- (void)setSendPings:(BOOL)pings;
- (void)barrier:(id /* block */)barrier;
- (void)probeConnection;
- (void)_cancelSynchronously:(id /* block */)synchronously;
- (void)cancelSynchronously:(BOOL)synchronously onQueue:(BOOL)queue completion:(id /* block */)completion;
- (id)analysisInfo;
- (void)getAnalysisInfo:(id /* block */)info;
- (void)getConnectionMetricsSynchronously:(BOOL)synchronously completion:(id /* block */)completion;
- (void)_accessPotentiallyActiveConnections:(id /* block */)connections;
- (void)_waitForActiveConnection:(id /* block */)connection;
- (id)_activeOrAnyPendingConnection;
- (void)_handleLastEventFromBackgroundConnection:(id)connection pendingConnectionExhaustionHandler:(id /* block */)handler;
- (void)siriBackgroundConnection:(id)connection willStartWithConnectionType:(id)type;
- (void)siriBackgroundConnection:(id)connection didOpenWithConnectionType:(id)type routeId:(id)id delay:(double)delay;
- (void)siriBackgroundConnection:(id)connection didReceiveAceObject:(id)object;
- (void)siriBackgroundConnectionDidClose:(id)close;
- (void)siriBackgroundConnection:(id)connection didEncounterError:(id)error analysisInfo:(id)info;
- (void)siriBackgroundConnection:(id)connection didEncounterIntermediateError:(id)error;
- (void)siriBackgroundConnection:(id)connection willStartConnectionWithHTTPHeader:(id)httpheader;
- (void)_recordConnectionMethodForMetrics:(id)metrics;
@end

#endif /* SiriCoreSiriConnection_h */