//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.1.16.0.0
//
#ifndef RBMetalRenderState_h
#define RBMetalRenderState_h
@import Foundation;

@class MTLRenderPassDescriptor;
@protocol MTLCommandBuffer, MTLRenderCommandEncoder;

@interface RBMetalRenderState : NSObject

@property (nonatomic) unsigned int flags;
@property (nonatomic) int blendMode;
@property (nonatomic) float alpha;
@property (retain, nonatomic) NSObject<MTLCommandBuffer> *commandBuffer;
@property (retain, nonatomic) MTLRenderPassDescriptor *descriptor;
@property (nonatomic) unsigned long long formatKey;
@property (retain, nonatomic) NSObject<MTLRenderCommandEncoder> *encoder;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } bounds;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } CTM;

/* instance methods */
- (void)dealloc;
@end

#endif /* RBMetalRenderState_h */