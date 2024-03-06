//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 236.12.0.0.0
//
#ifndef SHInnerCircleMaskLayer_h
#define SHInnerCircleMaskLayer_h
@import Foundation;

#include "SHPaletteLayer.h"

@interface SHInnerCircleMaskLayer : SHPaletteLayer

@property (@dynamic, nonatomic) double innerCircleRelativeSize;

/* class methods */
+ (BOOL)needsDisplayForKey:(id)key;

/* instance methods */
- (void)setup;
- (void)drawInContext:(struct CGContext *)context;
@end

#endif /* SHInnerCircleMaskLayer_h */