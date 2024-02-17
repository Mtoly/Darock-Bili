//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef _SFXPCAsyncIterator_h
#define _SFXPCAsyncIterator_h
@import Foundation;

#include "_TtP7Sharing27_SFXPCAsyncIteratorProtocol_-Protocol.h"

@interface _SFXPCAsyncIterator : NSObject<Sharing._SFXPCAsyncIteratorProtocol> { // (Swift)
  /* instance variables */
   uuid;
   iterator;
   containerRegistry;
   currentTask;
}

/* instance methods */
- (void)dealloc;
- (void)xpcNextWithCompletion:(id /* block */)completion;
- (void)xpcCancel;
- (id)init;
@end

#endif /* _SFXPCAsyncIterator_h */