//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDCodeFunctionInvokeOperation_h
#define CKDCodeFunctionInvokeOperation_h
@import Foundation;

#include "CKDDatabaseOperation.h"
#include "CKDProtocolTranslator.h"
#include "CKDTrustedTargetKey.h"
#include "CKDTrustedTargetWrappedKey.h"
#include "PCCKey.h"

@class NSArray, NSData, NSString, NSURL;
@protocol CKCodeOperationCallbacks;

@interface CKDCodeFunctionInvokeOperation : CKDDatabaseOperation

@property (@dynamic, nonatomic) unsigned long long state;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSString *functionName;
@property (retain, nonatomic) PCCKey *pccKey;
@property (retain, nonatomic) NSArray *pccWrappedKeys;
@property (retain, nonatomic) NSData *attestationEntropy;
@property (copy, nonatomic) NSArray *requestLocalSerializations;
@property (copy, nonatomic) NSArray *requestLocalEnvelopes;
@property (nonatomic) unsigned long long dataProtectionType;
@property (copy, nonatomic) NSData *permittedRemoteMeasurement;
@property (nonatomic) BOOL shouldSendRecordPCSKeys;
@property (copy, nonatomic) NSString *trustedTargetDomain;
@property (copy, nonatomic) NSString *trustedTargetOID;
@property (retain, nonatomic) CKDTrustedTargetKey *trustedTargetKey;
@property (retain, nonatomic) CKDTrustedTargetWrappedKey *trustedTargetWrappedKey;
@property (copy, nonatomic) NSURL *resolvedBaseURL;
@property (nonatomic) BOOL shouldFetchAssetContentInMemory;
@property (copy, nonatomic) NSArray *requestRecords;
@property (copy, nonatomic) NSData *serializedArguments;
@property (copy, nonatomic) NSData *serializedResponse;
@property (copy, nonatomic) NSArray *responseRecords;
@property (retain, nonatomic) CKDProtocolTranslator *translator;
@property (retain, @dynamic, nonatomic) NSObject<CKCodeOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ replaceLocalSerializationsBlobs;
@property (copy, nonatomic) id /* block */ initialResponseReceivedCallback;
@property (copy, nonatomic) id /* block */ replaceWireSerializations;
@property (copy, nonatomic) id /* block */ recordFetchCompletionBlock;
@property (copy, nonatomic) id /* block */ recordFetchProgressBlock;
@property (copy, nonatomic) id /* block */ recordFetchCommandBlock;

/* class methods */
+ (id)nameForState:(unsigned long long)state;
+ (long long)isPredominatelyDownload;
+ (id)URLFromEntitlementString:(id)string;
+ (id)entitlementURLForServiceName:(id)name container:(id)container;

/* instance methods */
- (id)initWithOperationInfo:(id)info container:(id)container;
- (id)activityCreate;
- (int)operationType;
- (BOOL)makeStateTransition;
- (id)encryptData:(id)data;
- (void)_preflightRecords;
- (void)_prepareForProtectedCloudCompute;
- (void)_prepareForTrustedTargetEncryption;
- (void)_checkShouldSendRecordPCSKeys;
- (void)_getSerializedRequest;
- (void)_invokeFunction;
- (void)_invokeLocalFunction;
- (void)_getDeserializedRecords;
- (void)_postflightRecords;
- (void)main;
- (BOOL)validateAgainstLiveContainer:(id)container error:(id *)error;
@end

#endif /* CKDCodeFunctionInvokeOperation_h */