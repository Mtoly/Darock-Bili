//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBSession_h
#define NTPBSession_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface NTPBSession : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 appBuild; unsigned int x :1 appConfigTreatmentId; unsigned int x :1 lastAppOpenDate; unsigned int x :1 testBucket; unsigned int x :1 userStartDate; unsigned int x :1 ageBracket; unsigned int x :1 ageBracketConfidenceLevel; unsigned int x :1 campaignType; unsigned int x :1 cellularRadioAccessTechnology; unsigned int x :1 ethnicity; unsigned int x :1 ethnicityConfidenceLevel; unsigned int x :1 gender; unsigned int x :1 genderConfidenceLevel; unsigned int x :1 incomeBracket; unsigned int x :1 incomeBracketConfidenceLevel; unsigned int x :1 newsWidgetModeGroup; unsigned int x :1 osInstallVariant; unsigned int x :1 paywallConfigType; unsigned int x :1 reachabilityStatus; unsigned int x :1 textSize; unsigned int x :1 utcOffset; unsigned int x :1 widgetDisplayMode; unsigned int x :1 widgetDisplayModeSessionEnd; unsigned int x :1 widgetModeType; unsigned int x :1 iosSettingsNotificationsBadgeAppIconEnabled; unsigned int x :1 iosSettingsNotificationsEnabled; unsigned int x :1 iosSettingsNotificationsShowAsBannersEnabled; unsigned int x :1 iosSettingsNotificationsShowInHistoryEnabled; unsigned int x :1 iosSettingsNotificationsShowOnLockScreenEnabled; unsigned int x :1 iosSettingsNotificationsSoundEnabled; unsigned int x :1 isDiagnosticsUsageEnabled; unsigned int x :1 isNewUser; unsigned int x :1 isPaidSubscriber; unsigned int x :1 isPaidSubscriberFromAppStore; unsigned int x :1 isPaidSubscriberFromNews; unsigned int x :1 isPaidSubscriberFromThirdParty; unsigned int x :1 isStoreDemoModeEnabled; unsigned int x :1 locationPermissionGranted; unsigned int x :1 notificationsEnabled; unsigned int x :1 privateDataEncrypted; unsigned int x :1 privateDataSyncOn; unsigned int x :1 progressivePersonalizationAllowed; unsigned int x :1 runningObsolete; unsigned int x :1 signedIntoITunes; unsigned int x :1 signedIntoIcloud; unsigned int x :1 upgradedFromObsolete; } _has;
}

@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (retain, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) BOOL hasDevicePlatform;
@property (retain, nonatomic) NSString *devicePlatform;
@property (readonly, nonatomic) BOOL hasOsVersion;
@property (retain, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) BOOL hasAppVersion;
@property (retain, nonatomic) NSString *appVersion;
@property (nonatomic) BOOL hasAppBuild;
@property (nonatomic) long long appBuild;
@property (nonatomic) BOOL hasUtcOffset;
@property (nonatomic) int utcOffset;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) BOOL hasCarrier;
@property (retain, nonatomic) NSString *carrier;
@property (nonatomic) BOOL hasReachabilityStatus;
@property (nonatomic) int reachabilityStatus;
@property (nonatomic) BOOL hasCellularRadioAccessTechnology;
@property (nonatomic) int cellularRadioAccessTechnology;
@property (nonatomic) BOOL hasTextSize;
@property (nonatomic) int textSize;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (retain, nonatomic) NSData *sessionId;
@property (readonly, nonatomic) BOOL hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (readonly, nonatomic) BOOL hasUserStorefrontId;
@property (retain, nonatomic) NSString *userStorefrontId;
@property (nonatomic) BOOL hasIsNewUser;
@property (nonatomic) BOOL isNewUser;
@property (nonatomic) BOOL hasUserStartDate;
@property (nonatomic) long long userStartDate;
@property (nonatomic) BOOL hasLastAppOpenDate;
@property (nonatomic) long long lastAppOpenDate;
@property (nonatomic) BOOL hasRunningObsolete;
@property (nonatomic) BOOL runningObsolete;
@property (nonatomic) BOOL hasUpgradedFromObsolete;
@property (nonatomic) BOOL upgradedFromObsolete;
@property (readonly, nonatomic) BOOL hasPreviousAppVersion;
@property (retain, nonatomic) NSString *previousAppVersion;
@property (readonly, nonatomic) BOOL hasPreviousOsVersion;
@property (retain, nonatomic) NSString *previousOsVersion;
@property (nonatomic) BOOL hasSignedIntoIcloud;
@property (nonatomic) BOOL signedIntoIcloud;
@property (nonatomic) BOOL hasOsInstallVariant;
@property (nonatomic) int osInstallVariant;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (nonatomic) BOOL hasCampaignType;
@property (nonatomic) int campaignType;
@property (nonatomic) BOOL hasPrivateDataSyncOn;
@property (nonatomic) BOOL privateDataSyncOn;
@property (nonatomic) BOOL hasIsPaidSubscriber;
@property (nonatomic) BOOL isPaidSubscriber;
@property (nonatomic) BOOL hasIsPaidSubscriberFromNews;
@property (nonatomic) BOOL isPaidSubscriberFromNews;
@property (nonatomic) BOOL hasIsPaidSubscriberFromAppStore;
@property (nonatomic) BOOL isPaidSubscriberFromAppStore;
@property (nonatomic) BOOL hasIsPaidSubscriberFromThirdParty;
@property (nonatomic) BOOL isPaidSubscriberFromThirdParty;
@property (nonatomic) BOOL hasNotificationsEnabled;
@property (nonatomic) BOOL notificationsEnabled;
@property (readonly, nonatomic) BOOL hasOriginatingCampaignId;
@property (retain, nonatomic) NSString *originatingCampaignId;
@property (readonly, nonatomic) BOOL hasOriginatingCampaignType;
@property (retain, nonatomic) NSString *originatingCampaignType;
@property (readonly, nonatomic) BOOL hasOriginatingCreativeId;
@property (retain, nonatomic) NSString *originatingCreativeId;
@property (nonatomic) BOOL hasIosSettingsNotificationsEnabled;
@property (nonatomic) BOOL iosSettingsNotificationsEnabled;
@property (nonatomic) BOOL hasWidgetModeType;
@property (nonatomic) int widgetModeType;
@property (nonatomic) BOOL hasLocationPermissionGranted;
@property (nonatomic) BOOL locationPermissionGranted;
@property (nonatomic) BOOL hasNewsWidgetModeGroup;
@property (nonatomic) int newsWidgetModeGroup;
@property (readonly, nonatomic) BOOL hasNewsWidgetModeGroupId;
@property (retain, nonatomic) NSString *newsWidgetModeGroupId;
@property (nonatomic) BOOL hasAgeBracket;
@property (nonatomic) int ageBracket;
@property (nonatomic) BOOL hasAgeBracketConfidenceLevel;
@property (nonatomic) float ageBracketConfidenceLevel;
@property (nonatomic) BOOL hasGender;
@property (nonatomic) int gender;
@property (nonatomic) BOOL hasGenderConfidenceLevel;
@property (nonatomic) float genderConfidenceLevel;
@property (nonatomic) BOOL hasIncomeBracket;
@property (nonatomic) int incomeBracket;
@property (nonatomic) BOOL hasIncomeBracketConfidenceLevel;
@property (nonatomic) float incomeBracketConfidenceLevel;
@property (nonatomic) BOOL hasEthnicity;
@property (nonatomic) int ethnicity;
@property (nonatomic) BOOL hasEthnicityConfidenceLevel;
@property (nonatomic) float ethnicityConfidenceLevel;
@property (nonatomic) BOOL hasAppConfigTreatmentId;
@property (nonatomic) long long appConfigTreatmentId;
@property (readonly, nonatomic) BOOL hasClientName;
@property (retain, nonatomic) NSString *clientName;
@property (readonly, nonatomic) BOOL hasClientVersion;
@property (retain, nonatomic) NSString *clientVersion;
@property (readonly, nonatomic) BOOL hasBrowserLanguage;
@property (retain, nonatomic) NSString *browserLanguage;
@property (readonly, nonatomic) BOOL hasNotwUserId;
@property (retain, nonatomic) NSString *notwUserId;
@property (nonatomic) BOOL hasPrivateDataEncrypted;
@property (nonatomic) BOOL privateDataEncrypted;
@property (nonatomic) BOOL hasProgressivePersonalizationAllowed;
@property (nonatomic) BOOL progressivePersonalizationAllowed;
@property (readonly, nonatomic) BOOL hasWatchSessionId;
@property (retain, nonatomic) NSString *watchSessionId;
@property (readonly, nonatomic) BOOL hasSessionIdWatch;
@property (retain, nonatomic) NSData *sessionIdWatch;
@property (readonly, nonatomic) BOOL hasWidgetSessionId;
@property (retain, nonatomic) NSData *widgetSessionId;
@property (nonatomic) BOOL hasWidgetDisplayMode;
@property (nonatomic) int widgetDisplayMode;
@property (readonly, nonatomic) BOOL hasPersonalizationPortraitVariantName;
@property (retain, nonatomic) NSString *personalizationPortraitVariantName;
@property (readonly, nonatomic) BOOL hasAppProcessLifetimeId;
@property (retain, nonatomic) NSData *appProcessLifetimeId;
@property (nonatomic) BOOL hasTestBucket;
@property (nonatomic) long long testBucket;
@property (readonly, nonatomic) BOOL hasWidgetUserId;
@property (retain, nonatomic) NSString *widgetUserId;
@property (readonly, nonatomic) BOOL hasProductType;
@property (retain, nonatomic) NSString *productType;
@property (readonly, nonatomic) unsigned long long userSegmentationTreatmentIdsCount;
@property (readonly, nonatomic) long long * userSegmentationTreatmentIds;
@property (readonly, nonatomic) unsigned long long userSegmentationSegmentSetIdsCount;
@property (readonly, nonatomic) int * userSegmentationSegmentSetIds;
@property (nonatomic) BOOL hasIosSettingsNotificationsSoundEnabled;
@property (nonatomic) BOOL iosSettingsNotificationsSoundEnabled;
@property (nonatomic) BOOL hasIosSettingsNotificationsBadgeAppIconEnabled;
@property (nonatomic) BOOL iosSettingsNotificationsBadgeAppIconEnabled;
@property (nonatomic) BOOL hasIosSettingsNotificationsShowOnLockScreenEnabled;
@property (nonatomic) BOOL iosSettingsNotificationsShowOnLockScreenEnabled;
@property (nonatomic) BOOL hasIosSettingsNotificationsShowInHistoryEnabled;
@property (nonatomic) BOOL iosSettingsNotificationsShowInHistoryEnabled;
@property (nonatomic) BOOL hasIosSettingsNotificationsShowAsBannersEnabled;
@property (nonatomic) BOOL iosSettingsNotificationsShowAsBannersEnabled;
@property (nonatomic) BOOL hasWidgetDisplayModeSessionEnd;
@property (nonatomic) int widgetDisplayModeSessionEnd;
@property (nonatomic) BOOL hasSignedIntoITunes;
@property (nonatomic) BOOL signedIntoITunes;
@property (nonatomic) BOOL hasIsStoreDemoModeEnabled;
@property (nonatomic) BOOL isStoreDemoModeEnabled;
@property (nonatomic) BOOL hasIsDiagnosticsUsageEnabled;
@property (nonatomic) BOOL isDiagnosticsUsageEnabled;
@property (retain, nonatomic) NSMutableArray *regionIds;
@property (readonly, nonatomic) BOOL hasAppBuildNumber;
@property (retain, nonatomic) NSString *appBuildNumber;
@property (readonly, nonatomic) BOOL hasAmsPurchaseId;
@property (retain, nonatomic) NSString *amsPurchaseId;
@property (readonly, nonatomic) BOOL hasAmsCampaignId;
@property (retain, nonatomic) NSString *amsCampaignId;
@property (nonatomic) BOOL hasPaywallConfigType;
@property (nonatomic) int paywallConfigType;

/* class methods */
+ (Class)regionIdsType;

/* instance methods */
- (void)dealloc;
- (id)reachabilityStatusAsString:(int)string;
- (int)StringAsReachabilityStatus:(id)status;
- (id)cellularRadioAccessTechnologyAsString:(int)string;
- (int)StringAsCellularRadioAccessTechnology:(id)technology;
- (id)osInstallVariantAsString:(int)string;
- (int)StringAsOsInstallVariant:(id)variant;
- (id)campaignTypeAsString:(int)string;
- (int)StringAsCampaignType:(id)type;
- (id)widgetModeTypeAsString:(int)string;
- (int)StringAsWidgetModeType:(id)type;
- (id)newsWidgetModeGroupAsString:(int)string;
- (int)StringAsNewsWidgetModeGroup:(id)group;
- (id)widgetDisplayModeAsString:(int)string;
- (int)StringAsWidgetDisplayMode:(id)mode;
- (void)clearUserSegmentationTreatmentIds;
- (void)addUserSegmentationTreatmentIds:(long long)ids;
- (long long)userSegmentationTreatmentIdsAtIndex:(unsigned long long)index;
- (void)setUserSegmentationTreatmentIds:(long long *)ids count:(unsigned long long)count;
- (void)clearUserSegmentationSegmentSetIds;
- (void)addUserSegmentationSegmentSetIds:(int)ids;
- (int)userSegmentationSegmentSetIdsAtIndex:(unsigned long long)index;
- (void)setUserSegmentationSegmentSetIds:(int *)ids count:(unsigned long long)count;
- (id)widgetDisplayModeSessionEndAsString:(int)string;
- (int)StringAsWidgetDisplayModeSessionEnd:(id)end;
- (void)clearRegionIds;
- (void)addRegionIds:(id)ids;
- (unsigned long long)regionIdsCount;
- (id)regionIdsAtIndex:(unsigned long long)index;
- (id)paywallConfigTypeAsString:(int)string;
- (int)StringAsPaywallConfigType:(id)type;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBSession_h */