//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMMomentsEventDataEvent_h
#define BMMomentsEventDataEvent_h
@import Foundation;

#include "BMEventBase.h"
#include "BMMomentsEventDataPR.h"
#include "BMStoreData-Protocol.h"

@class NSArray, NSDate, NSString;

@interface BMMomentsEventDataEvent : BMEventBase<BMStoreData> {
  /* instance variables */
  BOOL _hasRaw_startDate;
  double _raw_startDate;
  BOOL _hasRaw_endDate;
  double _raw_endDate;
  BOOL _hasRaw_creationDate;
  double _raw_creationDate;
  BOOL _hasRaw_sourceCreationDate;
  double _raw_sourceCreationDate;
  BOOL _hasRaw_expirationDate;
  double _raw_expirationDate;
}

@property (readonly, nonatomic) int photoMomentSource;
@property (readonly, nonatomic) NSArray *photoMomentInferences;
@property (readonly, nonatomic) NSArray *photoMomentHolidays;
@property (readonly, nonatomic) int numPhotoMomentHolidays;
@property (nonatomic) BOOL hasNumPhotoMomentHolidays;
@property (readonly, nonatomic) int numPhotoMomentInferences;
@property (nonatomic) BOOL hasNumPhotoMomentInferences;
@property (readonly, nonatomic) int numPhotoMomentPublicEvents;
@property (nonatomic) BOOL hasNumPhotoMomentPublicEvents;
@property (readonly, nonatomic) int numPhotoMomentPersons;
@property (nonatomic) BOOL hasNumPhotoMomentPersons;
@property (readonly, nonatomic) BOOL isFamilyInPhotoMoment;
@property (nonatomic) BOOL hasIsFamilyInPhotoMoment;
@property (readonly, nonatomic) BOOL momentIncludesFavoritedAsset;
@property (nonatomic) BOOL hasMomentIncludesFavoritedAsset;
@property (readonly, nonatomic) BOOL momentIncludesVideo;
@property (nonatomic) BOOL hasMomentIncludesVideo;
@property (readonly, nonatomic) BOOL momentIncludesPhoto;
@property (nonatomic) BOOL hasMomentIncludesPhoto;
@property (readonly, nonatomic) NSString *eventIdentifier;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *sourceCreationDate;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) int provider;
@property (readonly, nonatomic) int category;
@property (readonly, nonatomic) int placeUserType;
@property (readonly, nonatomic) int poiCategory;
@property (readonly, nonatomic) int placeDiscovery;
@property (readonly, nonatomic) int locationMode;
@property (readonly, nonatomic) int workoutType;
@property (readonly, nonatomic) NSString *workoutBundleID;
@property (readonly, nonatomic) int mediaGenre;
@property (readonly, nonatomic) int mediaType;
@property (readonly, nonatomic) int mediaRepetitions;
@property (nonatomic) BOOL hasMediaRepetitions;
@property (readonly, nonatomic) int mediaSumTimePlayed;
@property (nonatomic) BOOL hasMediaSumTimePlayed;
@property (readonly, nonatomic) int sourceParty;
@property (readonly, nonatomic) NSString *mediaPlayerBundleID;
@property (readonly, nonatomic) int numAudioMediaPlaySessionsPerDay;
@property (nonatomic) BOOL hasNumAudioMediaPlaySessionsPerDay;
@property (readonly, nonatomic) double durationAudioMediaPlaySessionsPerDay;
@property (nonatomic) BOOL hasDurationAudioMediaPlaySessionsPerDay;
@property (readonly, nonatomic) int numVideoMediaPlaySessionsPerDay;
@property (nonatomic) BOOL hasNumVideoMediaPlaySessionsPerDay;
@property (readonly, nonatomic) double durationVideoMediaPlaySessionsPerDay;
@property (nonatomic) BOOL hasDurationVideoMediaPlaySessionsPerDay;
@property (readonly, nonatomic) int numFirstPartyMediaPlaySessionsPerDay;
@property (nonatomic) BOOL hasNumFirstPartyMediaPlaySessionsPerDay;
@property (readonly, nonatomic) int numThirdPartyMediaPlaySessionsPerDay;
@property (nonatomic) BOOL hasNumThirdPartyMediaPlaySessionsPerDay;
@property (readonly, nonatomic) int numContacts;
@property (nonatomic) BOOL hasNumContacts;
@property (readonly, nonatomic) NSArray *contactIDsInConversation;
@property (readonly, nonatomic) NSString *contactIDMostSignificantInConversation;
@property (readonly, nonatomic) double interactionContactScore;
@property (nonatomic) BOOL hasInteractionContactScore;
@property (readonly, nonatomic) BOOL textLikeMechanismIncluded;
@property (nonatomic) BOOL hasTextLikeMechanismIncluded;
@property (readonly, nonatomic) BOOL callLikeMechanismIncluded;
@property (nonatomic) BOOL hasCallLikeMechanismIncluded;
@property (readonly, nonatomic) int numTextLikeInteractions;
@property (nonatomic) BOOL hasNumTextLikeInteractions;
@property (readonly, nonatomic) int numAudioLikeInteractions;
@property (nonatomic) BOOL hasNumAudioLikeInteractions;
@property (readonly, nonatomic) int numVideoLikeInteractions;
@property (nonatomic) BOOL hasNumVideoLikeInteractions;
@property (readonly, nonatomic) double totalDurationOfCallLikeInteractions;
@property (nonatomic) BOOL hasTotalDurationOfCallLikeInteractions;
@property (readonly, nonatomic) double minDurationOfCallLikeInteractions;
@property (nonatomic) BOOL hasMinDurationOfCallLikeInteractions;
@property (readonly, nonatomic) double maxDurationOfCallLikeInteractions;
@property (nonatomic) BOOL hasMaxDurationOfCallLikeInteractions;
@property (readonly, nonatomic) int suggestedEventCategory;
@property (readonly, nonatomic) int numAttendees;
@property (nonatomic) BOOL hasNumAttendees;
@property (readonly, nonatomic) int numtripParts;
@property (nonatomic) BOOL hasNumtripParts;
@property (readonly, nonatomic) int tripMode;
@property (readonly, nonatomic) int numScoredTopics;
@property (nonatomic) BOOL hasNumScoredTopics;
@property (readonly, nonatomic) int numItemAuthors;
@property (nonatomic) BOOL hasNumItemAuthors;
@property (readonly, nonatomic) int numItemRecipients;
@property (nonatomic) BOOL hasNumItemRecipients;
@property (readonly, nonatomic) BOOL isGatheringComplete;
@property (nonatomic) BOOL hasIsGatheringComplete;
@property (readonly, nonatomic) BMMomentsEventDataPR *gaPR;
@property (readonly, nonatomic) int pCount;
@property (nonatomic) BOOL hasPCount;
@property (readonly, nonatomic) int mapItemSource;
@property (readonly, nonatomic) int placeType;
@property (readonly, nonatomic) int placeLabelGranularity;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;
+ (id)columns;
+ (id)validKeyPaths;

/* instance methods */
- (id)initWithEventIdentifier:(id)identifier startDate:(id)date endDate:(id)date creationDate:(id)date sourceCreationDate:(id)date expirationDate:(id)date provider:(int)provider category:(int)category placeUserType:(int)type poiCategory:(int)category placeDiscovery:(int)discovery locationMode:(int)mode workoutType:(int)type workoutBundleID:(id)id mediaGenre:(int)genre mediaType:(int)type mediaRepetitions:(id)repetitions mediaSumTimePlayed:(id)played sourceParty:(int)party mediaPlayerBundleID:(id)id numAudioMediaPlaySessionsPerDay:(id)day durationAudioMediaPlaySessionsPerDay:(id)day numVideoMediaPlaySessionsPerDay:(id)day durationVideoMediaPlaySessionsPerDay:(id)day numFirstPartyMediaPlaySessionsPerDay:(id)day numThirdPartyMediaPlaySessionsPerDay:(id)day numContacts:(id)contacts contactIDsInConversation:(id)conversation contactIDMostSignificantInConversation:(id)conversation interactionContactScore:(id)score textLikeMechanismIncluded:(id)included callLikeMechanismIncluded:(id)included numTextLikeInteractions:(id)interactions numAudioLikeInteractions:(id)interactions numVideoLikeInteractions:(id)interactions totalDurationOfCallLikeInteractions:(id)interactions minDurationOfCallLikeInteractions:(id)interactions maxDurationOfCallLikeInteractions:(id)interactions photoMomentSource:(int)source photoMomentInferences:(id)inferences photoMomentHolidays:(id)holidays numPhotoMomentHolidays:(id)holidays numPhotoMomentInferences:(id)inferences numPhotoMomentPublicEvents:(id)events numPhotoMomentPersons:(id)persons isFamilyInPhotoMoment:(id)moment momentIncludesFavoritedAsset:(id)asset momentIncludesVideo:(id)video momentIncludesPhoto:(id)photo suggestedEventCategory:(int)category numAttendees:(id)attendees numtripParts:(id)parts tripMode:(int)mode numScoredTopics:(id)topics numItemAuthors:(id)authors numItemRecipients:(id)recipients;
- (id)initWithEventIdentifier:(id)identifier startDate:(id)date endDate:(id)date creationDate:(id)date sourceCreationDate:(id)date expirationDate:(id)date provider:(int)provider category:(int)category placeUserType:(int)type poiCategory:(int)category placeDiscovery:(int)discovery locationMode:(int)mode workoutType:(int)type workoutBundleID:(id)id mediaGenre:(int)genre mediaType:(int)type mediaRepetitions:(id)repetitions mediaSumTimePlayed:(id)played sourceParty:(int)party mediaPlayerBundleID:(id)id numAudioMediaPlaySessionsPerDay:(id)day durationAudioMediaPlaySessionsPerDay:(id)day numVideoMediaPlaySessionsPerDay:(id)day durationVideoMediaPlaySessionsPerDay:(id)day numFirstPartyMediaPlaySessionsPerDay:(id)day numThirdPartyMediaPlaySessionsPerDay:(id)day numContacts:(id)contacts contactIDsInConversation:(id)conversation contactIDMostSignificantInConversation:(id)conversation interactionContactScore:(id)score textLikeMechanismIncluded:(id)included callLikeMechanismIncluded:(id)included numTextLikeInteractions:(id)interactions numAudioLikeInteractions:(id)interactions numVideoLikeInteractions:(id)interactions totalDurationOfCallLikeInteractions:(id)interactions minDurationOfCallLikeInteractions:(id)interactions maxDurationOfCallLikeInteractions:(id)interactions photoMomentSource:(int)source photoMomentInferences:(id)inferences photoMomentHolidays:(id)holidays numPhotoMomentHolidays:(id)holidays numPhotoMomentInferences:(id)inferences numPhotoMomentPublicEvents:(id)events numPhotoMomentPersons:(id)persons isFamilyInPhotoMoment:(id)moment momentIncludesFavoritedAsset:(id)asset momentIncludesVideo:(id)video momentIncludesPhoto:(id)photo suggestedEventCategory:(int)category numAttendees:(id)attendees numtripParts:(id)parts tripMode:(int)mode numScoredTopics:(id)topics numItemAuthors:(id)authors numItemRecipients:(id)recipients isGatheringComplete:(id)complete gaPR:(id)pr pCount:(id)count mapItemSource:(int)source placeType:(int)type placeLabelGranularity:(int)granularity;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)_contactIDsInConversationJSONArray;
- (id)_photoMomentInferencesJSONArray;
- (id)_photoMomentHolidaysJSONArray;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMMomentsEventDataEvent_h */