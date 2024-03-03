//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLCoreLocationInUseSessionController_h
#define CSLCoreLocationInUseSessionController_h
@import Foundation;

#include "CSLFrontmostSessionAppTracking-Protocol.h"

@class NSMutableDictionary, NSString;

@interface CSLCoreLocationInUseSessionController : NSObject<CSLFrontmostSessionAppTracking> {
  /* instance variables */
  NSMutableDictionary *_activeAssertions;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  Class _inUseAssertionClass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrontmostAppTracker:(id)tracker;
- (id)initWithFrontmostAppTracker:(id)tracker inUseAssertionClass:(Class)class;
- (id)init;
- (void)_withLock:(id /* block */)lock;
- (void)frontmostSessionAppChanged:(id)changed;
@end

#endif /* CSLCoreLocationInUseSessionController_h */