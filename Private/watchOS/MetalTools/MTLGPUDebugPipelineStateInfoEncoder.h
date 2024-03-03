//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 341.35.0.0.0
//
#ifndef MTLGPUDebugPipelineStateInfoEncoder_h
#define MTLGPUDebugPipelineStateInfoEncoder_h
@import Foundation;

#include "MTLArgumentEncoder-Protocol.h"

@interface MTLGPUDebugPipelineStateInfoEncoder : NSObject {
  /* instance variables */
  NSObject<MTLArgumentEncoder> *_argumentEncoder;
}

@property (readonly, nonatomic) unsigned long long encodedLength;

/* instance methods */
- (id)initWithDevice:(id)device;
- (void)setArgumentBuffer:(id)buffer offset:(unsigned long long)offset;
- (void)setRenderPipelineState:(id)state;
- (void)setComputePipelineState:(id)state;
- (void)dealloc;
@end

#endif /* MTLGPUDebugPipelineStateInfoEncoder_h */