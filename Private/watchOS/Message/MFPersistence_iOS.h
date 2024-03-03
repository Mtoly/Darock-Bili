//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFPersistence_iOS_h
#define MFPersistence_iOS_h
@import Foundation;

#include "EDPersistence.h"
#include "EDAccountsProvider-Protocol.h"
#include "EFLoggable-Protocol.h"
#include "MFMailMessageLibrary.h"

@class EDAttachmentPersistenceManager, EDBIMIManager, EDConversationPersistence, EDDataDetectionPersistence, EDLocalActionPersistence, EDMailboxActionPersistence, EDMailboxPersistence, EDMessageChangeManager, EDMessagePersistence, EDPersistenceDatabase, EDReadLaterPersistence, EDRemindMeNotificationController, EDRemoteContentCacheConfiguration, EDRemoteContentManager, EDRemoteContentPersistence, EDRichLinkPersistence, EDSearchableIndexManager, EDSenderPersistence, EDServerMessagePersistenceFactory, EDThreadPersistence, EMRemoteContentURLCache, EMRemoteContentURLSession, NSString;
@protocol EDRemoteSearchProvider, EMUserProfileProvider;

@interface MFPersistence_iOS : EDPersistence<EFLoggable> {
  /* instance variables */
  EDConversationPersistence *_conversationPersistence;
  EDPersistenceDatabase *_database;
  EDDataDetectionPersistence *_dataDetectionPersistence;
  EDLocalActionPersistence *_localActionPersistence;
  EDMailboxActionPersistence *_mailboxActionPersistence;
  EDMessageChangeManager *_messageChangeManager;
  EDMessagePersistence *_messagePersistence;
  NSObject<EDRemoteSearchProvider> *_remoteSearchProvider;
  EDSearchableIndexManager *_searchableIndexManager;
  EDServerMessagePersistenceFactory *_serverMessagePersistenceFactory;
  EDThreadPersistence *_threadPersistence;
  EDSenderPersistence *_senderPersistence;
  EDRemoteContentManager *_remoteContentManager;
  EDRemoteContentPersistence *_remoteContentPersistence;
  EDRichLinkPersistence *_richLinkPersistence;
  EDAttachmentPersistenceManager *_attachmentPersistenceManager;
  EDRemoteContentCacheConfiguration *_remoteContentCacheConfiguration;
  EMRemoteContentURLCache *_remoteContentURLCache;
  EMRemoteContentURLSession *_remoteContentURLSession;
  EDReadLaterPersistence *_readLaterPersistence;
  EDBIMIManager *_bimiManager;
  EDRemindMeNotificationController *_remindMeNotificationController;
}

@property (weak, nonatomic) MFMailMessageLibrary *library;
@property (retain, nonatomic) EDMailboxPersistence *mailboxPersistence;
@property (retain, nonatomic) NSObject<EDAccountsProvider> *accountsProvider;
@property (retain, nonatomic) NSObject<EMUserProfileProvider> *userProfileProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)log;

/* instance methods */
- (id)initWithPath:(id)path inMemoryIdentifier:(id)identifier library:(id)library propertyMapper:(id)mapper;
- (void)setUpWithMailboxProvider:(id)provider remoteSearchProvider:(id)provider;
- (void)_configureSearchableIndexManagerIfNecessary;
- (void)_configureAttachmentPersistenceManager;
- (void)scheduleRecurringActivity;
- (void)test_tearDown;
- (id)persistenceStatistics;
- (id)conversationPersistence;
- (id)database;
- (id)dataDetectionPersistence;
- (id)localActionPersistence;
- (id)mailboxActionPersistence;
- (id)messageChangeManager;
- (id)messagePersistence;
- (id)remoteSearchProvider;
- (id)searchableIndexManager;
- (id)serverMessagePersistenceFactory;
- (id)threadPersistence;
- (id)senderPersistence;
- (id)remoteContentManager;
- (id)remoteContentPersistence;
- (id)richLinkPersistence;
- (id)attachmentPersistenceManager;
- (id)remoteContentCacheConfiguration;
- (id)remoteContentURLCache;
- (void)setRemoteContentURLCache:(id)urlcache;
- (id)remoteContentURLSession;
- (void)setRemoteContentURLSession:(id)urlsession;
- (id)readLaterPersistence;
- (id)bimiManager;
- (id)remindMeNotificationController;
@end

#endif /* MFPersistence_iOS_h */