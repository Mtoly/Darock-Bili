//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLBulletinStatePersistentStoreProtocol_Protocol_h
#define CSLBulletinStatePersistentStoreProtocol_Protocol_h
@import Foundation;

@protocol CSLBulletinStatePersistentStoreProtocol <NSObject>
/* instance methods */
- (void)fetchBulletinStatesOnOrAfterDate:(id)date withCallbackQueue:(id)queue completion:(id /* block */)completion;
- (void)removeBulletinStatesBeforeDate:(id)date includeNonClearable:(BOOL)clearable callbackQueue:(id)queue completion:(id /* block */)completion;
- (void)removeItem:(id)item callbackQueue:(id)queue completion:(id /* block */)completion;
- (void)insertOrReplaceItem:(id)item callbackQueue:(id)queue completion:(id /* block */)completion;
- (void)removeItemWithUniversalSectionID:(id)id publisherMatchID:(id)id callbackQueue:(id)queue completion:(id /* block */)completion;
@end

#endif /* CSLBulletinStatePersistentStoreProtocol_Protocol_h */