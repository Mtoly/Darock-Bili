//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 707.0.47.0.0
//
#ifndef SRAuthorizationStore_h
#define SRAuthorizationStore_h
@import Foundation;

#include "SRTCCStore-Protocol.h"

@class NSDictionary, NSHashTable, NSSet;
@protocol OS_dispatch_queue;

@interface SRAuthorizationStore : NSObject {
  /* instance variables */
  int _notifyToken;
  NSHashTable *_readerAuthorizationDelegates;
  NSHashTable *_writerAuthorizationDelegates;
  NSObject<SRTCCStore> *_tccStore;
  NSSet *_sensors;
}

@property (copy) NSDictionary *readerAuthorizationValues;
@property (copy) NSDictionary *readerLastModifiedAuthorizationTimes;
@property (copy) NSDictionary *writerAuthorizationValues;
@property BOOL sensorKitActive;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue;
@property (copy) NSDictionary *readerAuthorizationGroups;
@property (copy) NSDictionary *writerAuthorizationGroups;

/* class methods */
+ (void)initialize;
+ (id)sharedAuthorizationStoreForSensors:(id)sensors;
+ (id)allSensorsStore;

/* instance methods */
- (id)initWithSensors:(id)sensors;
- (void)dealloc;
- (void)listenForAuthorizationUpdates:(BOOL)updates;
- (void)addReaderAuthorizationDelegate:(id)delegate;
- (void)removeReaderAuthorizationDelegate:(id)delegate;
- (void)addWriterAuthorizationDelegate:(id)delegate;
- (void)removeWriterAuthorizationDelegate:(id)delegate;
- (BOOL)sensorHasReaderAuthorization:(id)authorization;
- (BOOL)sensorHasReaderAuthorization:(id)authorization forBundleId:(id)id;
- (void)resetAllAuthorizationsForBundleId:(id)id;
- (void)resetAllAuthorizations;
- (void)resetAuthorizationForService:(id)service bundleId:(id)id;
- (BOOL)setAuthorizationForBundleId:(id)id service:(id)service value:(BOOL)value;
- (BOOL)setAuthorizationForBundleId:(id)id service:(id)service value:(BOOL)value setOverride:(BOOL)override;
- (id)readerAuthorizationBundleIdValues;
- (BOOL)checkAccessForService:(id)service auditToken:(struct { unsigned int x0[8] })token;
@end

#endif /* SRAuthorizationStore_h */