//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef _BSUIAnimationAttributesFactory_h
#define _BSUIAnimationAttributesFactory_h
@import Foundation;

#include "BSUIAnimationFactory.h"

@class _UIViewAnimationAttributes;

@interface _BSUIAnimationAttributesFactory : BSUIAnimationFactory {
  /* instance variables */
  _UIViewAnimationAttributes *_attributes;
}

/* instance methods */
- (double)duration;
- (double)delay;
- (id)factoryWithTimingFunction:(id)function;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* _BSUIAnimationAttributesFactory_h */