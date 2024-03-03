//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDConversationMultipleRemoteStorage_h
#define EDConversationMultipleRemoteStorage_h
@import Foundation;

#include "EDConversationRemoteCloudKitStorage.h"
#include "EDConversationRemoteStorage-Protocol.h"
#include "EDConversationRemoteStorageDelegate-Protocol.h"
#include "EDTransactionService.h"
#include "EFLoggable-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface EDConversationMultipleRemoteStorage : NSObject<EDConversationRemoteStorageDelegate, EDConversationRemoteStorage, EFLoggable>

@property (weak, nonatomic) NSObject<EDConversationRemoteStorageDelegate> *delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue;
@property (retain, nonatomic) NSObject<EDConversationRemoteStorage> *kvsStorage;
@property (retain, nonatomic) EDConversationRemoteCloudKitStorage *cloudKitStorage;
@property (retain, nonatomic) EDTransactionService *dataReplicationTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)log;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (id)dictionaryForKey:(id)key;
- (id)dictionaryRepresentation;
- (void)removeDictionaryForKey:(id)key;
- (void)setDictionary:(id)dictionary forKey:(id)key;
- (BOOL)synchronize;
- (void)refresh;
- (BOOL)isInitialized;
- (id)storageName;
- (void)conversationRemoteStorage:(id)storage didChangeEntries:(id)entries reason:(long long)reason;
- (void)conversationRemoteStorageDidInitialize:(id)initialize;
- (void)conversationRemoteStorageDidResetData:(id)data;
- (void)conversationRemoteStorageWillResetData:(id)data;
- (void)_saveChanges:(id)changes fromStorage:(id)storage toStorage:(id)storage synchronize:(BOOL)synchronize;
- (void)_handleStorageReady:(id)ready;
- (void)_replicateAllContentFromStore:(id)store toStore:(id)store synchronize:(BOOL)synchronize;
@end

#endif /* EDConversationMultipleRemoteStorage_h */