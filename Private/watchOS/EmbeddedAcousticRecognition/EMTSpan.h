//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.7.1.0.0
//
#ifndef EMTSpan_h
#define EMTSpan_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface EMTSpan : NSObject<NSCopying>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly, nonatomic) BOOL doNotTranslate;

/* instance methods */
- (id)initWithIdentifier:(id)identifier range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range doNotTranslate:(BOOL)translate;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* EMTSpan_h */