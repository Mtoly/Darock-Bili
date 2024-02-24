//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMCache_h
#define BMCache_h
@import Foundation;

#include "BMCache.h"

@class NSMapTable;

@interface BMCache : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSMapTable *_mapTable;
  BMCache *_fallback;
}

@property (copy) id /* block */ isExpiredBlock;

/* class methods */
+ (id)weakCache;
+ (id)strongCache;
+ (id)strongCacheWithFallbackCache:(id)cache;

/* instance methods */
- (id)_initWithMapTable:(id)table fallback:(id)fallback;
- (id)cachedObjectWithKey:(id)key;
- (id)cachedObjectWithKey:(id)key missHandler:(id /* block */)handler;
- (void)removeCachedObjectForKey:(id)key;
- (void)removeCachedObjectForKey:(id)key performWhileLocked:(id /* block */)locked;
- (void)pruneCacheWithBlock:(id /* block */)block completion:(id /* block */)completion;
@end

#endif /* BMCache_h */