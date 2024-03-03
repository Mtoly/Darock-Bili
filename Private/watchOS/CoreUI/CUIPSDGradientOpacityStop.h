//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 866.4.0.0.0
//
#ifndef CUIPSDGradientOpacityStop_h
#define CUIPSDGradientOpacityStop_h
@import Foundation;

#include "CUIPSDGradientStop.h"
#include "NSCoding-Protocol.h"

@interface CUIPSDGradientOpacityStop : CUIPSDGradientStop<NSCoding> {
  /* instance variables */
  double opacity;
}

/* class methods */
+ (void)initialize;
+ (id)opacityStopWithLocation:(double)location opacity:(double)opacity;

/* instance methods */
- (id)initWithLocation:(double)location opacity:(double)opacity;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (double)opacity;
- (double)opacityLocation;
- (BOOL)isOpacityStop;
- (id)description;
@end

#endif /* CUIPSDGradientOpacityStop_h */