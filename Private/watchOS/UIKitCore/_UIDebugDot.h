//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDebugDot_h
#define _UIDebugDot_h
@import Foundation;

#include "UIView.h"

@interface _UIDebugDot : UIView
/* class methods */
+ (id)dotWithTitle:(id)title color:(id)color;
+ (id)dotWithTitle:(id)title color:(id)color diameter:(double)diameter;
@end

#endif /* _UIDebugDot_h */