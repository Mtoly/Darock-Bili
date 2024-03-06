//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2480.0.0.0.0
//
#ifndef ICPaths_h
#define ICPaths_h
@import Foundation;

@interface ICPaths : NSObject
/* class methods */
+ (id)applicationDocumentsURL;
+ (void)setApplicationDocumentsURL:(id)url;
+ (void)resetApplicationDocumentsURL;
+ (id)importDocumentsURL;
+ (id)defaultPreviewImageDirectoryURL;
+ (id)URLForGroupContainerWithIdentifier:(id)identifier;
+ (id)applicationDataContainerURL;
+ (id)attributesForGroupContainerDirectory;
+ (BOOL)isReadOnlyPersistentStore;
+ (void)setIsReadOnlyPersistentStore:(BOOL)store;
+ (id)managedObjectModelURL;
+ (id)oldManagedObjectModelURL;
+ (id)persistentStoreURL;
@end

#endif /* ICPaths_h */