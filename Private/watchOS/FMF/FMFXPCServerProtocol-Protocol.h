//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 488.1.0.0.0
//
#ifndef FMFXPCServerProtocol_Protocol_h
#define FMFXPCServerProtocol_Protocol_h
@import Foundation;

@protocol FMFXPCServerProtocol <NSObject>
/* instance methods */
- (void)fetchLocationForHandle:(id)handle callerId:(id)id priority:(long long)priority completion:(id /* block */)completion;
- (void)fetchLocationForHandles:(id)handles callerId:(id)id priority:(long long)priority completion:(id /* block */)completion;
- (void)addFriendHandles:(id)handles;
- (void)removeFriendHandles:(id)handles;
- (void)setDebugContext:(id)context;
- (void)getCurrentTrackedHandles:(id /* block */)handles;
- (void)locationForHandle:(id)handle completion:(id /* block */)completion;
- (void)getHandlesSharingLocationsWithMe:(id /* block */)me;
- (void)getHandlesSharingLocationsWithMeWithGroupId:(id)id completion:(id /* block */)completion;
- (void)getHandlesSharingMyLocation:(id /* block */)location;
- (void)getHandlesSharingMyLocationWithGroupId:(id)id completion:(id /* block */)completion;
- (void)canGetLocationForHandle:(id)handle groupId:(id)id callerId:(id)id completion:(id /* block */)completion;
- (void)setHideMyLocationEnabled:(BOOL)enabled completion:(id /* block */)completion;
- (void)isMyLocationEnabled:(id /* block */)enabled;
- (void)setAllowFriendRequestsEnabled:(BOOL)enabled completion:(id /* block */)completion;
- (void)isAllowFriendRequestsEnabled:(id /* block */)enabled;
- (void)getAccountEmailAddress:(id /* block */)address;
- (void)setActiveDevice:(id)device completion:(id /* block */)completion;
- (void)canShareLocationWithHandle:(id)handle groupId:(id)id callerId:(id)id completion:(id /* block */)completion;
- (void)getPendingMappingPacketsForHandle:(id)handle groupId:(id)id completion:(id /* block */)completion;
- (void)deviceSharingLocation:(id /* block */)location;
- (void)allDevices:(id /* block */)devices;
- (void)isNetworkReachable:(id /* block */)reachable;
- (void)canOfferToHandles:(id)handles completion:(id /* block */)completion;
- (void)getPrettyNameForHandle:(id)handle completion:(id /* block */)completion;
- (void)getRecordIdForHandle:(id)handle completion:(id /* block */)completion;
- (void)removeDevice:(id)device completion:(id /* block */)completion;
- (void)sendFriendshipOfferToHandles:(id)handles groupId:(id)id callerId:(id)id endDate:(id)date completion:(id /* block */)completion;
- (void)extendFriendshipOfferToHandle:(id)handle groupId:(id)id callerId:(id)id endDate:(id)date completion:(id /* block */)completion;
- (void)sendFriendshipInviteToHandle:(id)handle groupId:(id)id callerId:(id)id endDate:(id)date completion:(id /* block */)completion;
- (void)sendNotNowToHandle:(id)handle callerId:(id)id completion:(id /* block */)completion;
- (void)approveFriendshipRequest:(id)request completion:(id /* block */)completion;
- (void)declineFriendshipRequest:(id)request completion:(id /* block */)completion;
- (void)stopSharingMyLocationWithHandle:(id)handle groupId:(id)id callerId:(id)id completion:(id /* block */)completion;
- (void)stopSharingMyLocationWithHandles:(id)handles groupId:(id)id callerId:(id)id completion:(id /* block */)completion;
- (void)getPendingFriendshipRequestsWithCompletion:(id /* block */)completion;
- (void)getOfferExpirationForHandle:(id)handle groupId:(id)id callerId:(id)id completion:(id /* block */)completion;
- (void)getHandlesWithPendingOffers:(id /* block */)offers;
- (void)importMappingPacket:(id)packet completion:(id /* block */)completion;
- (void)invalidateMappingPackets:(id)packets completion:(id /* block */)completion;
- (void)sendIDSMessage:(id)idsmessage toIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)getAllLocations:(id /* block */)locations;
- (void)forceRefresh;
- (void)sessionWasCreatedRefresh;
- (void)setExpiredInitTimestamp;
- (void)getMaxLocatingInterval:(id /* block */)interval;
- (void)forceRefreshWithCompletion:(id /* block */)completion;
- (void)favoritesForMaxCount:(id)count completion:(id /* block */)completion;
- (void)nearbyLocationsWithCompletion:(id /* block */)completion;
- (void)includeDeviceInAutomations:(id /* block */)automations;
- (void)showSwitchMeDeviceAlertUsingCurrentMeDeviceName:(id)name completion:(id /* block */)completion;
- (void)showActiveDeviceChangedAlert;
- (void)showRestrictedAlert;
- (void)showMaxFollowersLimitReachedAlert;
- (void)showLocationServicesSwitchOffAlert;
- (void)showShareMyLocationSystemServiceOffAlert;
- (void)showShareMyLocationiCloudSettingsOffAlert;
- (void)showForbiddenRegionAlert;
- (void)notLoggedIntoiCloudAlert;
- (void)upselliCloudAlert;
- (void)showNetworkOfflineDuringOfferAlert;
- (void)showNetworkOfflineDuringStopOfferAlert;
- (void)show5XXDuringStartOfferAlert;
- (void)show5XXDuringStopOfferAlert;
- (void)showGenericErrorAlert;
- (void)showAirDropImportAlertForId:(id)id;
- (void)showAirDropImportErrorAlert;
- (void)contactForPayload:(id)payload completion:(id /* block */)completion;
- (void)handleAndLocationForPayload:(id)payload completion:(id /* block */)completion;
- (void)dataForPayload:(id)payload completion:(id /* block */)completion;
- (void)decryptPayload:(id)payload withToken:(id)token completion:(id /* block */)completion;
- (void)encryptPayload:(id)payload completion:(id /* block */)completion;
- (void)addFence:(id)fence completion:(id /* block */)completion;
- (void)deleteFence:(id)fence completion:(id /* block */)completion;
- (void)getFences:(id /* block */)fences;
- (void)fencesForHandles:(id)handles completion:(id /* block */)completion;
- (void)triggerWithUUID:(id)uuid forFenceWithID:(id)id withStatus:(id)status forDate:(id)date completion:(id /* block */)completion;
- (void)triggerWithUUID:(id)uuid forFenceWithID:(id)id withStatus:(id)status forDate:(id)date triggerLocation:(id)location completion:(id /* block */)completion;
- (void)muteFencesForHandle:(id)handle untilDate:(id)date completion:(id /* block */)completion;
- (void)getFavoritesWithCompletion:(id /* block */)completion;
- (void)addFavorite:(id)favorite completion:(id /* block */)completion;
- (void)removeFavorite:(id)favorite completion:(id /* block */)completion;
@end

#endif /* FMFXPCServerProtocol_Protocol_h */