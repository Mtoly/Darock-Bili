//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPImageManager_h
#define VCPImageManager_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface VCPImageManager : NSObject {
  /* instance variables */
  struct CMPhotoCompressionSession * _encodeSession;
  struct CMPhotoDecompressionSession * _decodeSession;
  struct OpaqueVTPixelTransferSession * _transferSession;
  NSObject<OS_dispatch_queue> *_transcodeQueue;
}

/* class methods */
+ (id)sharedImageManager;
+ (BOOL)canDecodeAcceleratedUniformTypeIdentifier:(id)identifier;
+ (BOOL)allowFastPathDecodeWithUniformType:(id)type pixelWidth:(unsigned long long)width andPixelHeight:(unsigned long long)height;
+ (BOOL)loggingEnabled;
+ (BOOL)_exportReencodedJPEG;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)dataForResource:(id)resource;
- (int)createPixelBufferWithWidth:(unsigned long long)width height:(unsigned long long)height pixelFormat:(int)format pixelBuffer:(struct __CVBuffer * *)buffer;
- (int)convertPixelBuffer:(struct __CVBuffer * *)buffer toPixelFormat:(int)format flushCache:(BOOL)cache;
- (int)acceleratedDecodeImageData:(id)data pixelFormat:(int)format maxDimension:(unsigned long long)dimension pixelBuffer:(struct __CVBuffer * *)buffer orientation:(unsigned int *)orientation flushCache:(BOOL)cache;
- (int)drawImage:(struct CGImage *)image pixelFormat:(int)format withOrientation:(unsigned int)orientation maxDimension:(unsigned long long)dimension pixelBuffer:(struct __CVBuffer * *)buffer;
- (int)decodeImageSource:(struct CGImageSource *)source withUniformTypeIdentifier:(id)identifier pixelFormat:(int)format maxDimension:(unsigned long long)dimension orientation:(unsigned int *)orientation pixelBuffer:(struct __CVBuffer * *)buffer;
- (struct __CVBuffer *)pixelBufferWithFormat:(int)format andMaxDimension:(unsigned long long)dimension fromData:(id)data withUniformTypeIdentifier:(id)identifier flushCache:(BOOL)cache orientation:(unsigned int *)orientation;
- (struct __CVBuffer *)imageForResource:(id)resource pixelFormat:(int)format;
- (struct __CVBuffer *)imageForResource:(id)resource pixelFormat:(int)format maxDimension:(unsigned long long)dimension;
- (struct __CVBuffer *)imageForResource:(id)resource pixelFormat:(int)format maxDimension:(unsigned long long)dimension orientation:(unsigned int *)orientation;
- (struct __CVBuffer *)pixelBufferWithFormat:(int)format fromImageURL:(id)url flushCache:(BOOL)cache;
- (struct __CVBuffer *)pixelBufferWithFormat:(int)format andMaxDimension:(unsigned long long)dimension fromImageURL:(id)url flushCache:(BOOL)cache orientation:(unsigned int *)orientation;
- (struct __CVBuffer *)pixelBufferWithFormat:(int)format fromImageURL:(id)url flushCache:(BOOL)cache orientation:(unsigned int *)orientation;
- (struct __CVBuffer *)pixelBufferWithFormat:(int)format andMaxDimension:(unsigned long long)dimension fromImageURL:(id)url;
- (struct __CVBuffer *)pixelBufferWithFormat:(int)format andMaxDimension:(unsigned long long)dimension fromImageURL:(id)url orientation:(unsigned int *)orientation;
- (void)flushCache;
- (int)compressCVPixelBuffer:(struct __CVBuffer *)buffer toJPEGData:(id *)jpegdata targetBitStreamLength:(unsigned long long)length padding:(BOOL)padding;
@end

#endif /* VCPImageManager_h */