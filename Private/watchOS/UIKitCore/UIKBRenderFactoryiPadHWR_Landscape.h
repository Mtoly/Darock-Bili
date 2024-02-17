//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBRenderFactoryiPadHWR_Landscape_h
#define UIKBRenderFactoryiPadHWR_Landscape_h
@import Foundation;

#include "UIKBRenderFactoryiPadHWR_Portrait.h"

@interface UIKBRenderFactoryiPadHWR_Landscape : UIKBRenderFactoryiPadHWR_Portrait
/* instance methods */
- (double)deleteKeyFontSize;
- (double)moreKeyFontSize;
- (double)internationalKeyFontSize;
- (double)dictationKeyFontSize;
- (double)spaceKeyFontSize;
- (double)dismissKeyFontSize;
- (struct CGPoint { double x0; double x1; })dismissKeyOffset;
- (struct CGPoint { double x0; double x1; })spaceReturnKeyTextOffset;
- (double)keyCornerRadius;
- (id)messagesWriteboardKeyImageName;
- (double)controlColumnWidthFactor;
@end

#endif /* UIKBRenderFactoryiPadHWR_Landscape_h */