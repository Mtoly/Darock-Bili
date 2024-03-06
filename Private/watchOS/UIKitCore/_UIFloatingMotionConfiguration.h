//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIFloatingMotionConfiguration_h
#define _UIFloatingMotionConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"

@interface _UIFloatingMotionConfiguration : NSObject<NSCopying>

@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } rotation;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } translation;

/* class methods */
+ (id)configurationWithRotationOnAxis:(unsigned long long)axis;
+ (id)configurationWithTranslationOnAxis:(unsigned long long)axis;
+ (id)configurationWithLargeTranslationOnAxis:(unsigned long long)axis;
+ (id)configurationWithRotation:(struct CGPoint { double x0; double x1; })rotation;
+ (id)configurationWithTranslation:(struct CGPoint { double x0; double x1; })translation;

/* instance methods */
- (id)_initWithTranslation:(struct CGPoint { double x0; double x1; })translation rotation:(struct CGPoint { double x0; double x1; })rotation;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* _UIFloatingMotionConfiguration_h */