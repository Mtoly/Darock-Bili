//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator_h
#define HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator_h
@import Foundation;

#include "HMFObject.h"
#include "HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler-Protocol.h"
#include "HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate-Protocol.h"
#include "HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator-Protocol.h"
#include "HMDNetworkRouterFirewallRuleManagerBackingStoreMirror-Protocol.h"
#include "HMDNetworkRouterFirewallRuleManagerInternal-Protocol.h"
#include "HMFLogging-Protocol.h"

@class HMBLocalZone, NSNotificationCenter, NSString;
@protocol OS_dispatch_queue;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator : HMFObject<HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate, HMFLogging, HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator>

@property (readonly, nonatomic) BOOL running;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) NSObject<HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler> *cloudFetchScheduler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ownerQueue;
@property (retain, nonatomic) HMBLocalZone *mirroredLocalZone;
@property (retain, nonatomic) NSObject<HMDNetworkRouterFirewallRuleManagerBackingStoreMirror> *mirror;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HMDNetworkRouterFirewallRuleManagerInternal> *firewallRuleManager;

/* class methods */
+ (id)logCategory;
+ (id)ckContainerIdentifier;
+ (long long)ckContainerEnvironment;
+ (BOOL)ckUseAnonymousAccount;
+ (id)__jsonValueForCKRecordValue:(id)value;
+ (id)__jsonStringFromDictionary:(id)dictionary rawOutput:(BOOL)output error:(id *)error;
+ (id)__jsonFromDeclarations:(id)declarations rawOutput:(BOOL)output error:(id *)error;
+ (id)__jsonFromPairedMetadata:(id)metadata rawOutput:(BOOL)output error:(id *)error;
+ (id)__networkDeclarationsFromRecord:(id)record recordKey:(id)key identifier:(id)identifier;
+ (id)__pairedMetadataFromRecord:(id)record recordKey:(id)key identifier:(id)identifier;
+ (id)__jsonFromRecords:(id)records validateWithPublicKeys:(id)keys rawOutput:(BOOL)output error:(id *)error;
+ (id)__createProcessingOptionsWithLabel:(id)label qualityOfService:(long long)service;
+ (id)__createProcessingOptionsWithLabel:(id)label;
+ (id)__networkDeclarationDataDictionaryFromOverrideObjectDictionary:(id)dictionary;
+ (id)__pairedMetadataDictionaryFromOverrideObjectDictionary:(id)dictionary;
+ (id)__networkDeclarationDataDictionaryFromRecordDictionary:(id)dictionary;
+ (id)__pairedMetadataDataDictionaryFromRecordDictionary:(id)dictionary;

/* instance methods */
- (id)initWithFirewallRuleManager:(id)manager notificationCenter:(id)center ownerQueue:(id)queue;
- (id)initWithFirewallRuleManager:(id)manager notificationCenter:(id)center cloudFetchScheduler:(id)scheduler ownerQueue:(id)queue;
- (id)initWithFirewallRuleManager:(id)manager notificationCenter:(id)center cloudFetchInterval:(double)interval cloudFetchRetryInterval:(double)interval ownerQueue:(id)queue;
- (BOOL)isRunning;
- (void)startupWithLocalDatabase:(id)database completion:(id /* block */)completion;
- (void)__startupWithMirroredLocalZone:(id)zone completion:(id /* block */)completion;
- (void)__startupWithMirror:(id)mirror completion:(id /* block */)completion;
- (void)shutdownWithCompletion:(id /* block */)completion;
- (void)firewallRuleManagerClientsDidChange;
- (void)fetchCloudChangesWithQualityOfService:(long long)service ignoreLastFetchedAccessories:(BOOL)accessories forceChangeNotifications:(BOOL)notifications completion:(id /* block */)completion;
- (void)_fetchCloudChangesWithQualityOfService:(long long)service ignoreLastFetchedAccessories:(BOOL)accessories forceChangeNotifications:(BOOL)notifications requiredRecordIDs:(id)ids schedulerXpcActivity:(id)activity completion:(id /* block */)completion;
- (id)_fetchAllDataForProductGroup:(id)group productNumber:(id)number options:(id)options error:(id *)error;
- (id)_fetchNetworkDeclarationsForRecordIDs:(id)ids options:(id)options ignoreOverrides:(BOOL)overrides error:(id *)error;
- (id)pairedMetadataVersionConfigurationForAccessory:(id)accessory pairedMetadata:(id)metadata;
- (id)_fetchPairedMetadataForAccessories:(id)accessories options:(id)options ignoreOverrides:(BOOL)overrides error:(id *)error;
- (id)fetchPairedMetadataVersionConfigurationsForAccessories:(id)accessories qualityOfService:(long long)service ignoreOverrides:(BOOL)overrides error:(id *)error;
- (void)fetchRulesForAccessories:(id)accessories qualityOfService:(long long)service ignoreOverrides:(BOOL)overrides completion:(id /* block */)completion;
- (id)ruleConfigurationForAccessory:(id)accessory declarations:(id)declarations;
- (void)_fetchCloudChangesIfNeededForRecordIDs:(id)ids completion:(id /* block */)completion;
- (void)_listCloudRecordsForProductGroup:(id)group rawOutput:(BOOL)output completion:(id /* block */)completion;
- (void)_dumpCloudRecordsForProductGroup:(id)group productNumber:(id)number rawOutput:(BOOL)output verifySignatures:(BOOL)signatures completion:(id /* block */)completion;
- (void)dumpCloudRecordsForProductGroup:(id)group productNumber:(id)number rawOutput:(BOOL)output listOnly:(BOOL)only verifySignatures:(BOOL)signatures completion:(id /* block */)completion;
- (id)dumpLocalRulesForProductGroup:(id)group productNumber:(id)number firmwareVersion:(id)version ignoreOverrides:(BOOL)overrides rawOutput:(BOOL)output error:(id *)error;
- (BOOL)removeAllLocalRulesWithError:(id *)error;
- (id)dumpPairedMetadataForProductGroup:(id)group productNumber:(id)number firmwareVersion:(id)version ignoreOverrides:(BOOL)overrides rawOutput:(BOOL)output error:(id *)error;
- (id)_fetchAllOverridesForProductGroup:(id)group productNumber:(id)number options:(id)options error:(id *)error;
- (BOOL)addOverrides:(id)overrides replace:(BOOL)replace error:(id *)error;
- (BOOL)removeAllOverridesWithError:(id *)error;
- (BOOL)removeOverridesForProductGroup:(id)group productNumber:(id)number error:(id *)error;
- (void)__maybeStartOrStopCloudFetchScheduler;
- (void)__stopCloudFetchScheduler;
- (void)__cloudFetchSchedulerFired:(id /* block */)fired;
- (void)cloudFetchSchedulerFired:(id)fired completion:(id /* block */)completion;
@end

#endif /* HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator_h */