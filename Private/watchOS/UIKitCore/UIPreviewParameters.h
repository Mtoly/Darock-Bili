//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIPreviewParameters_h
#define UIPreviewParameters_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "UIBezierPath.h"
#include "UIColor.h"

@class NSArray;

@interface UIPreviewParameters : NSObject<NSCopying> {
  /* instance variables */
  NSArray *_textLineRects;
  double _textPathCornerRadius;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _textPathInsets;
}

@property (nonatomic) long long previewMode;
@property (nonatomic) BOOL appliesShadow;
@property (nonatomic) BOOL hidesSourceViewDuringDropAnimation;
@property (readonly, nonatomic) UIBezierPath *effectiveShadowPath;
@property (readonly, nonatomic) BOOL singleLineText;
@property (readonly, nonatomic) BOOL isUsingCustomBackgroundColor;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } _textPathInsets;
@property (nonatomic) double _textPathCornerRadius;
@property (copy, nonatomic) UIBezierPath *visiblePath;
@property (copy, nonatomic) UIBezierPath *shadowPath;
@property (copy, nonatomic) UIColor *backgroundColor;

/* instance methods */
- (id)init;
- (id)initWithTextLineRects:(id)rects;
- (id)_initWithMode:(long long)mode visiblePath:(id)path backgroundColor:(id)color;
- (BOOL)_isSingleLineText;
- (void)_setTextPathInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)_setTextPathCornerRadius:(double)radius;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (long long)_previewMode;
- (void)_setPreviewMode:(long long)mode;
@end

#endif /* UIPreviewParameters_h */