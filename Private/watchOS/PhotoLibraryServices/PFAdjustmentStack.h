//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFAdjustmentStack_h
#define PFAdjustmentStack_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSFastEnumeration-Protocol.h"

@class NSArray, NSOrderedSet;

@interface PFAdjustmentStack : NSObject<NSCopying, NSFastEnumeration> {
  /* instance variables */
  NSArray *_adjustments;
  NSOrderedSet *_maskUUIDs;
  unsigned long long _formatVersion;
}

/* class methods */
+ (BOOL)isValidEnvelopeDictionary:(id)dictionary errors:(id)errors;

/* instance methods */
- (id)initWithEnvelopeDictionary:(id)dictionary;
- (id)envelopeDictionary;
- (id)init;
- (id)initWithAdjustments:(id)adjustments;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id * x1; unsigned long long * x2; unsigned long long x3[5] } *)state objects:(id *)objects count:(unsigned long long)count;
- (id)adjustmentAtIndex:(unsigned long long)index;
- (id)firstAdjustmentWithIdentifier:(id)identifier;
- (id)adjustmentsWithIdentifier:(id)identifier;
- (id)maskUUIDs;
- (unsigned long long)count;
- (id)description;
- (id)debugDescription;
@end

#endif /* PFAdjustmentStack_h */