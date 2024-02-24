//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKCurrentConversationsManager_h
#define CKCurrentConversationsManager_h
@import Foundation;

@class IMDoubleLinkedList, NSCountedSet, NSMutableDictionary;

@interface CKCurrentConversationsManager : NSObject

@property (retain, nonatomic) NSCountedSet *currentConversations;
@property (retain, nonatomic) NSMutableDictionary *idToNodeDictionary;
@property (retain, nonatomic) IMDoubleLinkedList *orderedKeys;
@property (readonly, nonatomic) unsigned long long cacheSize;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)addConversation:(id)conversation;
- (void)removeConversation:(id)conversation;
- (void)purgeConversation:(id)conversation;
- (void)purgeConversations:(id)conversations;
- (void)pruneCache;
- (void)pruneCacheToSize:(unsigned long long)size;
- (void)loadHistoryForConversation:(id)conversation keepAllCurrentlyLoadedMessages:(BOOL)messages;
- (BOOL)_canDumpConversationFromCache:(id)cache;
- (void)_prepareToDumpCachedConversation:(id)conversation;
@end

#endif /* CKCurrentConversationsManager_h */