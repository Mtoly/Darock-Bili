//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef IOSSHLBatteryStatus_h
#define IOSSHLBatteryStatus_h
@import Foundation;

#include "CSLBatteryStatusLogger-Protocol.h"
#include "IOSSHLBatteryStatusProviding-Protocol.h"
#include "_IOSSHLBatteryNotifySender.h"

@class NSString;

@interface IOSSHLBatteryStatus : NSObject<IOSSHLBatteryStatusProviding> {
  /* instance variables */
  _IOSSHLBatteryNotifySender *_notifySender;
}

@property (nonatomic) BOOL isOnAC;
@property (nonatomic) BOOL isOnACForUI;
@property (nonatomic) BOOL isBatteryCharging;
@property (nonatomic) float batteryCapacity;
@property (nonatomic) BOOL supportsDetailedBatteryCapacity;
@property (nonatomic) BOOL isConnectedToChargeIncapablePowerSource;
@property (nonatomic) BOOL isConnectedToUnsupportedChargingAccessory;
@property BOOL hideACPower;
@property long long lowBatteryLevel;
@property (nonatomic) int chargerFamilyKey;
@property (weak, nonatomic) NSObject<CSLBatteryStatusLogger> *batteryStatusLogger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_loadPreferences;
- (void)_addPreferencesObserver;
- (void)_removePreferencesObserver;
- (void)updateBatteryState:(id)state;
- (void)logTelemetryMetric;
- (int)batteryCapacityAsPercentage;
@end

#endif /* IOSSHLBatteryStatus_h */