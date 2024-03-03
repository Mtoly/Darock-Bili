//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICollectionViewSubviewManager_h
#define _UICollectionViewSubviewManager_h
@import Foundation;

#include "_UICollectionViewSubviewManagerDelegate-Protocol.h"

@class NSMutableDictionary;

@interface _UICollectionViewSubviewManager : NSObject {
  /* instance variables */
  NSMutableDictionary *_cells;
  NSMutableDictionary *_supplementaries;
  NSMutableDictionary *_decorations;
  BOOL _indexPathValidationEnabled;
  NSObject<_UICollectionViewSubviewManagerDelegate> *_delegate;
}

/* instance methods */
- (id)init;
- (id)description;
@end

#endif /* _UICollectionViewSubviewManager_h */