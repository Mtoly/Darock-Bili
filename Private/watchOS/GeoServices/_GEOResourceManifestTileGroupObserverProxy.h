//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef _GEOResourceManifestTileGroupObserverProxy_h
#define _GEOResourceManifestTileGroupObserverProxy_h
@import Foundation;

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface _GEOResourceManifestTileGroupObserverProxy : NSObject {
  /* instance variables */
  NSHashTable *_observers;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
  NSObject<OS_dispatch_queue> *_queue;
}

/* instance methods */
- (id)init;
- (id)description;
- (void)registerObserver:(id)observer;
@end

#endif /* _GEOResourceManifestTileGroupObserverProxy_h */