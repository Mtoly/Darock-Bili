//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAP2Lock_h
#define HAP2Lock_h
@import Foundation;

#include "HAP2LoggingObject.h"

@class NSString;
@protocol NSLocking;

@interface HAP2Lock : HAP2LoggingObject {
  /* instance variables */
  atomic unsigned long long _lockCount;
}

@property (readonly, nonatomic) NSObject<NSLocking> *internalLock;
@property (readonly, nonatomic) NSString *name;

/* class methods */
+ (id)new;
+ (id)lockWithName:(id)name;

/* instance methods */
- (id)init;
- (id)initWithLock:(id)lock name:(id)name;
- (void)_performBlock:(id /* block */)block allowRecursive:(BOOL)recursive;
- (void)performBlock:(id /* block */)block;
- (void)assertOwner;
@end

#endif /* HAP2Lock_h */