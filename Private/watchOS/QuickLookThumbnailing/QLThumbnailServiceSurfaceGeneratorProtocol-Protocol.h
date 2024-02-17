//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 186.2.2.0.0
//
#ifndef QLThumbnailServiceSurfaceGeneratorProtocol_Protocol_h
#define QLThumbnailServiceSurfaceGeneratorProtocol_Protocol_h
@import Foundation;

@protocol QLThumbnailServiceSurfaceGeneratorProtocol <NSObject>
/* instance methods */
- (void)ioSurfaceForRequest:(id)request withSize:(struct CGSize { double x0; double x1; })size completion:(id /* block */)completion;
@end

#endif /* QLThumbnailServiceSurfaceGeneratorProtocol_Protocol_h */