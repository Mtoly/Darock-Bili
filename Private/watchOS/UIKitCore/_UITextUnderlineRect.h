//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextUnderlineRect_h
#define _UITextUnderlineRect_h
@import Foundation;

#include "UITextSelectionRect.h"
#include "UIColor.h"

@class NSValue;

@interface _UITextUnderlineRect : UITextSelectionRect

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rect;
@property (retain, nonatomic) NSValue *transformValue;
@property (retain, nonatomic) UIColor *underlineColor;
@property (nonatomic) long long underlineType;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } fullRect;

/* class methods */
+ (id)underlineRectWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect offset:(double)offset transform:(id)transform;

/* instance methods */
- (id)_transform;
- (id)description;
@end

#endif /* _UITextUnderlineRect_h */