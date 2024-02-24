//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPDatabaseReader_h
#define VCPDatabaseReader_h
@import Foundation;

@class NSString;
@protocol OS_dispatch_queue;

@interface VCPDatabaseReader : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_sqlSerialQueue;
  NSString *_filepath;
  struct sqlite3 * _database;
}

/* class methods */
+ (BOOL)shouldQueryInternalFields;
+ (id)databaseForPhotoLibrary:(id)library;

/* instance methods */
- (id)initWithPhotoLibrary:(id)library;
- (void)dealloc;
- (BOOL)exists;
- (int)openDatabase;
- (void)closeDatabase;
- (int)parseHeader:(struct sqlite3_stmt *)header startColumn:(int)column analysis:(id)analysis;
- (int)parseResults:(struct sqlite3_stmt *)results typeColumn:(int)column dataColumn:(int)column results:(id)results;
- (int)queryHeaderForAsset:(id)asset analysis:(id *)analysis assetId:(long long *)id;
- (int)queryResultsForAssetId:(long long)id analysis:(id)analysis;
- (int)queryResultsForAssetId:(long long)id withTypes:(id)types analysis:(id)analysis;
- (int)queryHeadersForAssets:(id)assets analyses:(id)analyses idMap:(id)map;
- (int)queryResultsForAssets:(id)assets withTypes:(id)types batchResults:(id)results;
- (int)executeDatabaseBlock:(id /* block */)block;
- (BOOL)isAssetBlacklisted:(id)blacklisted blacklistDate:(id *)date;
- (id)blacklistedLocalIdentifiersFromAssets:(id)assets;
- (id)queryBlacklistedLocalIdentifiers;
- (id)queryAnalysisForAsset:(id)asset;
- (id)queryAnalysisPropertiesForAsset:(id)asset;
- (id)queryAnalysisPropertiesForAssets:(id)assets;
- (id)queryAnalysisForAsset:(id)asset withTypes:(id)types;
- (id)queryAnalysesForAssets:(id)assets withTypes:(id)types;
- (id)queryAssetsAnalyzedSince:(id)since;
- (id)queryFailedProcessingStatusFromAssets:(id)assets forTaskID:(unsigned long long)id;
- (id)queryLocalIdentifiersForTaskID:(unsigned long long)id withStatus:(unsigned long long)status;
- (unsigned long long)countForTaskID:(unsigned long long)id withProcessingStatus:(unsigned long long)status;
- (int)_queryValue:(long long *)value forKey:(id)key;
- (long long)valueForKey:(id)key;
- (int)querySchedulingHistoryRecords:(id *)records forActivityID:(unsigned long long)id sinceDate:(id)date;
@end

#endif /* VCPDatabaseReader_h */