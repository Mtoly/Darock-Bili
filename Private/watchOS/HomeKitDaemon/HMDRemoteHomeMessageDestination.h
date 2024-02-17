//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDRemoteHomeMessageDestination_h
#define HMDRemoteHomeMessageDestination_h
@import Foundation;

#include "HMDRemoteMessageDestination.h"

@class NSNumber, NSUUID;

@interface HMDRemoteHomeMessageDestination : HMDRemoteMessageDestination

@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, nonatomic) NSNumber *queueTimeout;

/* class methods */
+ (id)shortDescription;

/* instance methods */
- (id)initWithTarget:(id)target;
- (id)initWithTarget:(id)target homeUUID:(id)uuid;
- (id)initWithTarget:(id)target homeUUID:(id)uuid queueTimeout:(id)timeout;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)shortDescription;
- (id)descriptionWithPointer:(BOOL)pointer;
- (id)debugDescription;
- (id)description;
- (id)privateDescription;
@end

#endif /* HMDRemoteHomeMessageDestination_h */