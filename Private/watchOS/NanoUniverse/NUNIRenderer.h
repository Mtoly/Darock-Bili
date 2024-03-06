//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NUNIRenderer_h
#define NUNIRenderer_h
@import Foundation;

@class NSString;

@interface NUNIRenderer : NSObject

@property (readonly, nonatomic) unsigned long long rendererStyle;
@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (readonly, nonatomic) NSString *textureSuffix;

/* class methods */
+ (id)sharedInstanceWithPixelFormat:(unsigned long long)format textureSuffix:(id)suffix rendererStyle:(unsigned long long)style;
+ (void)_deallocInstanceWithPixelFormat:(unsigned long long)format rendererStyle:(unsigned long long)style;

/* instance methods */
- (id)initWithPixelFormat:(unsigned long long)format textureSuffix:(id)suffix rendererStyle:(unsigned long long)style;
- (void)dealloc;
- (void)discard;
- (void)purgeUnusedWithScene:(id)scene;
- (id)spheroidAtPoint:(id)point scene:(struct NUNIViewport { int x0; int x1; })scene;
- (void)renderWithScene:(id)scene viewport:(struct NUNIViewport { int x0; int x1; })viewport renderEncoder:(id)encoder;
- (void)renderWithScene:(id)scene viewport:(struct NUNIViewport { int x0; int x1; })viewport commandBuffer:(id)buffer passDescriptor:(id)descriptor;
- (void)renderOffscreenWithScene:(id)scene viewport:(struct NUNIViewport { int x0; int x1; })viewport commandBuffer:(id)buffer;
- (void)_asyncDeallocInstance;
@end

#endif /* NUNIRenderer_h */