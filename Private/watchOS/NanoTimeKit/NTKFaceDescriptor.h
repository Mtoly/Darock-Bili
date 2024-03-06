//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKFaceDescriptor_h
#define NTKFaceDescriptor_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface NTKFaceDescriptor : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) long long faceStyle;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) Class faceClass;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_initWithFaceStyle:(long long)style bundleIdentifier:(id)identifier;
- (id)initWithFaceStyle:(long long)style;
- (id)initWithBundleIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isAvailableForDevice:(id)device;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* NTKFaceDescriptor_h */