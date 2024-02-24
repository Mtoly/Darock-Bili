//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFSearchResponseQueue_h
#define MFSearchResponseQueue_h
@import Foundation;

#include "MFBaseSyncResponseQueue.h"

@class NSIndexSet, NSMutableIndexSet;

@interface MFSearchResponseQueue : MFBaseSyncResponseQueue {
  /* instance variables */
  unsigned int limit;
}

@property (readonly, retain, nonatomic) NSIndexSet *indexSet;

/* instance methods */
- (id)init;
- (BOOL)addItem:(id)item;
- (BOOL)flush;
- (unsigned long long)uidForItem:(id)item;
- (unsigned long long)flagsForItem:(id)item;
- (void)dealloc;
@end

#endif /* MFSearchResponseQueue_h */