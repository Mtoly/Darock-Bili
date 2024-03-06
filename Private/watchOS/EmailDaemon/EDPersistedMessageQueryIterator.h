//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDPersistedMessageQueryIterator_h
#define EDPersistedMessageQueryIterator_h
@import Foundation;

#include "EDMessagePersistence.h"
#include "EFCancelable-Protocol.h"

@class EFCancelationToken, EFQueue, EMMailboxScope, EMQuery, NSMutableArray, NSMutableSet, NSString;

@interface EDPersistedMessageQueryIterator : NSObject<EFCancelable> {
  /* instance variables */
  EDMessagePersistence *_messagePersistence;
  EMMailboxScope *_mailboxScope;
  EMQuery *_query;
  EFCancelationToken *_cancelationToken;
  EFQueue *_persistedMessageQueue;
  long long _remaining;
  NSMutableSet *_seenGlobalMessages;
  id /* block */ _handler;
  NSMutableArray *_batchedMessages;
  unsigned long long _batchSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMessagePersistence:(id)persistence query:(id)query batchSize:(long long)size firstBatchSize:(long long)size limit:(long long)limit handler:(id /* block */)handler;
- (void)_processPersistedMessages:(id)messages forceFlush:(BOOL)flush;
- (void)flush;
- (void)addPersistedMessage:(id)message;
- (void)addPersistedMessages:(id)messages;
- (BOOL)shouldCancel;
- (void)cancel;
@end

#endif /* EDPersistedMessageQueryIterator_h */