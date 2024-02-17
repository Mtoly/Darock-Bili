//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIMutableStatusBarStyleRequest_h
#define UIMutableStatusBarStyleRequest_h
@import Foundation;

#include "UIStatusBarStyleRequest.h"
#include "UIColor.h"

@class NSNumber;

@interface UIMutableStatusBarStyleRequest : UIStatusBarStyleRequest

@property (@dynamic, nonatomic) long long style;
@property (@dynamic, nonatomic) long long legibilityStyle;
@property (retain, @dynamic, nonatomic) UIColor *foregroundColor;
@property (@dynamic, nonatomic) double foregroundAlpha;
@property (retain, @dynamic, nonatomic) NSNumber *overrideHeight;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* UIMutableStatusBarStyleRequest_h */