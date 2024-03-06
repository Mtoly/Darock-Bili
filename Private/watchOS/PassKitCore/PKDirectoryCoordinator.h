//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDirectoryCoordinator_h
#define PKDirectoryCoordinator_h
@import Foundation;

#include "PKInvalidateObservable-Protocol.h"

@class NSString, NSURL;

@interface PKDirectoryCoordinator : NSObject<PKInvalidateObservable> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSURL *_url;
}

@property (readonly, @dynamic, nonatomic) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithURL:(id)url;
- (BOOL)isInvalidated;
- (void)invalidate;
- (void)performCoordinatedAction:(id /* block */)action;
@end

#endif /* PKDirectoryCoordinator_h */