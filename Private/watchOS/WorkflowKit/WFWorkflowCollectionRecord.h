//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFWorkflowCollectionRecord_h
#define WFWorkflowCollectionRecord_h
@import Foundation;

#include "WFRecord.h"

@class NSData, NSOrderedSet, NSString, WFWorkflowIcon;

@interface WFWorkflowCollectionRecord : WFRecord

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) WFWorkflowIcon *icon;
@property (nonatomic) long long lastSyncedHash;
@property (nonatomic) long long wantedEncryptedSchemaVersion;
@property (nonatomic) long long lastSyncedEncryptedSchemaVersion;
@property (readonly, nonatomic) BOOL deleted;
@property (readonly, nonatomic) BOOL folder;
@property (copy, nonatomic) NSOrderedSet *lastRemoteCollectionOrdering;
@property (copy, nonatomic) NSOrderedSet *lastRemoteCollectionOrderingSubset;
@property (copy, nonatomic) NSOrderedSet *collectionOrdering;
@property (copy, nonatomic) NSOrderedSet *lastRemoteShortcutOrdering;
@property (copy, nonatomic) NSOrderedSet *lastRemoteShortcutOrderingSubset;
@property (copy, nonatomic) NSOrderedSet *shortcutOrdering;
@property (copy, nonatomic) NSData *cloudKitFolderRecordMetadata;
@property (copy, nonatomic) NSData *cloudKitOrderingRecordMetadata;

/* instance methods */
- (long long)computedSyncHash;
- (BOOL)saveChangesToStorage:(id)storage error:(id *)error;
- (BOOL)isDeleted;
- (BOOL)isFolder;
@end

#endif /* WFWorkflowCollectionRecord_h */