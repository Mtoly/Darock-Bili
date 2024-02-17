//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 133.300.51.0.0
//
#ifndef CommunicationsFilterBlockListCache_h
#define CommunicationsFilterBlockListCache_h
@import Foundation;

#include "CMFNotificationObserver.h"

@class NSMutableArray;

@interface CommunicationsFilterBlockListCache : NSObject {
  /* instance variables */
  NSMutableArray *_recentItems;
  int _notifyEmptyListToken;
  BOOL _listIsEmpty;
}

@property (readonly, nonatomic) CMFNotificationObserver *blockListUpdateObserver;

/* instance methods */
- (id)init;
- (long long)cachedResponseForItem:(id)item;
- (void)removeItemFromCache:(id)cache;
- (void)setResponse:(BOOL)response forItem:(id)item;
- (void)syncListEmptyState;
- (void)_blockListChanged;
@end

#endif /* CommunicationsFilterBlockListCache_h */