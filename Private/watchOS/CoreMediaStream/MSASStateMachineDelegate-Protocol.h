//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef MSASStateMachineDelegate_Protocol_h
#define MSASStateMachineDelegate_Protocol_h
@import Foundation;

@protocol MSASStateMachineDelegate 

@property (nonatomic) MSASStateMachine *MSASCounterpartInstance;

/* instance methods */
- (void)MSASStateMachineDidStart:(id)start;
- (void)MSASStateMachineDidFindGlobalResetSync:(id)sync info:(id)info;
- (void)MSASStateMachine:(id)machine didFindSyncedKeyValueChangesForAlbumGUIDS:(id)guids albumChanges:(id)changes accessControlChangesForAlbumGUIDS:(id)guids info:(id)info;
- (void)MSASStateMachine:(id)machine didFindAlbumChanges:(id)changes info:(id)info;
- (void)MSASStateMachine:(id)machine didFindAccessControlChangesForAlbumGUIDS:(id)guids info:(id)info;
- (void)MSASStateMachine:(id)machine didFindSyncedKeyValueChangesForAlbumGUIDS:(id)guids info:(id)info;
- (void)MSASStateMachine:(id)machine didFinishCheckingForChangesInfo:(id)info error:(id)error;
- (void)MSASStateMachine:(id)machine willCheckForUpdatesInAlbum:(id)album info:(id)info;
- (void)MSASStateMachine:(id)machine didFindAssetCollectionChanges:(id)changes forAlbum:(id)album info:(id)info;
- (void)MSASStateMachine:(id)machine didFindChangesInAlbum:(id)album info:(id)info error:(id)error;
- (void)MSASStateMachine:(id)machine didFinishCheckingForUpdatesInAlbum:(id)album info:(id)info error:(id)error;
- (void)MSASStateMachine:(id)machine didFinishCheckingForUpdatesInAlbums:(id)albums info:(id)info;
- (void)MSASStateMachine:(id)machine didFindNewURLString:(id)urlstring forAlbumWithGUID:(id)guid info:(id)info;
- (void)MSASStateMachine:(id)machine didFinishGettingAccessControls:(id)controls forAlbum:(id)album info:(id)info error:(id)error;
- (void)MSASStateMachine:(id)machine willUpdateAssetCollections:(id)collections inAlbum:(id)album info:(id)info;
- (void)MSASStateMachine:(id)machine didFinishUpdatingAssetCollections:(id)collections inAlbum:(id)album info:(id)info error:(id)error;
- (void)MSASStateMachine:(id)machine didFinishSubscribingToAlbum:(id)album info:(id)info error:(id)error;
- (void)MSASStateMachine:(id)machine didFinishUnsubscribingFromAlbum:(id)album info:(id)info error:(id)error;
- (void)MSASStateMachine:(id)machine didFinishMarkingAsSpamInvitationForAlbum:(id)album invitationGUID:(id)guid info:(id)info error:(id)error;
- (void)MSASStateMachine:(id)machine didFinishMarkingAsSpamInvitationForToken:(id)token info:(id)info error:(id)error;
- (void)MSASStateMachine:(id)machine didFindCommentChanges:(id)changes inAssetCollectionWithGUID:(id)guid inAlbumWithGUID:(id)guid info:(id)info;
- (void)MSASStateMachine:(id)machine didFinishCheckingForCommentChangesInAssetCollectionWithGUID:(id)guid largestCommentID:(int)id info:(id)info error:(id)error;
- (void)MSASStateMachine:(id)machine willCheckForAlbumSyncedStateChangesInAlbum:(id)album info:(id)info;
- (void)MSASStateMachine:(id)machine didFindAssetCollectionSyncedState:(id)state forAssetCollectionGUID:(id)guid inAlbum:(id)album assetCollectionStateCtag:(id)ctag info:(id)info;
- (void)MSASStateMachine:(id)machine didFindAlbumSyncedState:(id)state forAlbum:(id)album info:(id)info;
- (void)MSASStateMachine:(id)machine didFinishCheckingForAlbumSyncedStateChangesInAlbum:(id)album info:(id)info error:(id)error newAlbumStateCtag:(id)ctag;
- (void)MSASStateMachine:(id)machine didFinishSettingSyncedStateForAlbum:(id)album info:(id)info error:(id)error newAlbumStateCtag:(id)ctag;
- (void)MSASStateMachine:(id)machine didFinishSettingSyncedStateForAssetCollection:(id)collection inAlbum:(id)album assetStateCtag:(id)ctag info:(id)info error:(id)error;
- (id)MSASStateMachineDidRequestAlbumStateCtagForAlbumWithGUID:(id)guid info:(id)info;
- (id)MSASStateMachineDidRequestAlbumURLStringForAlbumWithGUID:(id)guid info:(id)info;
- (id)MSASStateMachineDidRequestAlbumWithGUID:(id)guid;
- (id)MSASStateMachineDidRequestAssetCollectionStateCtagForAssetCollectionWithGUID:(id)guid info:(id)info;
- (BOOL)MSASStateMachine:(id)machine didQueryIsAssetCollectionWithGUIDInModel:(id)model;
- (void)MSASStateMachine:(id)machine didFinishEnqueueingAssetsForDownload:(id)download inAlbumWithGUID:(id)guid;
- (void)MSASStateMachine:(id)machine didFinishRetrievingAsset:(id)asset inAlbum:(id)album error:(id)error;
- (void)MSASStateMachine:(id)machine didFinishDeletingAlbum:(id)album info:(id)info error:(id)error;
- (void)MSASStateMachine:(id)machine didFinishDeletingAssetCollection:(id)collection inAlbum:(id)album info:(id)info error:(id)error;
- (void)MSASStateMachine:(id)machine didFinishDeletingComment:(id)comment inAssetCollection:(id)collection inAlbum:(id)album info:(id)info error:(id)error;
- (void)MSASStateMachine:(id)machine didFinishCreatingAlbum:(id)album info:(id)info error:(id)error;
- (void)MSASStateMachine:(id)machine didFinishUpdatingAlbum:(id)album info:(id)info error:(id)error;
- (void)MSASStateMachine:(id)machine didRequestAssetsForAddingAssetCollections:(id)collections inAlbum:(id)album specifications:(id)specifications info:(id)info;
- (void)MSASStateMachine:(id)machine didFinishAddingAssetCollection:(id)collection toAlbum:(id)album info:(id)info error:(id)error;
- (void)MSASStateMachine:(id)machine didFinishAddingSharingRelationships:(id)relationships toOwnedAlbum:(id)album info:(id)info error:(id)error;
- (void)MSASStateMachine:(id)machine didFinishSendingInvitationByPhone:(id)phone toOwnedAlbum:(id)album info:(id)info error:(id)error;
- (void)MSASStateMachine:(id)machine didFinishRemovingSharingRelationship:(id)relationship fromOwnedAlbum:(id)album info:(id)info error:(id)error;
- (void)MSASStateMachine:(id)machine didFinishAddingComment:(id)comment toAssetCollection:(id)collection inAlbum:(id)album info:(id)info error:(id)error;
- (void)MSASStateMachine:(id)machine didFireScheduledEvent:(id)event forAssetCollectionGUID:(id)guid albumGUID:(id)guid info:(id)info;
- (void)MSASStateMachineDidUpdateServerCommunicationBackoffDate:(id)date;
@end

#endif /* MSASStateMachineDelegate_Protocol_h */