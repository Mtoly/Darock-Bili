//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLUIIconView_h
#define CSLUIIconView_h
@import Foundation;

#include "UIView.h"
#include "CSLHexAppNode.h"
#include "CSLUIHexIconView-Protocol.h"

@class NSString;

@interface CSLUIIconView : UIView<CSLUIHexIconView>

@property (readonly, nonatomic) BOOL isZooming;
@property (readonly, nonatomic) BOOL isDragging;
@property (nonatomic) BOOL jiggling;
@property (readonly, nonatomic) BOOL clock;
@property (readonly, nonatomic) double diameter;
@property (readonly, nonatomic) double unscaledIconSize;
@property (retain, nonatomic) CSLHexAppNode *node;
@property (nonatomic) struct { double x0; } layoutAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)defaultIconSize;
+ (double)centerIconDiameter;
+ (double)maximumZoomDiameter;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareToZoom;
- (void)cleanupAfterZoom;
- (void)applyLayoutAttributes:(struct { double x0; })attributes;
- (BOOL)isClock;
- (void)setupJiggling;
- (void)cleanupJiggling;
- (void)pauseJiggling;
- (void)resumeJiggling;
- (void)beginDraggingAtPoint:(struct CGPoint { double x0; double x1; })point;
- (void)dragToPoint:(struct CGPoint { double x0; double x1; })point;
- (void)endDraggingToLayoutAttributes:(struct { double x0; })attributes;
- (void)setAlpha:(double)alpha forReason:(unsigned long long)reason;
- (BOOL)isJiggling;
@end

#endif /* CSLUIIconView_h */