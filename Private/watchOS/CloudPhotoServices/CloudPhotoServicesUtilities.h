//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CloudPhotoServicesUtilities_h
#define CloudPhotoServicesUtilities_h
@import Foundation;

@interface CloudPhotoServicesUtilities : NSObject
/* class methods */
+ (struct CGSize { double x0; double x1; })sizeOfImageAtURL:(id)url orientationOut:(int *)out;
+ (struct CGSize { double x0; double x1; })dimensionsForAVAsset:(id)avasset;
+ (struct CGImageSource *)newImageSourceFromImageAtURL:(id)url;
+ (void)getDimensionsFromImageProperties:(id)properties orientationOut:(int *)out widthOut:(int *)out heightOut:(int *)out;
@end

#endif /* CloudPhotoServicesUtilities_h */