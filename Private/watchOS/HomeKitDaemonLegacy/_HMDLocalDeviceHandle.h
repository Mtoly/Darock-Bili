//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef _HMDLocalDeviceHandle_h
#define _HMDLocalDeviceHandle_h
@import Foundation;

#include "_HMDDeviceHandle.h"

@class NSUUID;

@interface _HMDLocalDeviceHandle : _HMDDeviceHandle

@property (readonly, copy, nonatomic) NSUUID *deviceIdentifier;

/* class methods */
+ (BOOL)isValidDestination:(id)destination;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDeviceIdentifier:(id)identifier;
- (id)initWithDestination:(id)destination;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)privateDescription;
- (BOOL)isLocal;
- (id)destination;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* _HMDLocalDeviceHandle_h */