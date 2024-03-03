//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKHeartbeatSeriesFeatureStatusManager_h
#define HKHeartbeatSeriesFeatureStatusManager_h
@import Foundation;

#include "HKHeartbeatSeriesFeatureStatusManagerClient-Protocol.h"
#include "_HKXPCExportable-Protocol.h"

@class HKHealthStore, HKObserverSet, HKTaskServerProxyProvider, NSString, NSUserDefaults;

@interface HKHeartbeatSeriesFeatureStatusManager : NSObject<HKHeartbeatSeriesFeatureStatusManagerClient, _HKXPCExportable> {
  /* instance variables */
  HKHealthStore *_healthStore;
  HKObserverSet *_observers;
  HKTaskServerProxyProvider *_proxyProvider;
  NSUserDefaults *_heartNotificationsUserDefaults;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)taskIdentifier;

/* instance methods */
- (id)initWithHealthStore:(id)store;
- (id)initWithHealthStore:(id)store heartNotificationsUserDefaults:(id)defaults;
- (void)dealloc;
- (void)registerObserver:(id)observer queue:(id)queue;
- (void)registerObserver:(id)observer queue:(id)queue activationHandler:(id /* block */)handler;
- (void)unregisterObserver:(id)observer;
- (void)_startObservingWithActivationHandler:(id /* block */)handler;
- (id)_synchronouslyStartObservingWithError:(id *)error;
- (void)_handleAutomaticProxyReconnection;
- (void)_startObservingHeartNotificationsUserDefaults;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)_updateAndNotifyAllObservers;
- (void)client_heartbeatSeriesFeatureStatusManagerDidUpdatePredominantFeature:(long long)feature;
- (void)client_heartbeatSeriesFeatureStatusManagerDidFailToUpdateWithError:(id)error;
- (void)_notifyObserversForPredominantFeatureUpdate:(long long)update;
- (void)_notifyObserversForFailureToUpdateWithError:(id)error;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)remoteInterface;
@end

#endif /* HKHeartbeatSeriesFeatureStatusManager_h */