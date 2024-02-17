//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFConversationStore_h
#define AFConversationStore_h
@import Foundation;

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AFConversationStore : NSObject

@property (readonly, nonatomic) NSMutableDictionary *conversationsByIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

/* instance methods */
- (id)init;
- (void)_registerConversation:(id)conversation withIdentifier:(id)identifier;
- (void)saveConversation:(id)conversation withIdentifier:(id)identifier completionBlock:(id /* block */)block;
- (void)fetchConversationWithIdentifier:(id)identifier completionBlock:(id /* block */)block;
- (void)removeConversationWithIdentifier:(id)identifier completionBlock:(id /* block */)block;
- (id)_conversationsByIdentifier;
@end

#endif /* AFConversationStore_h */