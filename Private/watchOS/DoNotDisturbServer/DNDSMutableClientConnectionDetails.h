//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSMutableClientConnectionDetails_h
#define DNDSMutableClientConnectionDetails_h
@import Foundation;

#include "DNDSClientConnectionDetails.h"

@class NSSet, NSUUID;

@interface DNDSMutableClientConnectionDetails : DNDSClientConnectionDetails

@property (copy, @dynamic, nonatomic) NSUUID *interruptionInvalidationAssertionUUID;
@property (copy, @dynamic, nonatomic) NSSet *assertionUpdateClientIdentifiers;
@property (copy, @dynamic, nonatomic) NSSet *activeAssertionUpdateClientIdentifiers;
@property (@dynamic, nonatomic) BOOL wantsStateUpdates;
@property (@dynamic, nonatomic) BOOL wantsSettingsUpdates;
@property (@dynamic, nonatomic) BOOL wantsModeUpdates;
@property (@dynamic, nonatomic) BOOL wantsActiveModeUpdates;
@property (@dynamic, nonatomic) BOOL wantsGlobalConfigurationUpdates;
@property (@dynamic, nonatomic) BOOL wantsMeDeviceStateUpdates;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* DNDSMutableClientConnectionDetails_h */