//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIImageViewOverlayView_h
#define _UIImageViewOverlayView_h
@import Foundation;

#include "UIView.h"
#include "_UIImageViewOverlayViewDelegate-Protocol.h"

@interface _UIImageViewOverlayView : UIView

@property (weak, nonatomic) NSObject<_UIImageViewOverlayViewDelegate> *overlayViewDelegate;

/* instance methods */
- (void)setClipsToBounds:(BOOL)bounds;
@end

#endif /* _UIImageViewOverlayView_h */