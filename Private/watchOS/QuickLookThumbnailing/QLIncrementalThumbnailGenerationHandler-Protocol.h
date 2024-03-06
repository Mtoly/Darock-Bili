//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 186.2.2.0.0
//
#ifndef QLIncrementalThumbnailGenerationHandler_Protocol_h
#define QLIncrementalThumbnailGenerationHandler_Protocol_h
@import Foundation;

@protocol QLIncrementalThumbnailGenerationHandler 
/* instance methods */
- (void)didUpdateStatus:(long long)status ofThumbnailGenerationWithUUID:(id)uuid;
- (void)didGenerateThumbnailForRequestWithUUID:(id)uuid data:(id)data bitmapFormat:(id)format metadata:(id)metadata contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect iconFlavor:(int)flavor thumbnailType:(long long)type clientShouldTakeOwnership:(BOOL)ownership;
- (void)failedToGenerateThumbnailOfType:(long long)type forRequestWithUUID:(id)uuid error:(id)error;
@end

#endif /* QLIncrementalThumbnailGenerationHandler_Protocol_h */