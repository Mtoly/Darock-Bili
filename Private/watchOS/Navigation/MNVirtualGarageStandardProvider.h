//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNVirtualGarageStandardProvider_h
#define MNVirtualGarageStandardProvider_h
@import Foundation;

#include "MNVirtualGarageProvider-Protocol.h"
#include "MNVirtualGarageProviderDelegate-Protocol.h"
#include "VGVirtualGarageObserver-Protocol.h"

@class NSString, NSTimer, VGVirtualGarage, geo_isolater;
@protocol OS_dispatch_queue;

@interface MNVirtualGarageStandardProvider : NSObject<VGVirtualGarageObserver, MNVirtualGarageProvider> {
  /* instance variables */
  NSObject<MNVirtualGarageProviderDelegate> *_delegate;
  BOOL _isStarted;
  NSObject<OS_dispatch_queue> *_updateQueue;
  NSTimer *_forceUpdateTimer;
  double _forcePeriodicUpdateInterval;
  VGVirtualGarage *_garage;
  geo_isolater *_garageIsolater;
}

@property (weak, nonatomic) NSObject<MNVirtualGarageProviderDelegate> *virtualGarageDelegate;
@property (readonly, nonatomic) unsigned long long vehiclesCount;
@property (readonly, nonatomic) BOOL assumesFullCharge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)startVirtualGarageUpdates;
- (void)stopVirtualGarageUpdates;
- (void)updatedVehicleStateWithHandler:(id /* block */)handler;
- (void)_setVirtualGarage:(id)garage;
- (void)_updateCachedPropertiesForGarage:(id)garage;
- (id)_selectedVehicle;
- (void)_forceVirtualGarageSyncWithHandler:(id /* block */)handler;
- (void)_sendVirtualGarageUpdateForSelectedVehicle:(id)vehicle;
- (void)virtualGarageDidUpdate:(id)update;
@end

#endif /* MNVirtualGarageStandardProvider_h */