//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCSportsEvent_h
#define FCSportsEvent_h
@import Foundation;

#include "FCAssetHandle.h"
#include "FCChannelProviding-Protocol.h"
#include "FCColor.h"
#include "FCFeedTheming-Protocol.h"
#include "FCInterestToken.h"
#include "FCPaywallConfiguration.h"
#include "FCPuzzleTypeProviding-Protocol.h"
#include "FCSectionProviding-Protocol.h"
#include "FCSectionSupergroupKnobs.h"
#include "FCSportsEventProviding-Protocol.h"
#include "FCSportsProviding-Protocol.h"
#include "FCSportsRecommendationMappings.h"
#include "FCSportsTheming-Protocol.h"
#include "FCTagProviding-Protocol.h"
#include "FCTagStocksFields-Protocol.h"
#include "FCTopicProviding-Protocol.h"

@class NSArray, NSData, NSDate, NSDictionary, NSString, NTPBPublisherPaidDescriptionStrings;

@interface FCSportsEvent : NSObject<FCTagProviding, FCSportsEventProviding, FCSportsTheming, FCTopicProviding> {
  /* instance variables */
  FCInterestToken *_interestToken;
}

@property (readonly, nonatomic) unsigned long long tagType;
@property (readonly, nonatomic) unsigned long long userFacingTagType;
@property (readonly, nonatomic) BOOL hideAccessoryText;
@property (readonly, nonatomic) NSObject<FCChannelProviding> *asChannel;
@property (readonly, nonatomic) NSObject<FCSectionProviding> *asSection;
@property (readonly, nonatomic) NSObject<FCTopicProviding> *asTopic;
@property (readonly, nonatomic) NSObject<FCSportsProviding> *asSports;
@property (readonly, nonatomic) NSObject<FCSportsEventProviding> *asSportsEvent;
@property (readonly, nonatomic) NSObject<FCPuzzleTypeProviding> *asPuzzleType;
@property (readonly, nonatomic) NSDate *fetchDate;
@property (readonly, nonatomic) NSDate *loadDate;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *compactDisplayName;
@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) NSString *nameCompact;
@property (readonly, copy, nonatomic) NSString *versionKey;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, nonatomic) long long contentProvider;
@property (readonly, nonatomic) BOOL isPublic;
@property (readonly, nonatomic) BOOL isDeprecated;
@property (readonly, nonatomic) BOOL isExplicitContent;
@property (readonly, copy, nonatomic) NSString *replacementID;
@property (readonly, copy, nonatomic) NSString *highlightsArticleListID;
@property (readonly, copy, nonatomic) NSString *primaryAudience;
@property (readonly, nonatomic) BOOL isSubscribable;
@property (readonly, nonatomic) FCAssetHandle *coverImageAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *feedNavImageAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *feedNavImageHQAssetHandle;
@property (readonly, copy, nonatomic) NSObject<FCFeedTheming> *theme;
@property (readonly, copy, nonatomic) FCColor *groupTitleColor;
@property (readonly, copy, nonatomic) FCColor *groupDarkStyleTitleColor;
@property (readonly, nonatomic) NSArray *iAdCategories;
@property (readonly, nonatomic) NSArray *iAdKeywords;
@property (readonly, nonatomic) NSArray *blockedStorefrontIDs;
@property (readonly, nonatomic) NSArray *allowedStorefrontIDs;
@property (readonly, nonatomic) long long score;
@property (readonly, nonatomic) long long minimumNewsVersion;
@property (readonly, nonatomic) BOOL isNotificationEnabled;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *magazineGenre;
@property (readonly, copy, nonatomic) NSString *superfeedConfigResourceID;
@property (readonly, nonatomic) double subscriptionRate;
@property (readonly, nonatomic) NSArray *adTargetingKeywords;
@property (readonly, copy, nonatomic) NSString *publisherPaidAuthorizationURL;
@property (readonly, copy, nonatomic) NSString *publisherPaidVerificationURL;
@property (readonly, copy, nonatomic) NSString *publisherPaidWebAccessURL;
@property (readonly, nonatomic) NSArray *publisherPaidFeldsparablePurchaseIDs;
@property (readonly, nonatomic) NSArray *publisherPaidBundlePurchaseIDs;
@property (readonly, nonatomic) NSArray *publisherPaidOfferableConfigurations;
@property (readonly, nonatomic) BOOL publisherPaidLeakyPaywallOptOut;
@property (readonly, nonatomic) BOOL publisherPaidWebAccessOptIn;
@property (readonly, nonatomic) FCAssetHandle *nameImageMaskWidgetLQAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *nameImageMaskWidgetHQAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *nameImageCompactAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *nameImageLargeAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *nameImageLargeMaskAssetHandle;
@property (readonly, nonatomic) BOOL isBlockedExplicitContent;
@property (readonly, nonatomic) NTPBPublisherPaidDescriptionStrings *publisherPaidDescriptionStrings;
@property (readonly, nonatomic) unsigned long long groupingEligibility;
@property (readonly, nonatomic) BOOL isHidden;
@property (readonly, nonatomic) NSString *supergroupKnobsJson;
@property (readonly, nonatomic) NSString *supergroupConfigJson;
@property (readonly, nonatomic) FCSectionSupergroupKnobs *supergroupKnobs;
@property (readonly, nonatomic) BOOL isRealTimeTrackingEnabled;
@property (readonly, nonatomic) BOOL isArticleReadCountReportingEnabled;
@property (readonly, nonatomic) BOOL isAutoDarkModeEnabled;
@property (readonly, nonatomic) BOOL disableFollow;
@property (readonly, nonatomic) BOOL disableBlock;
@property (readonly, nonatomic) BOOL useCompactNameForPersonalizedPaywall;
@property (readonly, nonatomic) BOOL isInternal;
@property (readonly, nonatomic) BOOL isSandbox;
@property (readonly, nonatomic) BOOL isLocal;
@property (readonly, nonatomic) BOOL isSensitiveTopic;
@property (readonly, nonatomic) BOOL isNewspaper;
@property (readonly, nonatomic) BOOL isMagazine;
@property (readonly, nonatomic) BOOL isSports;
@property (readonly, nonatomic) BOOL isSportsEvent;
@property (readonly, nonatomic) BOOL isMySports;
@property (readonly, nonatomic) BOOL isPuzzleHub;
@property (readonly, nonatomic) BOOL isPuzzleType;
@property (readonly, nonatomic) BOOL hasEvergreenArticleList;
@property (readonly, nonatomic) NSString *articleRecirculationConfigJSON;
@property (readonly, nonatomic) NSArray *publisherSpecifiedArticleIDs;
@property (readonly, nonatomic) NSDate *publisherSpecifiedArticleIDsModifiedDate;
@property (readonly, nonatomic) NSDictionary *publisherSpecifiedArticles;
@property (readonly, nonatomic) NSString *personalizedPaywallName;
@property (readonly, nonatomic) NSObject<FCTagStocksFields> *stocksFields;
@property (readonly, copy, nonatomic) FCPaywallConfiguration *paidBundlePaywallConfiguration;
@property (copy, nonatomic) NSString *titleDisplayPrefix;
@property (copy, nonatomic) NSString *titleDisplaySuffix;
@property (readonly, nonatomic) NSData *sportsRecommendationMappingsJSON;
@property (readonly, nonatomic) FCSportsRecommendationMappings *sportsRecommendationMappings;
@property (readonly, nonatomic) NSData *backingTagRecordData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *eventCompetitorTags;
@property (readonly, nonatomic) NSString *eventArticleListID;
@property (readonly, nonatomic) NSObject<FCSportsProviding> *eventLeagueTag;
@property (readonly, nonatomic) NSDictionary *rosterResourceIDs;
@property (readonly, nonatomic) BOOL isRouteable;
@property (readonly, copy, nonatomic) NSDate *sportsEventStartTime;
@property (readonly, copy, nonatomic) NSString *UMCCanonicalID;
@property (readonly, nonatomic) BOOL isSportsRecommendable;
@property (readonly, nonatomic) NSString *sportsData;
@property (readonly, copy, nonatomic) NSString *sportsLocation;
@property (readonly, nonatomic) BOOL hideLocationInMasthead;
@property (readonly, copy, nonatomic) NSString *sportsPrimaryName;
@property (readonly, copy, nonatomic) NSString *sportsSecondaryName;
@property (readonly, copy, nonatomic) NSString *sportsSecondaryShortName;
@property (readonly, copy, nonatomic) NSString *sportsFullName;
@property (readonly, copy, nonatomic) NSString *sportsNickname;
@property (readonly, copy, nonatomic) NSString *sportsNameAbbreviation;
@property (readonly, nonatomic) unsigned long long sportsLeagueType;
@property (readonly, copy, nonatomic) NSObject<FCSportsTheming> *sportsTheme;
@property (readonly, nonatomic) unsigned long long sportsType;
@property (readonly, copy, nonatomic) NSString *sportsTypeDisplayName;
@property (readonly, copy, nonatomic) NSString *sportsTypePluralizedDisplayName;
@property (readonly, copy, nonatomic) NSArray *topLevelGroupsTagIdentifiers;
@property (readonly, copy, nonatomic) NSString *topLevelSportTagIdentifier;
@property (readonly, copy, nonatomic) NSArray *sportsParentTagIdentifiers;
@property (readonly, nonatomic) FCAssetHandle *sportsLogoImageCompactAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *sportsLogoImageAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *sportsLogoImageLargeAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *sportsLogoAltImageCompactAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *sportsLogoAltImageAssetHandle;
@property (readonly, nonatomic) FCAssetHandle *sportsLogoAltImageLargeAssetHandle;
@property (readonly, nonatomic) FCColor *sportsPrimaryColor;
@property (readonly, nonatomic) FCColor *sportsSecondaryColor;
@property (readonly, nonatomic) FCColor *sportsEventNavigationForegroundColor;
@property (readonly, nonatomic) long long sportsLogoMastheadLeadingOffset;
@property (readonly, nonatomic) long long sportsLogoMastheadHorizontalPaddingOffset;
@property (readonly, nonatomic) unsigned long long sportsLogoMastheadVisibility;

/* class methods */
+ (BOOL)isSportsEventIdentifier:(id)identifier;

/* instance methods */
- (id)initWithSportsEventRecord:(id)record eventCompetitorTags:(id)tags eventLeagueTag:(id)tag assetManager:(id)manager interestToken:(id)token;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)_inflateSportsDataFromJSONDictionary:(id)jsondictionary;
- (void)_inflateSportsThemeFromJSONDictionary:(id)jsondictionary;
- (BOOL)isEqualToTag:(id)tag;
- (id)authorizationURL;
- (id)feedIDForBin:(long long)bin;
- (id)freeFeedIDForBin:(long long)bin;
- (BOOL)isAuthenticationSetup;
- (BOOL)isNoLongerAvailable;
- (BOOL)isPurchaseSetup;
- (id)paidFeedIDForBin:(long long)bin;
- (void)ppt_overrideFeedID:(id)id;
- (id)prefetchPurchaseOffer;
- (id)setTitleDisplayPrefixOverride:(id)override;
- (id)setTitleDisplaySuffixOverride:(id)override;
@end

#endif /* FCSportsEvent_h */