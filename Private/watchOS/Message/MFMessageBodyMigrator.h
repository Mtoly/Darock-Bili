//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFMessageBodyMigrator_h
#define MFMessageBodyMigrator_h
@import Foundation;

#include "EFLoggable-Protocol.h"
#include "EFScheduler-Protocol.h"
#include "MFMailMessageLibrary.h"

@class EFLazyCache, NSMutableArray, NSString;

@interface MFMessageBodyMigrator : NSObject<EFLoggable> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _upgradeLock;
}

@property (weak, nonatomic) MFMailMessageLibrary *library;
@property (retain, nonatomic) EFLazyCache *directoryContentCache;
@property (retain, nonatomic) NSObject<EFScheduler> *backgroundMigrationScheduler;
@property (retain, nonatomic) NSMutableArray *mailboxesToCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)log;

/* instance methods */
- (id)initWithLibrary:(id)library;
- (void)startMigratingBodies;
- (void)migrateBodyForMessageIfNecessary:(id)necessary;
- (void)_migrateDataFilesForMessage:(id)message;
- (BOOL)_mailboxHasUnmigratedFiles:(id)files;
- (id)_legacyAttachmentDataDirectoryURLForGlobalMessageID:(long long)id basePath:(id)path purgeable:(BOOL)purgeable;
- (void)_migrateAllFilesForMailbox:(id)mailbox;
- (id)_filesForMessage:(id)message;
- (id)legacyAttachmentDirectoryForMessage:(id)message;
- (id)_directoryContentsForPath:(id)path;
@end

#endif /* MFMessageBodyMigrator_h */