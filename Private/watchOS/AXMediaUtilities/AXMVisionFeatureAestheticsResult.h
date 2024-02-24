//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef AXMVisionFeatureAestheticsResult_h
#define AXMVisionFeatureAestheticsResult_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface AXMVisionFeatureAestheticsResult : NSObject<NSSecureCoding>

@property (readonly, nonatomic) float aestheticScore;
@property (readonly, nonatomic) float wellFramedSubjectScore;
@property (readonly, nonatomic) float pleasantCompositionScore;
@property (readonly, nonatomic) float wellChosenBackgroundScore;
@property (readonly, nonatomic) float noiseScore;
@property (readonly, nonatomic) float failureScore;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* AXMVisionFeatureAestheticsResult_h */