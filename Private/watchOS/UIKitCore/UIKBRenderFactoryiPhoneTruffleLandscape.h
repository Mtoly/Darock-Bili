//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBRenderFactoryiPhoneTruffleLandscape_h
#define UIKBRenderFactoryiPhoneTruffleLandscape_h
@import Foundation;

#include "UIKBRenderFactoryiPhoneLandscape.h"

@interface UIKBRenderFactoryiPhoneTruffleLandscape : UIKBRenderFactoryiPhoneLandscape
/* instance methods */
- (double)stringKeyFontSize;
- (double)moreABCKeyFontSize;
- (double)moreKeyFontSize;
- (double)assistKeyFontSize;
- (double)symbolImageControlKeyFontSize;
- (struct CGPoint { double x0; double x1; })stringKeyOffset;
- (struct CGPoint { double x0; double x1; })returnKeyOffset;
- (struct CGPoint { double x0; double x1; })internationalKeyOffset;
- (struct CGPoint { double x0; double x1; })deleteKeyOffset;
- (struct CGPoint { double x0; double x1; })dictationKeyOffset;
- (struct CGPoint { double x0; double x1; })more123KeyOffset;
- (struct CGPoint { double x0; double x1; })moreABCKeyOffset;
- (struct CGPoint { double x0; double x1; })realEmojiKeyOffset;
- (struct CGPoint { double x0; double x1; })cutKeyOffset;
- (struct CGPoint { double x0; double x1; })copyKeyOffset;
- (struct CGPoint { double x0; double x1; })pasteKeyOffset;
- (struct CGPoint { double x0; double x1; })boldKeyOffset;
- (struct CGPoint { double x0; double x1; })undoKeyOffset;
- (struct CGPoint { double x0; double x1; })leftArrowKeyOffset;
- (struct CGPoint { double x0; double x1; })rightArrowKeyOffset;
- (struct CGPoint { double x0; double x1; })dismissKeyOffset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })variantSymbolFrameInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })wideShadowPaddleInsets;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })variantPaddedFrameInsets;
- (struct CGPoint { double x0; double x1; })variantSymbolTextOffset;
- (struct CGPoint { double x0; double x1; })variantAnnotationTextOffset;
- (struct CGPoint { double x0; double x1; })popupSymbolTextOffset;
- (double)popupFontSize;
- (BOOL)isTallPopup;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })dynamicInsets;
- (double)dynamicBottomRowMultiplier;
- (id)lightKeycapsFontName;
- (double)_row4ControlSegmentWidthLeft;
- (double)_row4ControlSegmentWidthRight;
@end

#endif /* UIKBRenderFactoryiPhoneTruffleLandscape_h */