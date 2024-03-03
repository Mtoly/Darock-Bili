//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFTableTemplateValue_h
#define WFTableTemplateValue_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray;

@interface WFTableTemplateValue : NSObject<NSSecureCoding>

@property (readonly, nonatomic) long long compoundType;
@property (readonly, copy, nonatomic) NSArray *rows;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCompoundType:(long long)type rows:(id)rows;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* WFTableTemplateValue_h */