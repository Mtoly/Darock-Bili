//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef MADImageSafetyClassificationResult_h
#define MADImageSafetyClassificationResult_h
@import Foundation;

#include "MADResult.h"

@class NSDictionary;

@interface MADImageSafetyClassificationResult : MADResult

@property (readonly, nonatomic) BOOL isSensitive;
@property (readonly, nonatomic) NSDictionary *attributes;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIsSensitive:(BOOL)sensitive andAttributes:(id)attributes;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* MADImageSafetyClassificationResult_h */