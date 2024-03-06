//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOConfigRemoteProxy_h
#define GEOConfigRemoteProxy_h
@import Foundation;

#include "GEOConfigProxy-Protocol.h"
#include "GEOConfigStorageExpiryCached.h"

@class NSPointerArray, NSString;

@interface GEOConfigRemoteProxy : NSObject<GEOConfigProxy> {
  /* instance variables */
  struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
  NSPointerArray *_configStores;
  GEOConfigStorageExpiryCached *_expiryUser;
  GEOConfigStorageExpiryCached *_expirySystem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)configStoreForOptions:(unsigned long long)options;
- (id)configExpiryForOptions:(unsigned long long)options;
- (id)configStoreForSource:(long long)source;
- (id)configExpiryForSource:(long long)source;
@end

#endif /* GEOConfigRemoteProxy_h */