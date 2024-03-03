//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSFormAutoFillCorrectionsSQLiteStore_h
#define WBSFormAutoFillCorrectionsSQLiteStore_h
@import Foundation;

#include "WBSCrowdsourcedFeedbackAllowList-Protocol.h"
#include "WBSCrowdsourcedFeedbackDomainNormalizer.h"
#include "WBSFormAutoFillCorrectionsStore-Protocol.h"

@class NSString, NSURL, WBSSQLiteDatabase;
@protocol OS_dispatch_queue;

@interface WBSFormAutoFillCorrectionsSQLiteStore : NSObject<WBSFormAutoFillCorrectionsStore, WBSCrowdsourcedFeedbackAllowList> {
  /* instance variables */
  NSURL *_localDatabaseURL;
  NSURL *_parsecDatabaseURL;
  WBSSQLiteDatabase *_localDatabase;
  WBSSQLiteDatabase *_parsecDatabase;
  NSObject<OS_dispatch_queue> *_databaseQueue;
  WBSCrowdsourcedFeedbackDomainNormalizer *_domainNormalizer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)standardStore;
+ (id)_defaultLocalDatabaseURL;
+ (id)_defaultParsecDatabaseURL;

/* instance methods */
- (id)initWithLocalDatabaseURL:(id)url parsecDatabaseURL:(id)url;
- (id)init;
- (void)closeDatabase;
- (void)replaceDomainAllowListWithDomains:(id)domains retrievalURLString:(id)urlstring completionHandler:(id /* block */)handler;
- (void)getAllowListStatusForDomain:(id)domain completionHandler:(id /* block */)handler;
- (void)setDomain:(id)domain isAllowListedForFeedback:(BOOL)feedback completionHandler:(id /* block */)handler;
- (void)getLastAllowListRetrievalURLStringWithCompletionHandler:(id /* block */)handler;
- (void)setLastAllowListRetrievalURLString:(id)urlstring completionHandler:(id /* block */)handler;
- (void)getLastCrowdsourcedCorrectionsRetrievalURLStringWithCompletionHandler:(id /* block */)handler;
- (void)setLastCrowdsourcedCorrectionsRetrievalURLString:(id)urlstring completionHandler:(id /* block */)handler;
- (void)replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(id)sets retrievalURLString:(id)urlstring completionHandler:(id /* block */)handler;
- (void)setLocalClassification:(id)classification forFieldWithFingerprint:(id)fingerprint onDomain:(id)domain completionHandler:(id /* block */)handler;
- (void)setCrowdsourcedClassification:(id)classification forFieldWithFingerprint:(id)fingerprint onDomain:(id)domain completionHandler:(id /* block */)handler;
- (void)getClassificationForFieldWithFingerprint:(id)fingerprint onDomain:(id)domain completionHandler:(id /* block */)handler;
- (void)removeLocalClassificationsForDomain:(id)domain recordedOnOrAfter:(id)after completionHandler:(id /* block */)handler;
- (void)removeAllLocalClassificationsWithCompletionHandler:(id /* block */)handler;
- (int)_schemaVersionForDatabase:(id)database;
- (int)_migrateToCurrentSchemaVersionIfNeededForDatabase:(id)database;
- (BOOL)_migrateToSchemaVersion:(int)version forDatabase:(id)database;
- (int)_setDatabaseSchemaVersion:(int)version forDatabase:(id)database;
- (int)_createFreshLocalDatabaseSchema;
- (int)_createFreshParsecDatabaseSchema;
- (int)_migrateToSchemaVersion_2;
- (int)_migrateToSchemaVersion_3;
- (int)_migrateToSchemaVersion_4;
- (id)_normalizeDomain:(id)domain;
- (void)_openDatabasesIfNeeded;
- (void)_configureDatabase:(id)database currentSchemaVersion:(int)version;
- (void)_openParsecDatabase;
- (void)_openLocalDatabase;
- (void)_closeDatabases;
- (BOOL)_isDatabaseOpen:(id)open;
- (BOOL)_tryToPerformTransactionOnDatabase:(id)database inBlock:(id /* block */)block;
- (BOOL)_replaceDomainAllowListWithDomains:(id)domains retrievalURLString:(id)urlstring;
- (BOOL)_setDomain:(id)domain isAllowListedForFeedback:(BOOL)feedback;
- (id)_parsecMetadataStringValueForKey:(id)key;
- (BOOL)_setParsecMetadataStringValue:(id)value forKey:(id)key;
- (BOOL)_setLocalClassification:(id)classification forFieldWithFingerprint:(id)fingerprint onDomain:(id)domain dateReclassified:(id)reclassified;
- (BOOL)_replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(id)sets retrievalURLString:(id)urlstring;
- (BOOL)_setCrowdsourcedClassification:(id)classification forFieldWithFingerprint:(id)fingerprint onDomain:(id)domain;
- (id)_classificationForFieldWithFingerprint:(id)fingerprint onDomain:(id)domain;
- (BOOL)_removeLocalClassificationsForDomain:(id)domain recordedOnOrAfter:(id)after;
- (void)_setLocalClassification:(id)classification forFieldWithFingerprint:(id)fingerprint onDomain:(id)domain date:(id)date completionHandler:(id /* block */)handler;
- (BOOL)_removeAllLocalClassifications;
@end

#endif /* WBSFormAutoFillCorrectionsSQLiteStore_h */