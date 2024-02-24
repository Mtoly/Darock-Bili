//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFCharacteristicValueManager_h
#define HFCharacteristicValueManager_h
@import Foundation;

#include "HFCharacteristicReadLogger.h"
#include "HFCharacteristicValueCacheManager.h"
#include "HFCharacteristicValueReader-Protocol.h"
#include "HFCharacteristicValueSource-Protocol.h"
#include "HFCharacteristicValueTransaction.h"
#include "HFCharacteristicValueWriter-Protocol.h"
#include "HFLightProfileValueSource-Protocol.h"

@class NACancelationToken, NAFuture, NSMutableArray, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSSet, NSString;
@protocol HFCharacteristicOperationContextProviding;

@interface HFCharacteristicValueManager : NSObject<HFLightProfileValueSource, HFCharacteristicValueSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<HFCharacteristicValueReader> *valueReader;
@property (retain, nonatomic) NSObject<HFCharacteristicValueWriter> *valueWriter;
@property (nonatomic) long long _debug_totalNumberOfIssuedBatchReadRequests;
@property (retain, nonatomic) HFCharacteristicValueTransaction *openTransaction;
@property (retain, nonatomic) NSMutableArray *runningTransactions;
@property (retain, nonatomic) NSMutableArray *readTransactionsToExecuteOnNextRunLoop;
@property (retain, nonatomic) NSMutableArray *completionHandlersForReadTransactionsToExecuteOnNextRunLoop;
@property (retain, nonatomic) NSRecursiveLock *transactionLock;
@property (retain, nonatomic) NSMutableSet *mutableAllReadCharacteristics;
@property (retain, nonatomic) NSMutableSet *characteristicsWithCachedValues;
@property (retain, nonatomic) NSMutableDictionary *cachedReadErrorsKeyedByCharacteristicIdentifier;
@property (retain, nonatomic) NSMutableDictionary *cachedWriteErrorsKeyedByCharacteristicIdentifier;
@property (retain, nonatomic) NSMutableDictionary *cachedExecutionErrorsKeyedByActionSetIdentifier;
@property (retain, nonatomic) HFCharacteristicValueCacheManager *cacheManager;
@property (retain, nonatomic) NACancelationToken *inFlightReadCancelationToken;
@property (retain, nonatomic) HFCharacteristicReadLogger *readsCompleteLogger;
@property (retain, nonatomic) NSMutableDictionary *testingOverrideLoadingStates;
@property (readonly, nonatomic) NAFuture *firstReadCompleteFuture;
@property (readonly, copy, nonatomic) NSSet *allReadCharacteristics;
@property (readonly, copy, nonatomic) NSSet *characteristicsWithPendingReads;
@property (readonly, copy, nonatomic) NSSet *characteristicsWithPendingWrites;
@property (readonly, nonatomic) NSObject<HFCharacteristicOperationContextProviding> *contextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)_shouldTrackReadsCompleteForPerformanceTesting;
+ (id)na_identity;

/* instance methods */
- (void)setOverrideLoadingState:(unsigned long long)state forCharacteristic:(id)characteristic;
- (void)clearOverrideLoadingStates;
- (BOOL)isNaturalLightingSupportedForProfile:(id)profile;
- (BOOL)isNaturalLightingEnabledForProfile:(id)profile;
- (id)writeNaturalLightEnabledState:(BOOL)state forProfile:(id)profile;
- (void)fetchNaturalLightColorTemperatureForBrightness:(long long)brightness lightProfile:(id)profile completion:(id /* block */)completion;
- (id)staticHomeDataModelCachedValueForCharacteristic:(id)characteristic;
- (BOOL)staticHomeDataModelHasInProgressWriteForCharacteristic:(id)characteristic;
- (id)initWithValueReader:(id)reader valueWriter:(id)writer;
- (unsigned long long)cachedLoadingStateForCharacteristics:(id)characteristics actionSets:(id)sets;
- (unsigned long long)loadingStateForCharacteristics:(id)characteristics actionSets:(id)sets;
- (id)_transactionLock_characteristicsWithPendingWritesInTransacton:(id)transacton includeDirectWrites:(BOOL)writes includeActionSets:(BOOL)sets includeActions:(BOOL)actions;
- (void)beginTransactionWithReason:(id)reason;
- (void)beginTransactionWithReason:(id)reason readPolicy:(id)policy logger:(id)logger;
- (id)readValueForCharacteristic:(id)characteristic;
- (id)writeValue:(id)value forCharacteristic:(id)characteristic;
- (void)executeActionSet:(id)set completionHandler:(id /* block */)handler;
- (id)executeActionSet:(id)set;
- (id)executeActions:(id)actions;
- (void)commitTransactionWithReason:(id)reason;
- (id)_openTransactionCompletionFuture;
- (void)_transactionLock_executeWriteTransaction:(id)transaction completionHandler:(id /* block */)handler;
- (void)_transactionLock_executeReadTransaction:(id)transaction completionHandler:(id /* block */)handler;
- (void)_transactionLock_executeActionSetTransaction:(id)transaction completionHandler:(id /* block */)handler;
- (void)_transactionLock_executeActionsTransaction:(id)transaction completionHandler:(id /* block */)handler;
- (id)cachedValueForCharacteristic:(id)characteristic;
- (id)cachedReadErrorForCharacteristic:(id)characteristic;
- (BOOL)hasCachedReadErrorForAccessory:(id)accessory passingTest:(id /* block */)test;
- (void)invalidateCachedValueForCharacteristic:(id)characteristic;
- (void)invalidateCachedValuesForAccessory:(id)accessory;
- (id)cachedErrorForWriteToCharacteristic:(id)characteristic;
- (id)cachedErrorForExecutionOfActionSet:(id)set;
- (void)invalidateCachedErrorForExecutionOfActionSet:(id)set;
- (void)invalidateAllCachedErrors;
- (void)cancelInFlightReadRequests;
- (void)_beginReadsCompleteTrackingForCharacteristics:(id)characteristics withLogger:(id)logger;
- (void)_endReadsCompleteTrackingForCharacteristic:(id)characteristic withLogger:(id)logger didRead:(BOOL)read;
- (id)readValuesForCharacteristics:(id)characteristics;
- (id)readValuesForCharacteristicTypes:(id)types inServices:(id)services;
- (id)readValuesForCharacteristicsPassingTest:(id /* block */)test inServices:(id)services;
- (id)writeValuesForCharacteristics:(id)characteristics;
- (BOOL)isEqual:(id)equal;
- (id)_overrideCachedValueForCharacteristic:(id)characteristic value:(id)value;
@end

#endif /* HFCharacteristicValueManager_h */