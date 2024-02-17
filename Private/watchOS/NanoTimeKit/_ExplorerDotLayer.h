//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef _ExplorerDotLayer_h
#define _ExplorerDotLayer_h
@import Foundation;

#include "CATransformLayer.h"

@class CALayer;

@interface _ExplorerDotLayer : CATransformLayer

@property (readonly, nonatomic) CALayer *noServicePillLayer;
@property (readonly, nonatomic) CALayer *connectivityDotBackingLayer;
@property (readonly, nonatomic) CALayer *connectivityDotLayer;

/* instance methods */
- (id)init;
- (void)layoutSublayers;
@end

#endif /* _ExplorerDotLayer_h */