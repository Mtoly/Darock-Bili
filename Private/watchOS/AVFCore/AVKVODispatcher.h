//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVKVODispatcher_h
#define AVKVODispatcher_h
@import Foundation;

#include "AVCallbackContextRegistry.h"

@interface AVKVODispatcher : NSObject {
  /* instance variables */
  AVCallbackContextRegistry *_callbackContextRegistry;
}

/* class methods */
+ (id)sharedKVODispatcher;

/* instance methods */
- (id)startObservingObject:(id)object weakObserver:(id)observer forKeyPath:(id)path options:(unsigned long long)options context:(void *)context;
- (id)startObservingObject:(id)object weakObserver:(id)observer forTwoPartKeyPath:(id)path options:(unsigned long long)options context:(void *)context;
- (id)initWithDescriptionOfHowAllObservedPropertyChangesAreSerializedWithDispatcherDeallocation:(id)deallocation;
- (void)dealloc;
- (id)startObservingValueAtKeyPath:(id)path ofObject:(id)object options:(unsigned long long)options usingBlock:(id /* block */)block;
- (id)startObservingValueAtTwoPartKeyPath:(id)path ofObject:(id)object options:(unsigned long long)options usingBlock:(id /* block */)block;
- (id)startObservingValueAtKeyPath:(id)path withoutKeepingAliveObservedObject:(id)object options:(unsigned long long)options usingBlock:(id /* block */)block;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
@end

#endif /* AVKVODispatcher_h */