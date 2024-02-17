//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKResizedFaceSnapshotCache_h
#define NTKResizedFaceSnapshotCache_h
@import Foundation;

@class BSUIMappedImageCache, NSMutableDictionary;

@interface NTKResizedFaceSnapshotCache : NSObject {
  /* instance variables */
  BSUIMappedImageCache *_resizedImageCache;
  NSMutableDictionary *_baseFaceSnapshotRequests;
}

@property (readonly, nonatomic) BOOL clearing;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)_init;
- (BOOL)containsSnapshotForFace:(id)face withSize:(struct CGSize { double x0; double x1; })size;
- (void)requestSnapshotForFace:(id)face withSize:(struct CGSize { double x0; double x1; })size updateHandler:(id /* block */)handler;
- (void)requestSnapshotForFace:(id)face withSize:(struct CGSize { double x0; double x1; })size completion:(id /* block */)completion;
- (void)requestSnapshotForFace:(id)face withSize:(struct CGSize { double x0; double x1; })size updateHandler:(id /* block */)handler completion:(id /* block */)completion;
- (void)_requestBaseSnapshotImageForFace:(id)face withCompletion:(id /* block */)completion;
- (void)_enqueueResizeImage:(id)image withTargetSize:(struct CGSize { double x0; double x1; })size forKey:(id)key WithCompletion:(id /* block */)completion;
- (id)_cachedResizedSnapshotImageForKey:(id)key;
- (void)_setCachedResizedSnapshotImage:(id)image forKey:(id)key;
- (void)clearWithCompletion:(id /* block */)completion;
- (id)_faceSnapshotCache;
- (BOOL)isClearing;
@end

#endif /* NTKResizedFaceSnapshotCache_h */