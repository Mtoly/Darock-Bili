//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 200.200.0.0.0
//
#ifndef EMFIndexManager_h
#define EMFIndexManager_h
@import Foundation;

#include "EMFInvertedIndex.h"

@class NSBundle, NSLock;

@interface EMFIndexManager : NSObject {
  /* instance variables */
  NSBundle *_searchEngineBundle;
  NSLock *_defaultIndexLock;
  NSLock *_stemmedIndexLock;
  BOOL _triedLoadingDefaultIndex;
  BOOL _triedLoadingStemmedIndex;
}

@property (copy, nonatomic) EMFInvertedIndex *defaultIndex;
@property (copy, nonatomic) EMFInvertedIndex *stemmedIndex;

/* instance methods */
- (id)initWithBundle:(id)bundle;
- (void)preheatIndexes;
@end

#endif /* EMFIndexManager_h */