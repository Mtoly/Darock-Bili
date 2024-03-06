//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAccessoryMetricTransportDetails_h
#define HMDAccessoryMetricTransportDetails_h
@import Foundation;

#include "HMFObject.h"

@class NSString;

@interface HMDAccessoryMetricTransportDetails : HMFObject

@property (copy, nonatomic) NSString *accessoryProtocol;
@property (nonatomic) BOOL isAccessoryBatteryPowered;
@property (nonatomic) BOOL isAccessoryBridged;
@property (nonatomic) BOOL isThreadAccessory;
@property (nonatomic) BOOL isHH2Enabled;

/* instance methods */
- (id)initWithAccessory:(id)accessory;
- (id)attributeDescriptions;
@end

#endif /* HMDAccessoryMetricTransportDetails_h */