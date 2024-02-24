//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOAPServiceManager_h
#define GEOAPServiceManager_h
@import Foundation;

#include "GEOAPServiceProxy-Protocol.h"

@class NSString, geo_isolater;

@interface GEOAPServiceManager : NSObject<GEOAPServiceProxy> {
  /* instance variables */
  geo_isolater *_evInfoIsolator;
  NSObject<GEOAPServiceProxy> *_proxy;
  id _evDirectionsFeedbackAllowedListener;
  id _evDirectionsFeedbackAuthListener;
}

@property (readonly, nonatomic) BOOL evDirectionsFeedbackAuth;
@property (nonatomic) BOOL evDirectionsFeedbackAllowed;
@property (nonatomic) BOOL directionsFeedbackAllowed;
@property (readonly, nonatomic) BOOL evalModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)useProxyClass:(Class)class;
+ (id)sharedManager;

/* instance methods */
- (void)updateSharedStateType:(int)type state:(id)state;
- (void)updateSharedStateType:(int)type state:(id)state completion:(id /* block */)completion completionQueue:(id)queue;
- (void)reportCuratedCollectionWasViewedWithId:(unsigned long long)id completion:(id /* block */)completion completionQueue:(id)queue;
- (void)reportDailySettings:(id)settings;
- (void)reportDailySettings:(id)settings completionQueue:(id)queue completion:(id /* block */)completion;
- (void)processMapsDeletionWithCompletionQueue:(id)queue completion:(id /* block */)completion;
- (id)init;
- (void)dealloc;
- (void)reportLogMsg:(id)msg uploadBatchId:(unsigned long long)id completionQueue:(id)queue completion:(id /* block */)completion;
- (void)reportDailyUsageCountType:(int)type;
- (void)reportDailyUsageCountType:(int)type usageString:(id)string usageBool:(id)bool appId:(id)id;
- (void)reportDailyUsageCountType:(int)type usageString:(id)string usageBool:(id)bool appId:(id)id completion:(id /* block */)completion;
- (void)reportDailyUsageCountType:(int)type usageString:(id)string usageBool:(id)bool appId:(id)id queue:(id)queue completion:(id /* block */)completion;
- (void)reportLogMsg:(id)msg uploadBatchId:(unsigned long long)id completion:(id /* block */)completion;
- (void)flushEvalData;
- (void)runAggregationTasks;
- (void)setEvalMode:(BOOL)mode;
- (void)showEvalDataWithVisitorBlock:(id /* block */)block;
- (BOOL)AppleInternal;
- (BOOL)platformDiagAndUsage;
- (BOOL)platformDiagAndUsageOrAppleInternal;
- (void)logToDiagAndUsageUnderBugId:(id)id filePrefix:(id)prefix logData:(id)data;
- (void)toggleEVDirectionsFeedbackAllowed;
@end

#endif /* GEOAPServiceManager_h */