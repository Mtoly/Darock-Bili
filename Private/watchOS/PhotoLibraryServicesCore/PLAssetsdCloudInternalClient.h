//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLAssetsdCloudInternalClient_h
#define PLAssetsdCloudInternalClient_h
@import Foundation;

#include "PLAssetsdBaseClient.h"

@interface PLAssetsdCloudInternalClient : PLAssetsdBaseClient
/* instance methods */
- (void)createPhotostreamAlbumWithStreamID:(id)id;
- (void)enablePhotostreamsWithStreamID:(id)id;
- (void)updateSharedAlbumsCachedServerConfigurationLimits;
- (unsigned long long)cloudSharingSpaceManagementRequestWithType:(unsigned long long)type optionalBytesToPurge:(unsigned long long)purge error:(id *)error;
- (long long)keyForEmailAddress:(id)address error:(id *)error;
- (id)emailAddressForKey:(long long)key error:(id *)error;
- (id)personInfoDictionaryForPersonID:(id)id error:(id *)error;
- (void)setPersonInfoDictionary:(id)dictionary forPersonID:(id)id;
- (BOOL)isReadyForCloudPhotoLibrary;
- (BOOL)isReadyForAnalysisQuickCheck;
- (BOOL)isReadyForAnalysis;
- (BOOL)shouldAutoEnableiCPLOnOSXWithError:(id *)error;
- (void)syncCloudPhotoLibrary;
- (void)setCloudPhotoLibraryEnabledState:(BOOL)state;
- (void)setCloudPhotoLibraryEnabledStateSync:(BOOL)sync;
- (void)setCloudPhotoLibraryPauseState:(BOOL)state reason:(short)reason;
- (void)synchronouslySetCloudPhotoLibraryPauseState:(BOOL)state reason:(short)reason;
- (void)rampingRequestForResourceType:(unsigned long long)type numRequested:(unsigned long long)requested reply:(id /* block */)reply;
- (void)getCurrentTransferProgress:(id /* block */)progress;
- (void)getNotUploadedCount:(id /* block */)count;
- (void)getSystemBudgetsWithReply:(id /* block */)reply;
- (BOOL)overrideSystemBudgetsForSyncSession:(BOOL)session pauseReason:(id)reason systemBudgets:(unsigned long long)budgets error:(id *)error;
- (void)overrideSystemBudgetsForSyncSession:(BOOL)session pauseReason:(id)reason systemBudgets:(unsigned long long)budgets completionHandler:(id /* block */)handler;
- (void)publishShare:(id)share completionHandler:(id /* block */)handler;
- (void)fetchShareFromShareURL:(id)url ignoreExistingShare:(BOOL)share completionHandler:(id /* block */)handler;
- (void)acceptShare:(id)share completionHandler:(id /* block */)handler;
- (void)forceSyncMomentShare:(id)share completionHandler:(id /* block */)handler;
- (void)queryParticipantsWithEmails:(id)emails phoneNumbers:(id)numbers completionHandler:(id /* block */)handler;
- (unsigned long long)getResetSyncStatusWithError:(id *)error;
- (id)activateLibraryScope:(id)scope completionHandler:(id /* block */)handler;
- (void)deactivateLibraryScope:(id)scope completionHandler:(id /* block */)handler;
- (void)startExitFromLibraryScopeWithIdentifier:(id)identifier retentionPolicy:(long long)policy exitSource:(long long)source completionHandler:(id /* block */)handler;
- (void)removeParticipantsWithParticipantUUIDs:(id)uuids fromLibraryScopeWithIdentifier:(id)identifier retentionPolicy:(long long)policy exitSource:(long long)source completionHandler:(id /* block */)handler;
- (void)sharedLibraryRampCheckWithCompletionHandler:(id /* block */)handler;
- (void)userViewedSharedLibraryParticipantAssetTrashNotificationWithCompletionHandler:(id /* block */)handler;
- (void)forceParticipantAssetTrashNotificationCompletionHandler:(id /* block */)handler;
- (void)refreshLibraryScopeWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)getLibraryScopeStatusCountsForScopeWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)unsharePendingAssetsSharedToScopeWithIdentifier:(id)identifier;
- (id)markOnboardingPreviewAssetsByProcessingRulesOnLibraryScope:(id)scope excludePersonUUIDs:(id)uuids completionHandler:(id /* block */)handler;
- (void)confirmAllRemainingOnboardingPreviewAssetsOnLibraryScope:(id)scope completionHandler:(id /* block */)handler;
- (void)resetLocalOnlyLibraryScopesAndAllLibraryScopeAssetStatesWithCompletionHandler:(id /* block */)handler;
- (void)requestDeviceLibraryConfigurationChange:(long long)change completionHandler:(id /* block */)handler;
- (void)markResourcesPurgeableWithUrgency:(long long)urgency assetUuids:(id)uuids completionHandler:(id /* block */)handler;
- (void)getCPLConfigrationValueForKey:(id)key completionHandler:(id /* block */)handler;
@end

#endif /* PLAssetsdCloudInternalClient_h */