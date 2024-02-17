//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 186.2.2.0.0
//
#ifndef QLPlatformImage_h
#define QLPlatformImage_h
@import Foundation;

@class UIImage;

@interface QLPlatformImage : NSObject {
  /* instance variables */
  struct CGImage * _cgImage;
}

@property struct CGSize { double x0; double x1; } size;
@property (readonly) UIImage *UIImage;
@property struct CGImage * CGImage;
@property (copy, nonatomic) id /* block */ cleanupDataBlock;
@property unsigned int orientation;
@property double scale;

/* class methods */
+ (id)imageWithCGImage:(struct CGImage *)cgimage scale:(double)scale orientation:(unsigned int)orientation;
+ (id)imageWithUIImage:(id)uiimage;

/* instance methods */
- (void)dealloc;
@end

#endif /* QLPlatformImage_h */