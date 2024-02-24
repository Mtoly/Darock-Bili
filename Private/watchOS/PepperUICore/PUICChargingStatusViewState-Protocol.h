//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICChargingStatusViewState_Protocol_h
#define PUICChargingStatusViewState_Protocol_h
@import Foundation;

#include "PUICChargingStatusViewState-Protocol.h"
#include "_PUICChargingIndicatorView.h"
#include "_PUICChargingIndicatorViewDataSource-Protocol.h"

@class NSString;

@protocol PUICChargingStatusViewState <PUICStatusViewMutableState>

@property (nonatomic) BOOL iconShadow;
@property (nonatomic) BOOL showChargingPercentage;
@property (nonatomic) float batteryChargedLevel;

/* instance methods */
- (BOOL)isShowingChargingPercentage;
@end

#endif /* PUICChargingStatusViewState_Protocol_h */