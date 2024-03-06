//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 730.8.0.0.0
//
#ifndef CUFileClient_h
#define CUFileClient_h
@import Foundation;

#include "CUActivatable-Protocol.h"
#include "CUFileQuery.h"

@class NSMutableArray, NSNumber, NSString, RPCompanionLinkClient;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUFileClient : NSObject<CUActivatable> {
  /* instance variables */
  BOOL _activateCalled;
  id /* block */ _activateCompletion;
  BOOL _clinkActivated;
  RPCompanionLinkClient *_clinkClient;
  BOOL _invalidateCalled;
  BOOL _invalidateDone;
  unsigned long long _lastRequestTicks;
  NSMutableArray *_queryArray;
  CUFileQuery *_currentQuery;
  NSNumber *_sessionID;
  NSObject<OS_dispatch_source> *_sessionTimer;
  int _state;
  struct LogCategory { int x0; int x1; char * x2; unsigned int x3; char * x4; char * x5; int x6; struct LogCategory * x7; struct LogOutput * x8; struct LogOutput * x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char * x14; struct LogCategoryPrivate * x15; } * _ucat;
}

@property (copy, nonatomic) NSString *destinationID;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *serviceType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)activateWithCompletion:(id /* block */)completion;
- (void)_activateWithCompletion:(id /* block */)completion;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void)performQuery:(id)query;
- (void)_completeQuery:(id)query response:(id)response error:(id)error;
- (void)_reportError:(id)error where:(const char *)where;
- (void)_sendKeepAlive:(double)alive;
- (void)_sendSessionStop;
- (void)_sessionTimerFired;
- (void)_run;
- (void)_runCLinkActivate;
- (void)_runSessionStartRequest;
- (void)_runSessionStartResponse:(id)response error:(id)error;
- (void)_runPrepare;
- (void)_runQueries;
- (void)_runSendQuery:(id)query;
- (void)_runQueryResponse:(id)response query:(id)query error:(id)error;
@end

#endif /* CUFileClient_h */