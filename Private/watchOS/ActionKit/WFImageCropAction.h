//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFImageCropAction_h
#define WFImageCropAction_h
@import Foundation;

#include "WFAction.h"

@interface WFImageCropAction : WFAction
/* class methods */
+ (id)imageByCroppingImage:(id)image toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

/* instance methods */
- (void)runAsynchronouslyWithInput:(id)input;
@end

#endif /* WFImageCropAction_h */