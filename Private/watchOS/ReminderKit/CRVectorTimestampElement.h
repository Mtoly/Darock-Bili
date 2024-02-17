//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef CRVectorTimestampElement_h
#define CRVectorTimestampElement_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface CRVectorTimestampElement : NSObject<NSSecureCoding>

@property (nonatomic) unsigned long long clock;
@property (nonatomic) unsigned long long subclock;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (long long)rem_compareToVectorTimestampElement:(id)element;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CRVectorTimestampElement_h */