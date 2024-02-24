//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef NSObject_EFKVOAdditions_h
#define NSObject_EFKVOAdditions_h
@import Foundation;

@interface NSObject (EFKVOAdditions)
/* instance methods */
- (id)ef_onScheduler:(id)scheduler;
- (id)ef_observeKeyPath:(id)path options:(unsigned long long)options usingBlock:(id /* block */)block;
- (id)ef_observeKeyPath:(id)path options:(unsigned long long)options autoCancelToken:(BOOL)token usingBlock:(id /* block */)block;
@end

#endif /* NSObject_EFKVOAdditions_h */