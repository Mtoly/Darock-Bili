//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLAssetsdNotificationClient_h
#define PLAssetsdNotificationClient_h
@import Foundation;

#include "PLAssetsdBaseClient.h"

@interface PLAssetsdNotificationClient : PLAssetsdBaseClient
/* instance methods */
- (void)asyncNotifyUserViewedNotificationWithAlbumCloudGUID:(id)guid;
- (void)asyncNotifyResponseToPhotoStreamInvitationForAlbumWithCloudGUID:(id)guid acceptInvitation:(BOOL)invitation;
- (void)asyncNotifyInterestingMemoryNotificationForColletionID:(id)id notificationDeliveryDate:(id)date;
- (void)asyncNotifyInterestingMemoryNotificationViewedForColletionID:(id)id;
- (void)asyncNotifyReportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)guid;
- (void)asyncNotifySuggestedCMMNotificationForColletionID:(id)id notificationDeliveryDate:(id)date;
- (void)asyncNotifySuggestedCMMViewedForColletionID:(id)id;
- (void)asyncNotifyExpiringMomentShareWithUUIDs:(id)uuids thumbnailImageData:(id)data notificationTitle:(id)title notificationSubtitle:(id)subtitle;
- (void)asyncNotifyReadyToViewMomentShareWithUUID:(id)uuid;
- (void)asyncNotifyPhotosChallengeSubmissionWithNotificationDeliveryDate:(id)date;
- (void)asyncNotifyPhotosChallengeNewQuestionsWithNotificationDeliveryDate:(id)date;
- (void)asyncNotifyStartOfInterestForUnrenderedCinematicVideoItems;
- (void)asyncNotifyEndOfInterestForUnrenderedCinematicVideoItems;
- (void)asyncNotifySharedLibrarySuggestionsWithNotificationDeliveryDate:(id)date;
@end

#endif /* PLAssetsdNotificationClient_h */