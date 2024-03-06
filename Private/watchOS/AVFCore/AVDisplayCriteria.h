//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVDisplayCriteria_h
#define AVDisplayCriteria_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class AVDisplayCriteriaInternal;

@interface AVDisplayCriteria : NSObject<NSCopying> {
  /* instance variables */
  AVDisplayCriteriaInternal *_displayCriteria;
}

@property (readonly, nonatomic) float refreshRate;
@property (readonly) int videoDynamicRange;

/* instance methods */
- (id)initWithRefreshRate:(float)rate videoDynamicRange:(int)range;
- (id)initWithRefreshRate:(float)rate formatDescription:(struct opaqueCMFormatDescription *)description;
- (void)dealloc;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* AVDisplayCriteria_h */