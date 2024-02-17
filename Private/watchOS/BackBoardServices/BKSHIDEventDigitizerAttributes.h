//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 598.10.0.0.0
//
#ifndef BKSHIDEventDigitizerAttributes_h
#define BKSHIDEventDigitizerAttributes_h
@import Foundation;

#include "BKSHIDEventBaseAttributes.h"

@class NSArray;

@interface BKSHIDEventDigitizerAttributes : BKSHIDEventBaseAttributes

@property (nonatomic) float maximumForce;
@property (nonatomic) struct CGSize { double x0; double x1; } digitizerSurfaceSize;
@property (@dynamic, nonatomic) double digitizerSurfaceWidth;
@property (@dynamic, nonatomic) double digitizerSurfaceHeight;
@property (retain, nonatomic) NSArray *pathAttributes;
@property (nonatomic) double initialTouchTimestamp;
@property (nonatomic) long long activeModifiers;
@property (nonatomic) unsigned char touchStreamIdentifier;
@property (nonatomic) BOOL systemGesturesPossible;
@property (nonatomic) BOOL systemGestureStateChange;
@property (nonatomic) long long sceneTouchBehavior;

/* class methods */
+ (id)protobufSchema;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (void)appendDescriptionToFormatter:(id)formatter;
@end

#endif /* BKSHIDEventDigitizerAttributes_h */