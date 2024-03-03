//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSPAnalyticsWindDownEventData_h
#define HKSPAnalyticsWindDownEventData_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface HKSPAnalyticsWindDownEventData : NSObject<NSCoding, NSSecureCoding>

@property (readonly, nonatomic) unsigned long long action;
@property (readonly, nonatomic) BOOL wasUsed;
@property (readonly, nonatomic) BOOL wasCollected;
@property (readonly, copy, nonatomic) NSString *identifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithWindDownAction:(unsigned long long)action wasUsed:(BOOL)used identifier:(id)identifier;
- (id)initWithWindDownAction:(unsigned long long)action wasUsed:(BOOL)used identifier:(id)identifier wasCollected:(BOOL)collected;
- (id)collectedEventDataCopy;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)isEqualEventData:(id)data;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HKSPAnalyticsWindDownEventData_h */