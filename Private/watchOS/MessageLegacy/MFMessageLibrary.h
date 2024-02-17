//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 22.0.0.0.0
//
#ifndef MFMessageLibrary_h
#define MFMessageLibrary_h
@import Foundation;

#include "MFAttachmentLibraryDataProvider.h"

@class NSString;

@interface MFMessageLibrary : NSObject {
  /* instance variables */
  NSString *_path;
  MFAttachmentLibraryDataProvider *_attachmentDataProvider;
}

/* instance methods */
- (id)initWithPath:(id)path;
- (void)dealloc;
- (void)flagsChangedForMessages:(id)messages flags:(id)flags oldFlagsByMessage:(id)message;
- (void)commit;
- (id)duplicateMessages:(id)messages newRemoteIDs:(id)ids forMailbox:(id)mailbox setFlags:(unsigned long long)flags clearFlags:(unsigned long long)flags messageFlagsForMessages:(id)messages createNewCacheFiles:(BOOL)files;
- (void)updateThreadingInfoForMessage:(id)message fromHeaders:(id)headers;
- (void)updateAdditionalThreadingInfoForSentMessageWithHeaders:(id)headers externalConversationID:(long long)id;
- (id)messagesForMailbox:(id)mailbox olderThanNumberOfDays:(int)days;
- (id)serverSearchResultMessagesForMailbox:(id)mailbox;
- (id)messagesNeedingSyncConfirmationForMailbox:(id)mailbox;
- (id)dateOfOldestNonSearchResultMessageInMailbox:(id)mailbox;
- (id)dateOfOldestNonIndexedNonSearchResultMessageInMailbox:(id)mailbox;
- (id)dateOfNewestNonSearchResultMessageInMailbox:(id)mailbox;
- (id)messagesWithSummariesForMailbox:(id)mailbox range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)messagesWithoutSummariesForMailbox:(id)mailbox;
- (id)messagesWithSummariesForMailbox:(id)mailbox fromRowID:(unsigned int)id limit:(unsigned int)limit;
- (id)messagesWithoutSummariesForMailbox:(id)mailbox fromRowID:(unsigned int)id limit:(unsigned int)limit;
- (id)orderedBatchOfMessagesEndingAtRowId:(unsigned int)id limit:(unsigned int)limit success:(BOOL *)success;
- (unsigned int)unreadCountForMailbox:(id)mailbox;
- (unsigned int)unreadCountForMailbox:(id)mailbox matchingCriterion:(id)criterion;
- (unsigned int)unreadCountForAggregatedMailboxes:(id)mailboxes;
- (unsigned int)unreadCountForAggregatedMailboxes:(id)mailboxes matchingCriterion:(id)criterion;
- (unsigned int)attachmentCountForMailboxes:(id)mailboxes;
- (unsigned int)deletedCountForMailbox:(id)mailbox;
- (unsigned int)allNonDeleteCountForMailbox:(id)mailbox includeServerSearchResults:(BOOL)results includeThreadSearchResults:(BOOL)results;
- (unsigned int)nonDeletedCountForAggregatedMailboxes:(id)mailboxes;
- (unsigned int)nonDeletedCountForAggregatedMailboxes:(id)mailboxes includeServerSearchResults:(BOOL)results includeThreadSearchResults:(BOOL)results;
- (unsigned int)nonDeletedCountForMailbox:(id)mailbox;
- (unsigned int)nonDeletedCountForMailbox:(id)mailbox includeServerSearchResults:(BOOL)results includeThreadSearchResults:(BOOL)results;
- (unsigned int)totalCountForMailbox:(id)mailbox;
- (unsigned long long)serverUnreadOnlyOnServerCountForMailbox:(id)mailbox;
- (void)setServerUnreadOnlyOnServerCount:(unsigned long long)count forMailbox:(id)mailbox;
- (long long)statusCountDeltaForMailbox:(id)mailbox;
- (void)setLastSyncAndMostRecentStatusCount:(unsigned long long)count forMailbox:(id)mailbox;
- (void)adjustLastSyncStatusCountBy:(long long)by forMailbox:(id)mailbox;
- (unsigned long long)mostRecentStatusCountForMailbox:(id)mailbox;
- (void)setMostRecentStatusCount:(unsigned long long)count forMailbox:(id)mailbox;
- (id)oldestMessageInMailbox:(id)mailbox;
- (id)messageWithRemoteID:(id)id inRemoteMailbox:(id)mailbox;
- (id)copyMessagesWithRemoteIDs:(id)ids options:(unsigned int)options inRemoteMailbox:(id)mailbox;
- (unsigned int)maximumRemoteIDForMailbox:(id)mailbox;
- (unsigned int)minimumRemoteIDForMailbox:(id)mailbox;
- (BOOL)canProvideMinimumRemoteID;
- (id)sequenceIdentifierForMailbox:(id)mailbox;
- (void)setSequenceIdentifier:(id)identifier forMailbox:(id)mailbox;
- (id)sequenceIdentifierForMessagesWithRemoteIDs:(id)ids inMailbox:(id)mailbox;
- (void)setSequenceIdentifier:(id)identifier forMessageWithLibraryID:(unsigned int)id;
- (void)setSequenceIdentifier:(id)identifier forMessagesWithRemoteIDs:(id)ids inMailbox:(id)mailbox;
- (id)getDetailsForMessagesWithRemoteIDInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range fromMailbox:(id)mailbox;
- (id)getDetailsForAllMessagesFromMailbox:(id)mailbox;
- (id)getDetailsForMessages:(unsigned long long)messages absoluteBottom:(unsigned long long)bottom topOfDesiredRange:(unsigned long long)range range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)range fromMailbox:(id)mailbox;
- (id)messageWithMessageID:(id)id options:(unsigned int)options inMailbox:(id)mailbox;
- (id)messagesWithMessageIDHeader:(id)idheader;
- (id)messageWithLibraryID:(unsigned int)id options:(unsigned int)options inMailbox:(id)mailbox;
- (BOOL)shouldCancel;
- (void)compactMessages:(id)messages permanently:(BOOL)permanently;
- (void)compactMessages:(id)messages;
- (void)removeAllMessagesFromMailbox:(id)mailbox removeMailbox:(BOOL)mailbox andNotify:(BOOL)notify;
- (void)compactMailbox:(id)mailbox;
- (BOOL)renameMailboxes:(id)mailboxes to:(id)to;
- (void)deleteMailboxes:(id)mailboxes account:(id)account;
- (id)messageWithMessageID:(id)id inMailbox:(id)mailbox;
- (id)dataConsumerForMessage:(id)message part:(id)part;
- (id)dataConsumerForMessage:(id)message part:(id)part incomplete:(BOOL)incomplete;
- (id)dataConsumerForMessage:(id)message isPartial:(BOOL)partial;
- (id)dataConsumerForMessage:(id)message;
- (void)setData:(id)data forMessage:(id)message isPartial:(BOOL)partial;
- (void)setSummary:(id)summary forMessage:(id)message;
- (void)updateMessage:(id)message withMetadata:(id /* block */)metadata;
- (id)metadataForMessage:(id)message ofClass:(Class)class key:(id)key;
- (id)loadMeetingExternalIDForMessage:(id)message;
- (id)loadMeetingDataForMessage:(id)message;
- (id)loadMeetingMetadataForMessage:(id)message;
- (id)headerDataForMessage:(id)message;
- (id)bodyDataForMessage:(id)message;
- (void)sendMessagesMatchingCriterion:(id)criterion to:(id)to options:(unsigned int)options range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)sendMessagesMatchingCriterion:(id)criterion to:(id)to options:(unsigned int)options;
- (id)messagesMatchingCriterion:(id)criterion options:(unsigned int)options range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)messagesMatchingCriterion:(id)criterion options:(unsigned int)options;
- (id)messagesMatchingCriterion:(id)criterion options:(unsigned int)options success:(BOOL *)success;
- (id)messagesMatchingCriterion:(id)criterion options:(unsigned int)options range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range success:(BOOL *)success;
- (BOOL)libraryExists;
- (BOOL)isBusy;
- (void)closeDatabaseConnections;
- (void)deletePOPUID:(id)popuid inMailbox:(id)mailbox;
- (id)UIDsToDeleteInMailbox:(id)mailbox;
- (id)deletedUIDsInMailbox:(id)mailbox;
- (id)allUIDsInMailbox:(id)mailbox;
- (id)hiddenPOPUIDsInMailbox:(id)mailbox;
- (void)lockDBForWriting;
- (id)filterContiguousMessages:(id)messages forCriterion:(id)criterion options:(unsigned int)options;
- (long long)createLibraryIDForAccount:(id)account;
- (long long)libraryIDForAccount:(id)account;
- (void)invalidateAccount:(id)account;
- (void)deleteAccount:(id)account;
- (void)appendOfflineCacheOperation:(id)operation forAccount:(long long)account lastTemporaryID:(unsigned int)id;
- (void)markOfflineCacheOperationAsComplete:(id)complete;
- (id)offlineCacheOperationsForAccount:(long long)account lastTemporaryID:(unsigned int *)id;
- (void)appendOfflineCacheReplayData:(id)data forAccountID:(long long)id;
- (void)consumeOfflineCacheReplayDataForAccount:(long long)account usingBlock:(id /* block */)block;
- (void)deleteOfflineCacheDataForAccount:(long long)account;
- (void)setMessage:(id)message isPartial:(BOOL)partial;
- (void)setFlags:(unsigned long long)flags forMessage:(id)message;
- (void)setNumberOfAttachments:(unsigned int)attachments isSigned:(BOOL)signed isEncrypted:(BOOL)encrypted forMessage:(id)message;
- (void)setFlagsFromDictionary:(id)dictionary forMessagesInMailboxURLString:(id)urlstring;
- (id)setFlagsFromDictionary:(id)dictionary forMessages:(id)messages;
- (void)setFlagsForMessages:(id)messages mask:(unsigned long long)mask;
- (void)updateFlagsForMessagesInPlace:(id)place success:(BOOL *)success;
- (id)urlForMailboxID:(unsigned int)id;
- (BOOL)isMessageContentsLocallyAvailable:(id)available;
- (id)addMessages:(id)messages withMailbox:(id)mailbox fetchBodies:(BOOL)bodies newMessagesByOldMessage:(id)message remoteIDs:(id)ids setFlags:(unsigned long long)flags clearFlags:(unsigned long long)flags messageFlagsForMessages:(id)messages copyFiles:(BOOL)files addPOPUIDs:(BOOL)popuids dataSectionsByMessage:(id)message;
- (id)dataPathForMessage:(id)message;
- (id)dataPathForMessage:(id)message part:(id)part;
- (id)mailboxUidForMessage:(id)message;
- (id)dataForMimePart:(id)part isComplete:(BOOL *)complete;
- (id)fullBodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id *)available;
- (id)bodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id *)available isComplete:(BOOL *)complete;
- (void)deleteDataForMessage:(id)message;
- (id)remoteStoreForMessage:(id)message;
- (unsigned int)mailboxIDForURLString:(id)urlstring;
- (id)addMessages:(id)messages withMailbox:(id)mailbox fetchBodies:(BOOL)bodies newMessagesByOldMessage:(id)message;
- (void)setFlagsForMessages:(id)messages;
- (void)postFlagsChangedForMessages:(id)messages flags:(id)flags oldFlagsByMessage:(id)message;
- (void)postOldFlags:(unsigned long long)flags newFlags:(unsigned long long)flags forMessage:(id)message;
- (id)accountForMessage:(id)message;
- (id)bodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id *)available;
- (BOOL)hasCompleteDataForMimePart:(id)part;
- (id)storedIntegerPropertyWithName:(id)name;
- (void)setStoredIntegerPropertyWithName:(id)name value:(id)value;
- (id)dataProvider;
@end

#endif /* MFMessageLibrary_h */