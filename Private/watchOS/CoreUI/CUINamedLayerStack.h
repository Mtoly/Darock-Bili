//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 866.4.0.0.0
//
#ifndef CUINamedLayerStack_h
#define CUINamedLayerStack_h
@import Foundation;

#include "CUINamedLookup.h"
#include "CUINamedLayerStackProtocol-Protocol.h"
#include "CUIThemeRendition.h"

@class BOOL *, NSArray, NSString;

@interface CUINamedLayerStack : CUINamedLookup<CUINamedLayerStackProtocol> {
  /* instance variables */
  CUIThemeRendition *_flattenedImageRendition;
  CUIThemeRendition *_radiosityImageRendition;
}

@property (retain, nonatomic) NSArray *layers;
@property (readonly, nonatomic) struct CGImage * radiosityImage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct CGImage * flattenedImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (struct vImage_Buffer { void * x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })_doRadiosityBlurOnPixelBuffer:(void *)buffer bytesPerRow:(unsigned long long)row bitsPerPixel:(unsigned long long)pixel width:(unsigned long long)width height:(unsigned long long)height scaleFactor:(unsigned long long)factor usesGaussianBlur:(BOOL *)blur adjustedSize:(struct CGSize { double x0; double x1; } *)size;
+ (struct CGImage *)createRadiosityImageWithImage:(struct CGImage *)image displayScale:(long long)scale;
+ (void)radiosityImageWithImage:(struct CGImage *)image displayScale:(long long)scale completionHandler:(id /* block */)handler;

/* instance methods */
- (id)initWithName:(id)name usingRenditionKey:(id)key fromTheme:(unsigned long long)theme resolvingWithBlock:(id /* block */)block;
- (BOOL)isEqual:(id)equal;
- (id)layerImageAtIndex:(unsigned long long)index;
- (void)dealloc;
@end

#endif /* CUINamedLayerStack_h */