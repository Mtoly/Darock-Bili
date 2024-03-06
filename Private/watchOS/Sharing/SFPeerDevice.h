//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFPeerDevice_h
#define SFPeerDevice_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface SFPeerDevice : NSObject<NSSecureCoding>

@property (copy) NSString *uniqueID;
@property (copy) NSString *modelIdentifier;
@property (copy) NSString *productName;
@property (copy) NSString *productVersion;
@property (copy) NSString *productBuildVersion;
@property (copy) NSString *name;
@property (copy) NSString *deviceColor;
@property (copy) NSString *enclosureColor;
@property BOOL defaultPairedDevice;
@property BOOL validKey;
@property long long keyCounter;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isDefaultPairedDevice;
@end

#endif /* SFPeerDevice_h */