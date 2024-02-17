//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef NSMutableOrderedSet_EmailFoundationAdditions_h
#define NSMutableOrderedSet_EmailFoundationAdditions_h
@import Foundation;

@interface NSMutableOrderedSet (EmailFoundationAdditions)
/* instance methods */
- (id)ef_uniquedObject:(id)object;
- (void)ef_removeObjectsInArray:(id)array;
- (void)ef_insertObjects:(id)objects before:(id)before;
- (void)ef_insertObjects:(id)objects after:(id)after;
- (void)ef_insertObject:(id)object usingComparator:(id /* block */)comparator;
@end

#endif /* NSMutableOrderedSet_EmailFoundationAdditions_h */