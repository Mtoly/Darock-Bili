//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassthroughView_h
#define PKPassthroughView_h
@import Foundation;

#include "UIView.h"
#include "PKPassthroughView.h"

@interface PKPassthroughView : UIView {
  /* instance variables */
  BOOL _inHitTest;
  BOOL _inPortalHitTest;
  unsigned long long _portalTargetCount;
}

@property (nonatomic) BOOL hitTestEnabled;
@property (weak, nonatomic) PKPassthroughView *portal;
@property (readonly, nonatomic) BOOL portalled;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (BOOL)isPortalled;
- (BOOL)isHitTestEnabled;
@end

#endif /* PKPassthroughView_h */