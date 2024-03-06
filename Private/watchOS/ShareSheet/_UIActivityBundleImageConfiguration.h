//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef _UIActivityBundleImageConfiguration_h
#define _UIActivityBundleImageConfiguration_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString, UIImage;

@interface _UIActivityBundleImageConfiguration : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *bundlePath;
@property (nonatomic) long long activityCategory;
@property (readonly, nonatomic) UIImage *fetchedImage;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithImageName:(id)name bundlePath:(id)path activityCategory:(long long)category;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* _UIActivityBundleImageConfiguration_h */