//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSModalAppSessionPresentationOptions_h
#define CSLSModalAppSessionPresentationOptions_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSSet;

@interface CSLSModalAppSessionPresentationOptions : NSObject<NSCopying, NSSecureCoding>

@property (nonatomic) BOOL animated;
@property (copy, nonatomic) NSSet *actions;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithOptions:(id)options;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (BOOL)isAnimated;
@end

#endif /* CSLSModalAppSessionPresentationOptions_h */