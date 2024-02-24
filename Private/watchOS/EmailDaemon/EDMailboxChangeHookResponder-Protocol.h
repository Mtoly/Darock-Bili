//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDMailboxChangeHookResponder_Protocol_h
#define EDMailboxChangeHookResponder_Protocol_h
@import Foundation;

@protocol EDMailboxChangeHookResponder <NSObject>
@optional
/* instance methods */
- (void)persistenceIsAddingMailboxWithDatabaseID:(long long)id objectID:(id)id generationWindow:(id)window;
- (void)persistenceDidUpdateServerCount:(long long)count forMailboxWithObjectID:(id)id generationWindow:(id)window;
- (void)persistenceDidUpdateMostRecentStatusCount:(long long)count forMailboxWithObjectID:(id)id generationWindow:(id)window;
- (void)persistenceDidUpdateLastSyncAndMostRecentStatusCount:(long long)count forMailboxWithObjectID:(id)id generationWindow:(id)window;
@end

#endif /* EDMailboxChangeHookResponder_Protocol_h */