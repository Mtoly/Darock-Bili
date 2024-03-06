//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSReusableBufferPool_h
#define CSReusableBufferPool_h
@import Foundation;

#include "CSReusableBufferPoolConfiguration.h"

@class NSMutableArray;

@interface CSReusableBufferPool : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  unsigned long long _numberOfBackingStores;
  NSMutableArray *_recycledBackingStores;
}

@property (readonly, nonatomic) CSReusableBufferPoolConfiguration *configuration;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (id)dataWithBytes:(const void *)bytes length:(unsigned long long)length;
- (void)cleanup;
- (void)handleUsedBackingStore:(id)store;
- (id)_getAvailableBackingStore;
- (id)_createNewBackingStore;
- (BOOL)_canCreateNewBackingStore;
- (void)_recycleUsedBackingStore:(id)store;
- (void)_checkIdleBackingStores;
@end

#endif /* CSReusableBufferPool_h */