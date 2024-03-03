//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STMutableTelephonyStatusDomainSIMInfo_h
#define STMutableTelephonyStatusDomainSIMInfo_h
@import Foundation;

#include "STTelephonyStatusDomainSIMInfo.h"
#include "STMutableStatusDomainData-Protocol.h"
#include "STMutableStatusDomainDataDifferencing-Protocol.h"

@class NSString;

@interface STMutableTelephonyStatusDomainSIMInfo : STTelephonyStatusDomainSIMInfo<STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (@dynamic, nonatomic) BOOL SIMPresent;
@property (@dynamic, nonatomic) BOOL bootstrap;
@property (copy, @dynamic, nonatomic) NSString *label;
@property (copy, @dynamic, nonatomic) NSString *shortLabel;
@property (@dynamic, nonatomic) unsigned long long signalStrengthBars;
@property (@dynamic, nonatomic) unsigned long long maxSignalStrengthBars;
@property (@dynamic, nonatomic) unsigned long long serviceState;
@property (@dynamic, nonatomic) unsigned long long cellularServiceState;
@property (copy, @dynamic, nonatomic) NSString *serviceDescription;
@property (copy, @dynamic, nonatomic) NSString *secondaryServiceDescription;
@property (@dynamic, nonatomic) unsigned long long dataNetworkType;
@property (@dynamic, nonatomic) BOOL providingDataConnection;
@property (@dynamic, nonatomic) BOOL preferredForDataConnections;
@property (@dynamic, nonatomic) BOOL registeredWithoutCellular;
@property (@dynamic, nonatomic) BOOL callForwardingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)applyDiff:(id)diff;
@end

#endif /* STMutableTelephonyStatusDomainSIMInfo_h */