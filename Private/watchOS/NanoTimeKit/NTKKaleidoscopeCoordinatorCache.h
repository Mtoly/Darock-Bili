//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKKaleidoscopeCoordinatorCache_h
#define NTKKaleidoscopeCoordinatorCache_h
@import Foundation;

#include "NTKFaceCollection.h"
#include "NTKFaceCollectionObserver-Protocol.h"
#include "NTKTaskScheduler.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface NTKKaleidoscopeCoordinatorCache : NSObject<NTKFaceCollectionObserver> {
  /* instance variables */
  NTKFaceCollection *_libraryCollection;
  NTKTaskScheduler *_taskScheduler;
  NSMutableArray *_pathsToTouch;
  NSMutableDictionary *_pathsToWrite;
  unsigned int x :1 _isCleanupScheduled;
  unsigned long long _kaleidoscopeFaceCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedCache;

/* instance methods */
- (void)setLibraryCollection:(id)collection;
- (id)provideAtlasBacking:(id)backing uuid:(id)uuid uuidLuma:(id)luma uuidChroma:(id)chroma;
- (void)faceCollection:(id)collection didAddFace:(id)face atIndex:(unsigned long long)index;
- (void)faceCollection:(id)collection didRemoveFace:(id)face atIndex:(unsigned long long)index;
- (void)faceCollectionDidLoad:(id)load;
- (void)faceCollectionDidReset:(id)reset;
- (void)_computeKaleidoscopeFaceCount;
- (void)_scheduleCleanup;
- (void)_writeBacking:(id)backing atPath:(id)path;
- (void)_touchPath:(id)path;
- (void)_removePath:(id)path;
- (void)_performCleanup;
@end

#endif /* NTKKaleidoscopeCoordinatorCache_h */