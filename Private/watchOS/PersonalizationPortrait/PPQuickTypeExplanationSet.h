//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPQuickTypeExplanationSet_h
#define PPQuickTypeExplanationSet_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class _PASLock;

@interface PPQuickTypeExplanationSet : NSObject<NSSecureCoding> {
  /* instance variables */
  _PASLock *_set;
}

/* class methods */
+ (id)stringFromExplanation:(unsigned char)explanation;
+ (id)uniqueKeycodeFromExplanation:(unsigned char)explanation;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (void)push:(unsigned char)push;
- (void)enumerateWithBlock:(id /* block */)block;
- (unsigned long long)count;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToQuickTypeExplanationSet:(id)set;
@end

#endif /* PPQuickTypeExplanationSet_h */