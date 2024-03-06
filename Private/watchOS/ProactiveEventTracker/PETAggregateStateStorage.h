//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef PETAggregateStateStorage_h
#define PETAggregateStateStorage_h
@import Foundation;

@interface PETAggregateStateStorage : NSObject
/* class methods */
+ (id)storageInMemory;
+ (id)storageOnDisk:(id)disk;

/* instance methods */
- (void)expand:(unsigned long long)expand andRunWithLock:(id /* block */)lock;
- (void)runWithLock:(id /* block */)lock;
- (BOOL)resetLocked;
- (void)reset;
- (void)saveCorruptState;
@end

#endif /* PETAggregateStateStorage_h */