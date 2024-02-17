//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDGymKitSettings_h
#define HDGymKitSettings_h
@import Foundation;

#include "HDDataObserver-Protocol.h"
#include "HDDatabaseProtectedDataObserver-Protocol.h"
#include "HDGymKitSettingsDelegate-Protocol.h"
#include "HDProfile.h"
#include "HDProfileReadyObserver-Protocol.h"
#include "NRDevicePropertyObserver-Protocol.h"

@class NRDevice, NSString;
@protocol OS_dispatch_queue;

@interface HDGymKitSettings : NSObject<HDDatabaseProtectedDataObserver, HDDataObserver, NRDevicePropertyObserver, HDProfileReadyObserver> {
  /* instance variables */
  HDProfile *_profile;
  NSObject<OS_dispatch_queue> *_queue;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  int _privacyNotificationToken;
  NRDevice *_currentDevice;
  BOOL _hasRunProtectedDataCheck;
}

@property (readonly, nonatomic) unsigned long long nfcPermission;
@property (readonly, nonatomic) BOOL fitnessTrackingEnabled;
@property (weak, nonatomic) NSObject<HDGymKitSettingsDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProfile:(id)profile queue:(id)queue;
- (void)dealloc;
- (void)profileDidBecomeReady:(id)ready;
- (void)database:(id)database protectedDataDidBecomeAvailable:(BOOL)available;
- (void)samplesAdded:(id)added anchor:(id)anchor;
- (void)device:(id)device propertyDidChange:(id)change fromValue:(id)value;
- (void)unitTest_simulateNRDeviceUpdate;
- (BOOL)isLowPowerModeEnabled;
- (void)_setNFCAlwaysOnPreferenceIfNecessary;
@end

#endif /* HDGymKitSettings_h */