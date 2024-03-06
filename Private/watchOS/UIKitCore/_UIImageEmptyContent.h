//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIImageEmptyContent_h
#define _UIImageEmptyContent_h
@import Foundation;

#include "_UIImageContent.h"

@interface _UIImageEmptyContent : _UIImageContent
/* instance methods */
- (id)typeName;
- (BOOL)canScaleImageToTargetResolution;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (struct CGSize { double x0; double x1; })size;
- (id)renditionWithSize:(struct CGSize { double x0; double x1; })size scale:(double)scale applyingEffect:(id)effect;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x0; double x1; })size scale:(double)scale inContext:(struct CGContext *)context;
- (void)_drawWithSize:(struct CGSize { double x0; double x1; })size scale:(double)scale inContext:(struct CGContext *)context effect:(id)effect;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* _UIImageEmptyContent_h */