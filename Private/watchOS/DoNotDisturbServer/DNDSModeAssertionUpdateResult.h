//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSModeAssertionUpdateResult_h
#define DNDSModeAssertionUpdateResult_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray;

@interface DNDSModeAssertionUpdateResult : NSObject<NSCopying>

@property (readonly, copy, nonatomic) NSArray *assertions;
@property (readonly, copy, nonatomic) NSArray *invalidations;

/* class methods */
+ (id)emptyResult;

/* instance methods */
- (id)initWithAssertions:(id)assertions invalidations:(id)invalidations;
- (id)resultCombiningWithResult:(id)result;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* DNDSModeAssertionUpdateResult_h */