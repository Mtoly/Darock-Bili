//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 114.2.2.0.0
//
#ifndef WAGUIGradientView_h
#define WAGUIGradientView_h
@import Foundation;

#include "UIView.h"

@class CAGradientLayer;

@interface WAGUIGradientView : UIView

@property (readonly, nonatomic) CAGradientLayer *gradientLayer;

/* class methods */
+ (Class)layerClass;
@end

#endif /* WAGUIGradientView_h */