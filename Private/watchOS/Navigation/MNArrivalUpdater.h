//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNArrivalUpdater_h
#define MNArrivalUpdater_h
@import Foundation;

#include "GEOPListStateCapturing-Protocol.h"
#include "MNArrivalRegionTimerDelegate-Protocol.h"
#include "MNEVChargingStateMonitor.h"
#include "MNEVChargingStateMonitorDelegate-Protocol.h"
#include "MNNavigationSessionState.h"
#include "MNNavigationSessionStateListener-Protocol.h"
#include "MNObserverHashTable.h"
#include "MNParkedVehicleDetector.h"
#include "MNParkedVehicleDetectorDelegate-Protocol.h"
#include "_MNArrivalUpdaterDetails.h"
#include "_MNArrivalUpdaterState.h"

@class GEOComposedRoute, GEOComposedRouteLeg, NSMutableArray, NSString;

@interface MNArrivalUpdater : NSObject<GEOPListStateCapturing, MNArrivalRegionTimerDelegate, MNEVChargingStateMonitorDelegate, MNParkedVehicleDetectorDelegate, MNNavigationSessionStateListener> {
  /* instance variables */
  _MNArrivalUpdaterState *_currentState;
  _MNArrivalUpdaterDetails *_details;
  NSMutableArray *_timeoutRegions;
  MNEVChargingStateMonitor *_evChargingStateMonitor;
  MNParkedVehicleDetector *_parkedVehicleDetector;
  unsigned long long _stateCaptureHandle;
}

@property (readonly, nonatomic) MNObserverHashTable *safeDelegate;
@property (readonly, nonatomic) GEOComposedRoute *route;
@property (readonly, nonatomic) GEOComposedRouteLeg *targetLeg;
@property (copy, nonatomic) MNNavigationSessionState *navigationSessionState;
@property (readonly, nonatomic) BOOL isInPreArrivalRegion;
@property (readonly, nonatomic) BOOL isApproachingWaypoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)delegate;
- (void)start;
- (void)stop;
- (void)updateForLocation:(id)location;
- (void)forceDepartureForCurrentLeg:(unsigned long long)leg;
- (void)_updateForParkingDetectionRegion;
- (BOOL)_checkForParkingDetectionRegion;
- (void)_updateTimeoutRegions;
- (void)changeState:(id)state;
- (void)startMonitoringForEV;
- (void)stopMonitoringForEV;
- (void)arrivalRegionTimerDidFire:(id)fire;
- (void)evChargingStateMonitorShouldShowChargingInfo:(id)info;
- (void)evChargingStateMonitor:(id)monitor didReachTargetBatteryCharge:(id)charge;
- (void)evChargingStateMonitor:(id)monitor didChangeChargingState:(BOOL)state;
- (void)parkedVehicleDetectorDidDetectParkedVehicle:(id)vehicle;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x0; char * x1; unsigned int x2; unsigned int x3; } *)hints;
@end

#endif /* MNArrivalUpdater_h */