//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDFetchRecordZonesOperation_h
#define CKDFetchRecordZonesOperation_h
@import Foundation;

#include "CKDDatabaseOperation.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol CKFetchRecordZonesOperationCallbacks;

@interface CKDFetchRecordZonesOperation : CKDDatabaseOperation

@property (@dynamic, nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *recordZoneIDs;
@property (nonatomic) BOOL isFetchAllRecordZonesOperation;
@property (retain, nonatomic) NSMutableDictionary *zonesToSaveForPCSUpdateByZoneID;
@property (nonatomic) BOOL shouldRetry;
@property (retain, nonatomic) NSMutableArray *zoneIDsNeedingPCSUpdateRetry;
@property (retain, nonatomic) NSMutableDictionary *pcsUpdateErrorsByZoneID;
@property (nonatomic) long long numZoneSaveAttempts;
@property (nonatomic) BOOL onlyFetchPCSInfo;
@property (retain, nonatomic) NSMutableSet *zoneIDsNeedingDugongKeyRoll;
@property (nonatomic) BOOL ignorePCSFailures;
@property (retain, @dynamic, nonatomic) NSObject<CKFetchRecordZonesOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ recordZoneFetchedProgressBlock;

/* class methods */
+ (id)nameForState:(unsigned long long)state;

/* instance methods */
- (id)initWithOperationInfo:(id)info container:(id)container;
- (BOOL)makeStateTransition;
- (id)activityCreate;
- (id)relevantZoneIDs;
- (void)_sendErrorForFailedZones;
- (void)_locked_callbackForRecordZone:(id)zone zoneID:(id)id error:(id)error;
- (BOOL)_locked_checkAndUpdateZonePCSIfNeededForZone:(id)zone error:(id *)error;
- (void)_handleRecordZoneSaved:(id)saved error:(id)error;
- (void)saveZonesWithUpdatedZonePCS;
- (void)_handleAnonymousZoneDataObjects:(id)objects responsecode:(id)responsecode;
- (void)_handleRecordZoneFetch:(id)fetch zoneID:(id)id responseCode:(id)code;
- (void)_continueHandlingFetchedRecordZone:(id)zone zoneID:(id)id;
- (void)_cachePCSOnRecordZone:(id)zone;
- (int)operationType;
- (void)fetchZonesFromServer;
- (void)fetchZonesFromServer:(id)server;
- (void)checkPCSIdentity;
- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)error;
@end

#endif /* CKDFetchRecordZonesOperation_h */