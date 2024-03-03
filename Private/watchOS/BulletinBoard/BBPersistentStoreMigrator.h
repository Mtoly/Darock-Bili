//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 887.3.0.0.0
//
#ifndef BBPersistentStoreMigrator_h
#define BBPersistentStoreMigrator_h
@import Foundation;

@interface BBPersistentStoreMigrator : NSObject
/* class methods */
+ (void)migrateSectionInfoForStore:(id)store;
+ (void)_migrateSectionIDs:(id)ids;
+ (id)_sectionIDsToMigrate;
+ (void)_removeVestigialSections:(id)sections;
+ (BOOL)removeSavedChronologicalSectionInfos:(id)infos;
+ (id)_sectionIdentifiersForNonDefaultSectionCategoriesFromSectionInfos:(id)infos;
+ (id)_sectionIdentifiersForWeeAppsFromSectionInfos:(id)infos;
+ (void)_migrateContentPreviewSettings:(id)settings;
@end

#endif /* BBPersistentStoreMigrator_h */