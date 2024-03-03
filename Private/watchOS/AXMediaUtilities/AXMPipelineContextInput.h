//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef AXMPipelineContextInput_h
#define AXMPipelineContextInput_h
@import Foundation;

#include "AXMPixelBufferWrapper.h"
#include "NSSecureCoding-Protocol.h"

@class CIImage, NSString, NSURL;

@interface AXMPipelineContextInput : NSObject<NSSecureCoding> {
  /* instance variables */
  struct CGColorSpace * _extendedSRGBColorSpace;
  struct CGSize { double width; double height; } _cachedImageURLSize;
}

@property (readonly, nonatomic) long long inputType;
@property (readonly, nonatomic) CIImage *ciImage;
@property (readonly, nonatomic) NSURL *photoLibraryURL;
@property (readonly, nonatomic) AXMPixelBufferWrapper *pixelBuffer;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *phAssetLocalIdentifier;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct CGColorSpace * imageColorSpace;
@property (readonly, nonatomic) struct __CVBuffer * wrappedPixelBuffer;

/* class methods */
+ (id)new;
+ (id)inputWithCIImage:(id)ciimage;
+ (id)inputWithCIImage:(id)ciimage photoLibraryURL:(id)url;
+ (id)inputWithPixelBuffer:(id)buffer;
+ (id)inputWithURL:(id)url;
+ (id)inputWithURL:(id)url photoLibraryURL:(id)url;
+ (id)inputWithPHAssetLocalIdentifier:(id)identifier photoLibraryURL:(id)url;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)_initWithCIImage:(id)ciimage;
- (id)_initWithCIImage:(id)ciimage photoLibraryURL:(id)url;
- (id)_initWithPixelBuffer:(id)buffer;
- (id)_initWithURL:(id)url;
- (id)_initWithURL:(id)url photoLibraryURL:(id)url;
- (id)_initWithPHAssetLocalIdentifier:(id)identifier photoLibraryURL:(id)url;
- (void)dealloc;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (struct CGImage *)createCGImageWithMetrics:(id)metrics;
@end

#endif /* AXMPipelineContextInput_h */