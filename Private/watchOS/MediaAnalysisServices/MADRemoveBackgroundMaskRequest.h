//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef MADRemoveBackgroundMaskRequest_h
#define MADRemoveBackgroundMaskRequest_h
@import Foundation;

#include "MADRequest.h"
#include "MADRemoveBackgroundMaskResult.h"

@class NSNumber;

@interface MADRemoveBackgroundMaskRequest : MADRequest

@property (copy, nonatomic) NSNumber *imageType;
@property (readonly, nonatomic) MADRemoveBackgroundMaskResult *result;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* MADRemoveBackgroundMaskRequest_h */