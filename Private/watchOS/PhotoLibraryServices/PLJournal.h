//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLJournal_h
#define PLJournal_h
@import Foundation;

#include "PLJournalFile.h"

@class NSDictionary, NSFileHandle, NSURL;

@interface PLJournal : NSObject {
  /* instance variables */
  unsigned char _snapshotMode;
  NSFileHandle *_fileHandleForAppendingUpdates;
}

@property (readonly, nonatomic) PLJournalFile *pendingSnapshotJournal;
@property (readonly, nonatomic) PLJournalFile *pendingChangeJournal;
@property (readonly, nonatomic) PLJournalFile *prepareMarker;
@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) PLJournalFile *snapshotJournal;
@property (readonly, nonatomic) PLJournalFile *changeJournal;
@property (readonly, nonatomic) Class payloadClass;

/* class methods */
+ (id)journalURLForBaseURL:(id)url payloadClassId:(id)id journalType:(id)type;
+ (id)metadataURLForBaseURL:(id)url payloadClassId:(id)id pending:(BOOL)pending;
+ (id)snapshotFinishMarkerURLForBaseURL:(id)url;
+ (BOOL)createSnapshotFinishMarkerForBaseURL:(id)url error:(id *)error;
+ (BOOL)removeSnapshotFinishMarkerForBaseURL:(id)url error:(id *)error;
+ (BOOL)snapshotFinishMarkerExistsForBaseURL:(id)url;
+ (BOOL)recoverJournalsIfNecessaryForBaseURL:(id)url payloadClasses:(id)classes error:(id *)error;
+ (BOOL)createSnapshotsForBaseURL:(id)url payloadClasses:(id)classes snapshotJournalBlock:(id /* block */)block createOnlyIfNecessary:(BOOL)necessary error:(id *)error;
+ (BOOL)appendSnapshotsForBaseURL:(id)url payloadClasses:(id)classes snapshotJournalBlock:(id /* block */)block error:(id *)error;
+ (BOOL)_performSnapshotsForBaseURL:(id)url snapshotMode:(unsigned char)mode payloadClasses:(id)classes snapshotJournalBlock:(id /* block */)block createOnlyIfNecessary:(BOOL)necessary error:(id *)error;
+ (BOOL)_finishFullSnapshotForBaseURL:(id)url snapshotSucceeded:(BOOL)succeeded snapshotMode:(unsigned char)mode journals:(id)journals error:(id *)error;

/* instance methods */
- (BOOL)appendUpdatePayloadWithPayloadID:(id)id rawAttributes:(id)attributes error:(id *)error;
- (id)initWithBaseURL:(id)url payloadClass:(Class)class;
- (void)removeMetadata;
- (id)metadataURLPending:(BOOL)urlpending;
- (BOOL)_removeMetadataPending:(BOOL)pending error:(id *)error;
- (BOOL)_replaceMetadataWithPendingMetadataError:(id *)error;
- (id)_readMetadataPending:(BOOL)pending;
- (BOOL)_updateMetadataWithMetadata:(id)metadata replace:(BOOL)replace pending:(BOOL)pending error:(id *)error;
- (BOOL)removeJournalFilesWithError:(id *)error;
- (BOOL)_isPendingJournalAuthoritative;
- (BOOL)_recoverJournalWithError:(id *)error;
- (BOOL)_prepareForSnapshotWithMode:(unsigned char)mode error:(id *)error;
- (BOOL)_finishSnapshotWithMode:(unsigned char)mode snapshotSuccess:(BOOL)success error:(id *)error;
- (BOOL)_performSnapshotWithMode:(unsigned char)mode usingNextEntryBlock:(id /* block */)block createOnlyIfNecessary:(BOOL)necessary error:(id *)error;
- (BOOL)prepareForCreateSnapshotWithError:(id *)error;
- (BOOL)finishCreateSnapshot:(BOOL)snapshot error:(id *)error;
- (BOOL)createSnapshotUsingNextPayloadBlock:(id /* block */)block createOnlyIfNecessary:(BOOL)necessary error:(id *)error;
- (BOOL)appendSnapshotUsingNextEntryBlock:(id /* block */)block error:(id *)error;
- (BOOL)coalesceChangesToSnapshotWithError:(id *)error;
- (BOOL)appendChangeEntries:(id)entries error:(id *)error;
- (BOOL)prepareForAppendChangeEntriesWithError:(id *)error;
- (BOOL)appendChangeEntryAfterPrepare:(id)prepare error:(id *)error;
- (BOOL)finishAppendChangeEntriesWithError:(id *)error;
- (BOOL)snapshotJournalFileSize:(unsigned long long *)size changeJournalFileSize:(unsigned long long *)size error:(id *)error;
- (BOOL)enumeratePayloadsUsingBlock:(id /* block */)block error:(id *)error;
- (unsigned long long)countOfInsertEntriesWithError:(id *)error;
- (unsigned long long)currentPayloadVersionWithError:(id *)error;
- (BOOL)enumerateEntriesUsingBlock:(id /* block */)block decodePayload:(BOOL)payload error:(id *)error;
- (id)_payloadTooNewErrorWithPayloadVersion:(long long)version;
@end

#endif /* PLJournal_h */