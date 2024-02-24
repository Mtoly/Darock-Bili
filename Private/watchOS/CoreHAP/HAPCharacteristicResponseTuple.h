//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPCharacteristicResponseTuple_h
#define HAPCharacteristicResponseTuple_h
@import Foundation;

#include "HMFObject.h"
#include "HAPCharacteristic.h"

@class NSData, NSDate, NSError, NSNumber;

@interface HAPCharacteristicResponseTuple : HMFObject

@property (retain, nonatomic) HAPCharacteristic *characteristic;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSNumber *stateNumber;
@property (retain, nonatomic) NSDate *valueUpdatedTime;
@property (retain, nonatomic) NSData *notificationContext;
@property (retain, nonatomic) NSError *error;

/* class methods */
+ (id)responseTupleForCharacteristic:(id)characteristic error:(id)error;

/* instance methods */
- (id)description;
@end

#endif /* HAPCharacteristicResponseTuple_h */