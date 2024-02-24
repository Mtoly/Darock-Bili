//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.0.0.0.0
//
#ifndef VTKLineDrawItem_h
#define VTKLineDrawItem_h
@import Foundation;

#include "VTKDrawItem-Protocol.h"

@class NSString, UIColor;

@interface VTKLineDrawItem : NSObject<VTKDrawItem>

@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } origin;
@property (readonly, nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWitColor:(id)color origin:(struct CGPoint { double x0; double x1; })origin orientation:(long long)orientation;
- (void)drawAtContext:(id)context;
@end

#endif /* VTKLineDrawItem_h */