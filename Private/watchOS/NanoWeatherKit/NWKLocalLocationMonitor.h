//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 949.0.0.0.0
//
#ifndef NWKLocalLocationMonitor_h
#define NWKLocalLocationMonitor_h
@import Foundation;

#include "NWKForecastManager.h"
#include "NWKForecastManagerObservable-Protocol.h"
#include "NWKMonitor-Protocol.h"

@class NSString, NSTimer, WFLocation;
@protocol NWKLocalLocationMonitorDelegate;

@interface NWKLocalLocationMonitor : NSObject<NWKForecastManagerObservable, NWKMonitor> {
  /* instance variables */
  int _notifyNanoWeatherLocalLocationUpdatedToken;
}

@property (weak, nonatomic) NSObject<NWKLocalLocationMonitorDelegate> *delegate;
@property (nonatomic) BOOL monitoring;
@property (retain, nonatomic) NWKForecastManager *forecastManager;
@property (retain, nonatomic) WFLocation *localLocation;
@property (retain, nonatomic) NSTimer *reconnectTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)pause;
- (void)resume;
- (void)_addNotifyObservers;
- (void)_invalidateReconnectTimer;
- (void)_reconnectTimerFired;
- (void)_removeNotifyObservers;
- (void)_updateLocalLocationWithLocation:(id)location;
- (void)managerReceivedLocationConnectionInterrupt:(id)interrupt;
- (void)manager:(id)manager updatedDisplayName:(id)name forLocation:(id)location;
- (void)manager:(id)manager updatedLocalLocationFrom:(id)from to:(id)to;
- (void)manager:(id)manager updatedTimeZone:(id)zone forLocation:(id)location;
- (BOOL)isMonitoring;
@end

#endif /* NWKLocalLocationMonitor_h */