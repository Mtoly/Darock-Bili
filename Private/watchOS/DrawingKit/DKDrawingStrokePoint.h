//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 506.1.0.0.0
//
#ifndef DKDrawingStrokePoint_h
#define DKDrawingStrokePoint_h
@import Foundation;

#include "NSCopying-Protocol.h"

@interface DKDrawingStrokePoint : NSObject<NSCopying>

@property (nonatomic) struct CGPoint { double x0; double x1; } location;
@property (nonatomic) double force;
@property (nonatomic) double velocity;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* DKDrawingStrokePoint_h */