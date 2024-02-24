//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CLKUIMetalAtlas_h
#define CLKUIMetalAtlas_h
@import Foundation;

#include "CLKUIAtlas.h"

@protocol MTLTexture, OS_dispatch_queue;

@interface CLKUIMetalAtlas : CLKUIAtlas {
  /* instance variables */
  NSObject<MTLTexture> *_texture;
  BOOL _streaming;
  unsigned long long _numMipmapLevelsDropped;
  BOOL _needsStreaming;
  id /* block */ _streamingCompletionBlock;
  NSObject<OS_dispatch_queue> *_loaderQueue;
  NSObject<MTLTexture> *_loaderQueue_prewarmedTexture;
  unsigned long long _mainQueue_prewarmState;
}

@property (readonly, nonatomic) NSObject<MTLTexture> *nilTexture;

/* class methods */
+ (unsigned long long)_computeMTLTextureMemoryUsageWithBacking:(id)backing numMipmapLevelsToDrop:(unsigned long long)drop;
+ (id)_allocateMTLTextureWithBacking:(id)backing numMipmapLevelsToDrop:(unsigned long long)drop device:(id)device;
+ (id)_uploadMTLTexture:(id)mtltexture withBacking:(id)backing numMipmapLevelsToDrop:(unsigned long long)drop device:(id)device encoder:(id)encoder;
+ (id)_createMTLTextureWithBacking:(id)backing numMipmapLevelsToDrop:(unsigned long long)drop device:(id)device encoder:(id)encoder;

/* instance methods */
- (id)initWithUuid:(id)uuid nilTexture:(id)texture streaming:(BOOL)streaming;
- (void)dealloc;
- (void)prewarm;
- (void)finishPrewarm;
- (void)bind:(id)bind slot:(unsigned long long)slot;
- (void)purge;
- (void)updateTextureStreaming;
@end

#endif /* CLKUIMetalAtlas_h */