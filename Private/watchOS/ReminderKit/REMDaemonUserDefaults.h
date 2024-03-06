//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMDaemonUserDefaults_h
#define REMDaemonUserDefaults_h
@import Foundation;

#include "REMUserDefaults.h"
#include "REMObjectID.h"

@class NSArray, NSData, NSDate, NSDateComponents, NSDictionary, NSNumber, NSString, NSURL;

@interface REMDaemonUserDefaults : REMUserDefaults

@property (readonly, nonatomic) BOOL newAppShouldTakeoverEKReminderNotifications;
@property (readonly, nonatomic) BOOL dataaccessDaemonStopSyncingReminders;
@property (readonly, nonatomic) BOOL siriShouldRouteIntentsToNewRemindersApp;
@property (nonatomic) BOOL databaseMigrationTestModeEnabled;
@property (nonatomic) BOOL isDatabaseMigrated;
@property (nonatomic) BOOL databaseMigrationTimedOut;
@property (copy, nonatomic) NSString *lastDatabaseMigrationSystemBuildVersion;
@property (retain, nonatomic) NSNumber *cloudKitMigrationMaxNumInvocations;
@property (retain, nonatomic) NSNumber *cloudKitMigrationMaxNumFailures;
@property (retain, nonatomic) NSNumber *cloudKitMigrationDelayAfterError;
@property (retain, nonatomic) NSNumber *cloudKitMigrationObserverPollingInterval;
@property (retain, nonatomic) NSNumber *cloudKitMigrationSimulatedError;
@property (retain, nonatomic) NSNumber *cloudKitResultsLimitPerSyncOperation;
@property (nonatomic) BOOL cloudKitMigrationDisableCleanUp;
@property (retain, nonatomic) NSString *acAccountIdentifierToMergeLocalDataIntoSyncData;
@property (retain, nonatomic) NSArray *acAccountIdentifiersToMigrateInactivatedCalDavData;
@property (retain, nonatomic) NSDate *cloudKitMergeLocalLastDateMaxRetryReached;
@property (retain, nonatomic) NSString *cloudKitMergeLocalLastBuildVersionMaxRetryReached;
@property (retain, nonatomic) NSDate *cloudKitSchemaCatchUpSyncLastSuccessDate;
@property (retain, nonatomic) NSString *cloudKitSchemaCatchUpSyncLastSuccessBuildVersion;
@property (retain, nonatomic) NSNumber *cloudKitSchemaCatchUpSyncSchedulingState;
@property (retain, nonatomic) NSDate *cloudKitSchemaCatchUpSyncLastScheduledDate;
@property (nonatomic) BOOL debugForceSupportCloudKitSchemaCatchUpSyncBackgroundScheduling;
@property (retain, nonatomic) NSNumber *cloudKitMaxNumAlarmIDsInReminderCKRecordDebugOverride;
@property (retain, nonatomic) NSNumber *debugSimulatedCKErrorCode;
@property (copy, nonatomic) NSNumber *spotlightIndexVersion;
@property (copy, nonatomic) NSDate *nextScheduledAlarmDate;
@property (copy, nonatomic) NSDate *lastPresentAlarmDate;
@property (copy, nonatomic) NSData *lastSuggestedAttributesAutoTrainingToken;
@property (copy, nonatomic) NSDate *lastSuggestedAttributesAutoTrainingExecutionDate;
@property (copy, nonatomic) NSDate *lastSyncPoll;
@property (copy, nonatomic) NSDate *lastCloudConfigurationDownload;
@property (copy, nonatomic) NSDate *lastExtraneousAlarmsProcessedDate;
@property (nonatomic) BOOL useExtraneousAlarmBackOffThrottleInterval;
@property (copy, nonatomic) NSDate *staledFileAttachmentCleanupLastExecutionDate;
@property (nonatomic) BOOL staledFileAttachmentCleanupContainerDeemedClean;
@property (nonatomic) BOOL extraneousAlarmsCollectorContainerDeemedClean;
@property (copy, nonatomic) NSDate *lastExtraneousAlarmsCollectorExecutionDate;
@property (copy, nonatomic) NSDate *imageDeduplicationLastExecutionDate;
@property (copy, nonatomic) NSArray *imageDeduplicationLegacyAttachmentsMarkedForDeletion;
@property (copy, nonatomic) NSDate *suggestConversionToGroceryListLastExecutionDate;
@property (copy, nonatomic) NSData *userInteractionsData;
@property (nonatomic) BOOL simulateMAIDAccount;
@property (nonatomic) BOOL showRemindersAsOverdue;
@property (nonatomic) BOOL enableWelcomeScreen;
@property (nonatomic) BOOL forceShowWelcomeScreen;
@property (nonatomic) BOOL forceShowWhatsNewScreen;
@property (nonatomic) BOOL enableInAppDebugMenu;
@property (readonly, nonatomic) BOOL enableAutoGenerateCKPersonIDSalt;
@property (nonatomic) BOOL enableHashingUserIdentifiablesWithPersonIDSalt;
@property (retain, nonatomic) REMObjectID *preferredDefaultListID;
@property (retain, nonatomic) NSURL *preferredDefaultListObjectIDUrl;
@property (retain, nonatomic) NSDateComponents *todayNotificationFireTime;
@property (nonatomic) BOOL disableAlarmEngineDataSourcePrefetching;
@property (nonatomic) BOOL enableAssignmentNotifications;
@property (nonatomic) BOOL enableAutoCompleteReminders;
@property (copy, nonatomic) NSDictionary *suggestedAttributesTrainingOverrides;
@property (copy, nonatomic) NSDictionary *suggestedAttributesHarvestingOverrides;
@property (copy, nonatomic) NSDictionary *muteNotificationForSharedList;
@property (copy, nonatomic) NSDictionary *hideEmptySectionsForGroceryList;
@property (copy, nonatomic) NSData *accountsListCategorizedCountsCache;
@property (copy, nonatomic) NSData *hashtagLabelsInCustomSmartListFilterCache;
@property (nonatomic) BOOL debugSimulateSqliteFull;
@property (retain, nonatomic) NSNumber *tipKitCachedCountOfUncompletedReminders;
@property (retain, nonatomic) NSNumber *tipKitCachedCountOfLists;
@property (retain, nonatomic) NSNumber *tipKitCachedCountOfListsWithCustomBadge;
@property (retain, nonatomic) NSNumber *tipKitCachedCountOfCustomSmartLists;
@property (retain, nonatomic) NSNumber *tipKitCachedCountOfHashtags;
@property (copy, nonatomic) NSDate *lastViewedNotificationsPermissionWarmingSheetDate;
@property (copy, nonatomic) NSDate *lastDismissedNotificationsPermissionInlineRequestDate;
@property (nonatomic) BOOL groceryTipDismissed;
@property (nonatomic) BOOL hasCreatedGroceryList;
@property (nonatomic) BOOL hasViewedContactsAccessAlertForLocation;
@property (nonatomic) BOOL hasViewedContactsAccessAlertForMessaging;
@property (nonatomic) BOOL hasViewedContactsAccessAlertForCalDAVSharing;
@property (nonatomic) BOOL didShowReminderDeletePrivacyWarning;
@property (retain, nonatomic) NSNumber *remCurrentRuntimeVersionDebuggingOverride;
@property (nonatomic) BOOL forceEligibleForAutoCloudKitMigration;
@property (nonatomic) BOOL forceBasicAAAccountEligibleForCloudKitReminders;
@property (retain, nonatomic) NSDictionary *dataSeparationAppDocumentsURLDebugOverride;
@property (copy, nonatomic) NSDate *lastDataSeparationMigrationDate;
@property (copy, nonatomic) NSDictionary *syncActivityNotificationEngine_accountSignInTime;
@property (nonatomic) BOOL sharedListActivityNotifications_demoMode;
@property (nonatomic) BOOL shouldIncludeRemindersDueTodayInBadgeCount;
@property (nonatomic) BOOL isSpotlightQueryLoggingEnabled;

/* class methods */
+ (id)defaultValues;
+ (id)todayNotificationFireTimeFromStorageNumber:(id)number;
+ (id)storageNumberForTodayNotificationTime:(id)time;

/* instance methods */
- (id)initWithSuiteName:(id)name containerURL:(id)url;
- (void)deletePreferredDefaultListID;
- (id)observePreferredDefaultListIDWithBlock:(id /* block */)block;
- (void)_deletePreferredDefaultListObjectIDUrl;
- (unsigned long long)muteNotificationOptionsForSharedList:(id)list;
- (void)setMuteNotificationOptions:(unsigned long long)options forSharedList:(id)list;
- (void)removeMuteNotificationOptionsForSharedList:(id)list;
- (void)setHideEmptySections:(BOOL)sections forGroceryList:(id)list;
- (BOOL)hideEmptySectionsForGroceryList:(id)list;
- (void)removeHideEmptySectionsForGroceryList:(id)list;
- (void)setBestKForKNN:(id)knn;
- (void)setCoreBehaviorTrainingParameters:(id)parameters;
- (id)observeShowRemindersAsOverdueWithBlock:(id /* block */)block;
- (id)streamTodayNotificationFireTime:(id /* block */)time;
- (id)streamShouldIncludeRemindersDueTodayInBadgeCount:(id /* block */)count;
- (id)_pptPreferredDefaultListIDKey;
- (void)ppt_handleInstall;
- (void)ppt_handleRestore;
@end

#endif /* REMDaemonUserDefaults_h */