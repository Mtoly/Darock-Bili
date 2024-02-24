//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.0.0.0.0
//
#ifndef VTKCIEDE2000Strategy_h
#define VTKCIEDE2000Strategy_h
@import Foundation;

#include "VTKColorDifferenceStrategy-Protocol.h"

@class NSString;

@interface VTKCIEDE2000Strategy : NSObject<VTKColorDifferenceStrategy>

@property (readonly, nonatomic) double tolerance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)CIEDE2000_L1:(double)l1 A1:(double)a1 B1:(double)b1 L2:(double)l2 A2:(double)a2 B2:(double)b2;
+ (void)getLightness:(double *)lightness A:(double *)a B:(double *)b alpha:(double *)alpha fromColor:(id)color;

/* instance methods */
- (double)differenceBetweenColor:(id)color andColor:(id)color;
@end

#endif /* VTKCIEDE2000Strategy_h */