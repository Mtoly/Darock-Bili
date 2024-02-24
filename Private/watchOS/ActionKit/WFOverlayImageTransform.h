//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFOverlayImageTransform_h
#define WFOverlayImageTransform_h
@import Foundation;

@interface WFOverlayImageTransform : NSObject

@property (nonatomic) struct CGPoint { double x0; double x1; } center;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) double rotation;
@property (nonatomic) double scale;
@property (nonatomic) double opacity;

/* instance methods */
- (id)init;
- (id)initWithCenter:(struct CGPoint { double x0; double x1; })center bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds rotation:(double)rotation scale:(double)scale opacity:(double)opacity;
- (id)initForCenteringImage:(id)image inBackgroundImage:(id)image;
- (void)applyToImageFile:(id)file withOverlayImage:(id)image completionHandler:(id /* block */)handler;
@end

#endif /* WFOverlayImageTransform_h */