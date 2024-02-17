//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFLocationManagerDispatcher_h
#define HFLocationManagerDispatcher_h
@import Foundation;

#include "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NAFuture, NSHashTable, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface HFLocationManagerDispatcher : NSObject<CLLocationManagerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) NSHashTable *locationObservers;
@property (readonly, nonatomic) NSMutableArray *pendingAuthorizationStatusFutures;
@property (nonatomic) int cachedAuthorizationStatus;
@property (nonatomic) BOOL hasInitializedAuthorizationStatus;
@property (readonly, nonatomic) int authorizationStatus;
@property (readonly, nonatomic) NAFuture *authorizationStatusFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedDispatcher;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)getAuthorizationStatusAsync;
- (void)_updateCachedAuthorizationStatus:(int)status;
- (void)triggerLocationFetch;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)dispatchLocationManagerObserverMessage:(SEL)message withBlock:(id /* block */)block sender:(id)sender;
- (void)locationManager:(id)manager didUpdateLocations:(id)locations;
- (void)locationManager:(id)manager didUpdateHeading:(id)heading;
- (void)locationManager:(id)manager didDetermineState:(long long)state forRegion:(id)region;
- (void)locationManager:(id)manager didRangeBeacons:(id)beacons inRegion:(id)region;
- (void)locationManager:(id)manager rangingBeaconsDidFailForRegion:(id)region withError:(id)error;
- (void)locationManager:(id)manager didEnterRegion:(id)region;
- (void)locationManager:(id)manager didExitRegion:(id)region;
- (void)locationManager:(id)manager didFailWithError:(id)error;
- (void)locationManager:(id)manager monitoringDidFailForRegion:(id)region withError:(id)error;
- (void)locationManagerDidChangeAuthorization:(id)authorization;
- (void)locationManager:(id)manager didStartMonitoringForRegion:(id)region;
- (void)locationManagerDidPauseLocationUpdates:(id)updates;
- (void)locationManagerDidResumeLocationUpdates:(id)updates;
- (void)locationManager:(id)manager didFinishDeferredUpdatesWithError:(id)error;
- (void)_authorizeHomeKitLocationServices;
- (void)_updateMacAuthorizationStatus:(int)status;
@end

#endif /* HFLocationManagerDispatcher_h */