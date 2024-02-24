//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 211.1.0.0.0
//
#ifndef ARUICelebration_h
#define ARUICelebration_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class _TtC3VFX8VFXScene;

@interface ARUICelebration : NSObject<NSCopying>

@property (readonly, nonatomic) VFX.VFXScene *scene;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) unsigned long long type;

/* instance methods */
- (id)description;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)apply:(id)apply context:(id)context;
- (void)updateDeltaTime:(double)time;
@end

#endif /* ARUICelebration_h */