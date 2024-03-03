//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIRemoteSheet_Internal_Protocol_h
#define _UIRemoteSheet_Internal_Protocol_h
@import Foundation;

@protocol _UIRemoteSheet_Internal <_UIRemoteSheet>
@optional
/* instance methods */
- (void)_sheetInteractionDraggingDidBeginWithRubberBandCoefficient:(double)coefficient;
- (void)_sheetInteractionDraggingDidChangeWithTranslation:(struct CGPoint { double x0; double x1; })translation velocity:(struct CGPoint { double x0; double x1; })velocity animateChange:(BOOL)change;
- (void)_sheetInteractionDraggingDidEnd;
@end

#endif /* _UIRemoteSheet_Internal_Protocol_h */