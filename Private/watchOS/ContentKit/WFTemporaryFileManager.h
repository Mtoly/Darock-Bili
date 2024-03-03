//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFTemporaryFileManager_h
#define WFTemporaryFileManager_h
@import Foundation;

@interface WFTemporaryFileManager : NSObject
/* class methods */
+ (id)appGroupIdentifier;
+ (id)wf_uncachedContainerURLForSecurityApplicationGroupIdentifier:(id)identifier error:(id *)error;
+ (id)sharedAppGroupDirectoryURL;
+ (id)sharedShortcutsAppGroupDirectoryURL;
+ (id)topLevelTemporaryDirectoryURL;
+ (id)temporaryDirectoryURL;
+ (id)sharedTemporaryDirectoryURL;
+ (void)createSharedDirectoryIfNecessary;
+ (void)configureTemporaryDirectoryProtectionIfNecessary;
+ (void)configureBackupFlagIfNecessary;
+ (void)configureFileProtectionAtPath:(id)path;
+ (void)configureBackupFlagAtURL:(id)url;
+ (void)setUpDirectories;
+ (void)markDirectoryAsPurgeableAtURL:(id)url;
+ (void)clearTemporaryFiles;
+ (id)createUniqueDirectoryInDirectory:(id)directory;
+ (id)proposedFileURLForFilename:(id)filename inDirectory:(id)directory isDirectory:(BOOL)directory;
+ (id)proposedFileURLForFilename:(id)filename atTheRootOfDirectory:(id)directory isDirectory:(BOOL)directory;
+ (id)proposedTemporaryFileURLForFilename:(id)filename isDirectory:(BOOL)directory;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)filename isDirectory:(BOOL)directory;
+ (id)proposedTemporaryFileURLForFilename:(id)filename;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)filename;
+ (id)proposedFileURLForFilename:(id)filename inDirectory:(id)directory;
+ (id)proposedFileURLForFilename:(id)filename atTheRootOfDirectory:(id)directory;
+ (id)createTemporaryDirectoryWithFilename:(id)filename inDirectory:(id)directory;
+ (id)createSharedTemporaryDirectoryWithFilename:(id)filename;
+ (id)createTemporaryDirectoryWithFilename:(id)filename;
+ (id)createTemporaryFileWithFilename:(id)filename inDirectory:(id)directory;
+ (id)createTemporaryFileWithFilename:(id)filename;
+ (id)createSharedTemporaryFileWithFilename:(id)filename;
+ (BOOL)isTemporaryFile:(id)file;
@end

#endif /* WFTemporaryFileManager_h */