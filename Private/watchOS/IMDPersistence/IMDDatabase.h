//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDDatabase_h
#define IMDDatabase_h
@import Foundation;

#include "IMDAttachmentQueries-Protocol.h"
#include "IMDChatQueries-Protocol.h"
#include "IMDDatabaseQueries-Protocol.h"
#include "IMDHandleQueries-Protocol.h"
#include "IMDKeyValueQueries-Protocol.h"
#include "IMDMessageQueries-Protocol.h"
#include "IMDNotificationQueries-Protocol.h"

@class NSString;

@interface IMDDatabase : NSObject<IMDKeyValueQueries, IMDDatabaseQueries, IMDHandleQueries, IMDMessageQueries, IMDAttachmentQueries, IMDNotificationQueries, IMDChatQueries>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_newSyndicationRangeForCMMMessageItem:(id)item syndicationIdentifier:(id)identifier shouldHideFromSyndication:(BOOL)syndication;
+ (BOOL)isServerProcess;
+ (id)sharedDatabase;
+ (id)synchronousDatabase;
+ (id)database;
+ (id)_databaseServer;
+ (id)_databaseClient;

/* instance methods */
- (id)_copyChatRecordsFromCoreSDBResults:(id)sdbresults;
- (id)chatRecordsFilteredByPredicate:(id)predicate;
- (void)fetchChatRecordsFilteredUsingPredicate:(id)predicate sortedUsingDescriptors:(id)descriptors limit:(unsigned long long)limit completionHandler:(id /* block */)handler;
- (void)fetchChatRecordsFilteredUsingPredicate:(id)predicate sortedUsingLastMessageDateAscending:(BOOL)ascending limit:(unsigned long long)limit completionHandler:(id /* block */)handler;
- (void)fetchChatRecordsFilteredUsingPredicate:(id)predicate sortedUsingLastMessageDateAscending:(BOOL)ascending olderThan:(id)than limit:(unsigned long long)limit completionHandler:(id /* block */)handler;
- (id)chatRecordsWithIdentifier:(id)identifier;
- (void)fetchChatRecordsWithPinningIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)_fetchChatRecordsWithHandles:(id)handles allowSubsetMatching:(BOOL)matching serviceName:(id)name displayName:(id)name groupID:(id)id style:(unsigned char)style completionHandler:(id /* block */)handler;
- (id)chatRecordsWithHandles:(id)handles serviceName:(id)name displayName:(id)name groupID:(id)id style:(unsigned char)style;
- (void)fetchChatRecordsWithAtLeastHandles:(id)handles serviceName:(id)name style:(unsigned char)style completionHandler:(id /* block */)handler;
- (void)fetchGroupPhotoPathsForChatsWithGroupIDs:(id)ids completionHandler:(id /* block */)handler;
- (void)resolveInconsistentGUIDForChatRecordWithGUID:(id)guid newGUID:(id)guid completionHandler:(id /* block */)handler;
- (void)moveMessageRecordsToRecoveryForChatRecordsWithGUIDs:(id)guids deleteDate:(id)date;
- (void)recoverMessageRecordsForChatRecordsWithGUIDs:(id)guids;
- (void)_recoverMessagePartsForChatRecordsWithGUIDs:(id)guids operation:(struct IMDSqlOperation { void * x0; void * x1; struct __CFString * x2; void * x3; struct IMDSqlStatement { void * x0; int x1; struct __CFString * x2; struct sqlite3 * x3; int x4; int x5; int x6; struct IMPerfMeasurement_t { struct IMFileLocation_t { char * x0; char * x1; char * x2; char * x3; int x4; } x0; unsigned long long x1; unsigned long long x2; struct __CFString * x3; double x4; double x5; double x6; } x7; } x4; struct __CFError * x5; })operation;
- (id)_restoredAttributedBodyForMessageGUID:(id)guid withRecoveredAttributedParts:(id)parts;
- (void)_updateMessageRecordForGUID:(id)guid withAttributedBody:(id)body operation:(struct IMDSqlOperation { void * x0; void * x1; struct __CFString * x2; void * x3; struct IMDSqlStatement { void * x0; int x1; struct __CFString * x2; struct sqlite3 * x3; int x4; int x5; int x6; struct IMPerfMeasurement_t { struct IMFileLocation_t { char * x0; char * x1; char * x2; char * x3; int x4; } x0; unsigned long long x1; unsigned long long x2; struct __CFString * x3; double x4; double x5; double x6; } x7; } x4; struct __CFError * x5; })operation;
- (void)_removeFromRecoverableMessagePartForMessageGUID:(id)guid operation:(struct IMDSqlOperation { void * x0; void * x1; struct __CFString * x2; void * x3; struct IMDSqlStatement { void * x0; int x1; struct __CFString * x2; struct sqlite3 * x3; int x4; int x5; int x6; struct IMPerfMeasurement_t { struct IMFileLocation_t { char * x0; char * x1; char * x2; char * x3; int x4; } x0; unsigned long long x1; unsigned long long x2; struct __CFString * x3; double x4; double x5; double x6; } x7; } x4; struct __CFError * x5; })operation;
- (id)_loadAttributedBodyTextForMessageWithGUID:(id)guid;
- (id)_loadRecoverableMessagePartsMetadataForChatGUID:(id)guid;
- (id)loadRecoverableMessagesMetadataGroupedByChatGUID;
- (id)_chatGUIDsForChatsWithRecoverableMessagesOlderThanDate:(id)date operation:(struct IMDSqlOperation { void * x0; void * x1; struct __CFString * x2; void * x3; struct IMDSqlStatement { void * x0; int x1; struct __CFString * x2; struct sqlite3 * x3; int x4; int x5; int x6; struct IMPerfMeasurement_t { struct IMFileLocation_t { char * x0; char * x1; char * x2; char * x3; int x4; } x0; unsigned long long x1; unsigned long long x2; struct __CFString * x3; double x4; double x5; double x6; } x7; } x4; struct __CFError * x5; } *)operation;
- (id)_chatGUIDsForChatsWithJunkMessagesOlderThanDate:(id)date operation:(struct IMDSqlOperation { void * x0; void * x1; struct __CFString * x2; void * x3; struct IMDSqlStatement { void * x0; int x1; struct __CFString * x2; struct sqlite3 * x3; int x4; int x5; int x6; struct IMPerfMeasurement_t { struct IMFileLocation_t { char * x0; char * x1; char * x2; char * x3; int x4; } x0; unsigned long long x1; unsigned long long x2; struct __CFString * x3; double x4; double x5; double x6; } x7; } x4; struct __CFError * x5; } *)operation;
- (BOOL)_deleteChatIfEmptyWithGUID:(id)guid lastMessageDate:(id)date operation:(struct IMDSqlOperation { void * x0; void * x1; struct __CFString * x2; void * x3; struct IMDSqlStatement { void * x0; int x1; struct __CFString * x2; struct sqlite3 * x3; int x4; int x5; int x6; struct IMPerfMeasurement_t { struct IMFileLocation_t { char * x0; char * x1; char * x2; char * x3; int x4; } x0; unsigned long long x1; unsigned long long x2; struct __CFString * x3; double x4; double x5; double x6; } x7; } x4; struct __CFError * x5; } *)operation;
- (void)_deleteTransfersInMessagePartsForChatGUID:(id)guid;
- (id)_updateChatsSyncStateQueryFor:(long long)for;
- (void)updateChatsSyncStatusTo:(long long)to forGUIDs:(id)guids;
- (void)postSharePlayNotificationForChatGUID:(id)guid faceTimeConversationUUID:(id)uuid handleIdentifier:(id)identifier localizedApplicationName:(id)name;
- (void)coreSpotlightDeleteAttachmentGUIDs:(id)guids;
- (void)deleteAttachmentsDirectWithPredicate:(id)predicate;
- (id)_updateAttachmentsSyncStateQueryFor:(long long)for;
- (void)updateAttachmentsSyncStatusTo:(long long)to forGUIDs:(id)guids;
- (void)fetchAttachmentRecordsFilteredUsingPredicate:(id)predicate limit:(unsigned long long)limit completionHandler:(id /* block */)handler;
- (id)_copyAttachmentRecordsFromCoreSDBResults:(id)sdbresults;
- (void)sendLegacyXPCCommandWithObject:(id)object reply:(id /* block */)reply;
- (id)_copyMessageRecordsFromCoreSDBResults:(id)sdbresults;
- (void)fetchLastMessageRecordForChatRecordWithRowID:(long long)id completionHandler:(id /* block */)handler;
- (void)_fetchMessageRecordsForChatRecordWithGUID:(id)guid filteredUsingPredicate:(id)predicate sortedUsingDescriptors:(id)descriptors limit:(unsigned long long)limit completionHandler:(id /* block */)handler;
- (void)fetchMessageRecordsForChatRecordWithGUID:(id)guid filteredUsingPredicate:(id)predicate sortedUsingDescriptors:(id)descriptors limit:(unsigned long long)limit completionHandler:(id /* block */)handler;
- (void)fetchMessageRecordsFilteredUsingPredicate:(id)predicate sortedUsingDescriptors:(id)descriptors limit:(unsigned long long)limit completionHandler:(id /* block */)handler;
- (void)fetchMessageRecordWithGUID:(id)guid excludeRecoverableMessages:(BOOL)messages completionHandler:(id /* block */)handler;
- (id)_updateMessageSyncStateQueryFor:(long long)for;
- (void)updateMessagesSyncStatusTo:(long long)to forGUIDs:(id)guids;
- (BOOL)_updateSyndicatedMessageItem:(id)item newMessageItem:(id)item newSyndicationRange:(id)range;
- (void)updateAttachmentSyndicationRanges:(id)ranges shouldHideFromSyndication:(BOOL)syndication;
- (void)_updateMessageItemSyndicationRanges:(id)ranges messagePartDescriptor:(id)descriptor shouldHideFromSyndication:(BOOL)syndication;
- (void)updateMessageSyndicationRanges:(id)ranges shouldHideFromSyndication:(BOOL)syndication;
- (id)_updateMessageSyncedSyndicationRangesQueryFor:(long long)for;
- (void)updateMessagesSyncedSyndicationRangesForGUIDs:(id)guids toStatus:(long long)status;
- (void)_updateMessagesSyncedSyndicationRangesToSyncedForGUIDs:(id)guids;
- (void)moveMessageRecordsToRecoveryForMessageGUIDs:(id)guids deleteDate:(id)date;
- (void)deleteRecoverableMessagesOlderThanDays:(long long)days;
- (void)deleteJunkMessagesOlderThanDays:(long long)days;
- (void)permanentlyDeleteRecoverableMessagesInChatsWithGUIDs:(id)guids completionHandler:(id /* block */)handler;
- (id)_permanentlyDeleteRecoverableMessagesInChatsWithGUIDs:(id)guids beforeDate:(id)date;
- (id)_mostRecentRecoverableMessageDateForChatWithGUID:(id)guid operation:(struct IMDSqlOperation { void * x0; void * x1; struct __CFString * x2; void * x3; struct IMDSqlStatement { void * x0; int x1; struct __CFString * x2; struct sqlite3 * x3; int x4; int x5; int x6; struct IMPerfMeasurement_t { struct IMFileLocation_t { char * x0; char * x1; char * x2; char * x3; int x4; } x0; unsigned long long x1; unsigned long long x2; struct __CFString * x3; double x4; double x5; double x6; } x7; } x4; struct __CFError * x5; } *)operation;
- (void)_permanentlyDeleteJunkMessagesBeforeDate:(id)date;
- (id)_mostRecentJunkMessageDateForChatWithGUID:(id)guid operation:(struct IMDSqlOperation { void * x0; void * x1; struct __CFString * x2; void * x3; struct IMDSqlStatement { void * x0; int x1; struct __CFString * x2; struct sqlite3 * x3; int x4; int x5; int x6; struct IMPerfMeasurement_t { struct IMFileLocation_t { char * x0; char * x1; char * x2; char * x3; int x4; } x0; unsigned long long x1; unsigned long long x2; struct __CFString * x3; double x4; double x5; double x6; } x7; } x4; struct __CFError * x5; } *)operation;
- (long long)_countMessagesExcludingGroupPhotosInChatWithGUID:(id)guid isRecoverable:(BOOL)recoverable operation:(struct IMDSqlOperation { void * x0; void * x1; struct __CFString * x2; void * x3; struct IMDSqlStatement { void * x0; int x1; struct __CFString * x2; struct sqlite3 * x3; int x4; int x5; int x6; struct IMPerfMeasurement_t { struct IMFileLocation_t { char * x0; char * x1; char * x2; char * x3; int x4; } x0; unsigned long long x1; unsigned long long x2; struct __CFString * x3; double x4; double x5; double x6; } x7; } x4; struct __CFError * x5; } *)operation;
- (id)recoverableMessagesMetadataPendingCloudKitSaveWithLimit:(unsigned long long)limit;
- (id)recoverableMessagesMetadataPendingCloudKitDeleteWithLimit:(unsigned long long)limit;
- (void)updateRecoverableMessageSyncState:(long long)state forMessageRowID:(long long)id onPartIndex:(long long)index;
- (void)updateRecoverableMessageSyncState:(long long)state forMessageGUIDs:(id)guids;
- (void)storeRecoverableMessagePartWithBody:(id)body forMessageWithGUID:(id)guid deleteDate:(id)date;
- (void)clearRecoverableMessageTombStones;
- (id)_updateRecoverableMessageSyncStateForMessageGUIDsQueryFor:(long long)for;
- (void)fetchDataForKey:(id)key completionHandler:(id /* block */)handler;
- (void)fetchInteger64ForKey:(id)key completionHandler:(id /* block */)handler;
- (void)storeData:(id)data forKey:(id)key;
@end

#endif /* IMDDatabase_h */