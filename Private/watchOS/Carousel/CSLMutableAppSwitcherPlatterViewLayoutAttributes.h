//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLMutableAppSwitcherPlatterViewLayoutAttributes_h
#define CSLMutableAppSwitcherPlatterViewLayoutAttributes_h
@import Foundation;

#include "CSLMutableAppSwitcherViewLayoutAttributes.h"
#include "CSLAppSwitcherCurve.h"

@interface CSLMutableAppSwitcherPlatterViewLayoutAttributes : CSLMutableAppSwitcherViewLayoutAttributes

@property (nonatomic) CSLAppSwitcherCurve *curve;
@property (nonatomic) double relativeProgress;
@property (nonatomic) double relativeOffset;
@property (nonatomic) double xShift;

/* instance methods */
- (id)initWithPlatterLayoutAttributes:(id)attributes;
- (BOOL)_shouldReverseLayout;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })transform;
- (void)setTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })transform;
- (BOOL)visible;
- (void)setVisible:(BOOL)visible;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* CSLMutableAppSwitcherPlatterViewLayoutAttributes_h */