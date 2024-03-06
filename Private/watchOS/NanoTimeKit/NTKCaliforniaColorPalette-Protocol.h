//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKCaliforniaColorPalette_Protocol_h
#define NTKCaliforniaColorPalette_Protocol_h
@import Foundation;

#include "NTKFaceColorPalette.h"
#include "NTKCaliforniaColorPalette-Protocol.h"
#include "NTKCircularAnalogDialColorPalette-Protocol.h"

@class NSString, UIColor;

@protocol NTKCaliforniaColorPalette <NTKFaceColorPalette>

@property (readonly, nonatomic) UIColor *background;
@property (readonly, nonatomic) UIColor *circularBackground;
@property (readonly, nonatomic) UIColor *digit;
@property (readonly, nonatomic) UIColor *smallTick;
@property (readonly, nonatomic) UIColor *smallTickCircular;
@property (readonly, nonatomic) UIColor *largeTick;
@property (readonly, nonatomic) UIColor *clockHandsInlay;
@property (readonly, nonatomic) UIColor *clockHands;
@property (readonly, nonatomic) UIColor *secondHand;
@property (readonly, nonatomic) UIColor *cornerComplicationSecondary;
@property (readonly, nonatomic) UIColor *cornerComplication;
@property (readonly, nonatomic) UIColor *simpleTextComplication;
@property (readonly, nonatomic) UIColor *bezelComplication;
@property (readonly, nonatomic) UIColor *circularComplication;
@property (readonly, nonatomic) UIColor *circularComplicationSecondary;
@property (readonly, nonatomic) long long richComplicationViewTheme;

@end

#endif /* NTKCaliforniaColorPalette_Protocol_h */