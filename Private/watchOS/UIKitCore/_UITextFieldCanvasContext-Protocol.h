//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextFieldCanvasContext_Protocol_h
#define _UITextFieldCanvasContext_Protocol_h
@import Foundation;

@protocol _UITextFieldCanvasContext <_UITextKit1CanvasContext>
/* instance methods */
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_unobscuredSecureRange;
- (BOOL)_isPasscodeStyle;
- (double)_passcodeStyleAlpha;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_clipRectForFadedEdges;
@end

#endif /* _UITextFieldCanvasContext_Protocol_h */