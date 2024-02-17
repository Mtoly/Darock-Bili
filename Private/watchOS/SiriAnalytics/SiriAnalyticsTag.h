//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef SiriAnalyticsTag_h
#define SiriAnalyticsTag_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class SiriAnalyticsTagShim;

@interface SiriAnalyticsTag : NSObject<NSSecureCoding> {
  /* instance variables */
  SiriAnalyticsTagShim *_shim;
}

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithConditionType:(int)type start:(unsigned long long)start end:(unsigned long long)end;
- (id)initWithConditionType:(int)type start:(unsigned long long)start;
- (id)initWithConditionType:(int)type end:(unsigned long long)end;
- (id)initWithConditionTypeAffectingEntireClock:(int)clock;
- (id)initWithConditionType:(int)type componentId:(id)id componentName:(int)name joined:(BOOL)joined;
- (id)initWithConditionType:(int)type requestId:(id)id joined:(BOOL)joined;
- (id)shim;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* SiriAnalyticsTag_h */