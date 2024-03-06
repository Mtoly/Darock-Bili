//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOClientCapabilities_h
#define GEOClientCapabilities_h
@import Foundation;

#include "PBCodable.h"
#include "GEOAbAssignInfo.h"
#include "GEOAdvisoryClientCapabilities.h"
#include "GEOFormattedStringClientCapabilities.h"
#include "GEOLocalTime.h"
#include "GEOLocalizationCapabilities.h"
#include "GEOWalkingSupportedFeatures.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOClientCapabilities : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_maxFormatterSupported; unsigned int x :1 has_maxManeuverTypeSupported; unsigned int x :1 has_maxRouteIncidentSupported; unsigned int x :1 has_maxTrafficSpeedSupported; unsigned int x :1 has_maxSupportedTransitFareVersion; unsigned int x :1 has_maxZilchMessageVersionSupported; unsigned int x :1 has_transitMarketSupport; unsigned int x :1 has_clusteredTransitRoutesSupported; unsigned int x :1 has_includeCrossLanguagePhonetics; unsigned int x :1 has_internalInstall; unsigned int x :1 has_internalTool; unsigned int x :1 has_isAdvancedMap; unsigned int x :1 has_isGlobeProjection; unsigned int x :1 has_replaceAccidentStringWithCrash; unsigned int x :1 has_routeOptionsSupported; unsigned int x :1 has_snapToClosestStopSupported; unsigned int x :1 has_supportsAdvancedMap; unsigned int x :1 has_supportsAreaEventsEnhancements; unsigned int x :1 has_supportsArrivalMapRegion; unsigned int x :1 has_supportsBannerQueuingDirections; unsigned int x :1 has_supportsBannerQueuing; unsigned int x :1 has_supportsCongestionZones; unsigned int x :1 has_supportsDefaultToNewRouteFlag; unsigned int x :1 has_supportsDisablingProgressBarFromBannerButtons; unsigned int x :1 has_supportsElectricVehicleRoutes; unsigned int x :1 has_supportsEv2; unsigned int x :1 has_supportsGuidanceEventImportanceInfo; unsigned int x :1 has_supportsGuidanceEventPrivacyFilters; unsigned int x :1 has_supportsGuidanceEventsInlineShields; unsigned int x :1 has_supportsGuidanceEvents; unsigned int x :1 has_supportsJunctionView; unsigned int x :1 has_supportsLicensePlateRestrictions; unsigned int x :1 has_supportsLongShieldStrings; unsigned int x :1 has_supportsNaturalGuidance; unsigned int x :1 has_supportsRoadComplexities; unsigned int x :1 has_supportsRouteNameRanges; unsigned int x :1 has_supportsSilentRouteUpdates; unsigned int x :1 has_supportsSpeedTrapAnnouncements; unsigned int x :1 has_supportsTrafficCameras; unsigned int x :1 has_supportsUserIncidentReports; unsigned int x :1 has_supportsWalkingSuggestionsAfterParking; unsigned int x :1 has_supportsWaypointRoutes; unsigned int x :1 has_willSendEvDirectionsFeedback; unsigned int x :1 read_unknownFields; unsigned int x :1 read_supportedTransitFeatures; unsigned int x :1 read_supportsMultipointRoutings; unsigned int x :1 read_abAssignInfo; unsigned int x :1 read_advisoryClientCapabilities; unsigned int x :1 read_appMajorVersion; unsigned int x :1 read_appMinorVersion; unsigned int x :1 read_deviceCountryCode; unsigned int x :1 read_deviceSku; unsigned int x :1 read_displayLanguages; unsigned int x :1 read_displayRegion; unsigned int x :1 read_formattedStringClientCapabilities; unsigned int x :1 read_hardwareModel; unsigned int x :1 read_localizationCapabilities; unsigned int x :1 read_osVersion; unsigned int x :1 read_requestTime; unsigned int x :1 read_userCurrentTimezone; unsigned int x :1 read_walkingSupportedFeatures; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) BOOL hasAppMajorVersion;
@property (retain, nonatomic) NSString *appMajorVersion;
@property (readonly, nonatomic) BOOL hasAppMinorVersion;
@property (retain, nonatomic) NSString *appMinorVersion;
@property (readonly, nonatomic) BOOL hasHardwareModel;
@property (retain, nonatomic) NSString *hardwareModel;
@property (nonatomic) BOOL hasMaxManeuverTypeSupported;
@property (nonatomic) int maxManeuverTypeSupported;
@property (nonatomic) BOOL hasInternalInstall;
@property (nonatomic) BOOL internalInstall;
@property (nonatomic) BOOL hasInternalTool;
@property (nonatomic) BOOL internalTool;
@property (retain, nonatomic) NSMutableArray *displayLanguages;
@property (readonly, nonatomic) BOOL hasDisplayRegion;
@property (retain, nonatomic) NSString *displayRegion;
@property (nonatomic) BOOL hasMaxTrafficSpeedSupported;
@property (nonatomic) unsigned int maxTrafficSpeedSupported;
@property (nonatomic) BOOL hasMaxRouteIncidentSupported;
@property (nonatomic) int maxRouteIncidentSupported;
@property (nonatomic) BOOL hasMaxFormatterSupported;
@property (nonatomic) int maxFormatterSupported;
@property (readonly, nonatomic) BOOL hasDeviceCountryCode;
@property (retain, nonatomic) NSString *deviceCountryCode;
@property (nonatomic) BOOL hasClusteredTransitRoutesSupported;
@property (nonatomic) BOOL clusteredTransitRoutesSupported;
@property (nonatomic) BOOL hasRouteOptionsSupported;
@property (nonatomic) BOOL routeOptionsSupported;
@property (nonatomic) BOOL hasTransitMarketSupport;
@property (nonatomic) int transitMarketSupport;
@property (readonly, nonatomic) BOOL hasFormattedStringClientCapabilities;
@property (retain, nonatomic) GEOFormattedStringClientCapabilities *formattedStringClientCapabilities;
@property (readonly, nonatomic) BOOL hasAdvisoryClientCapabilities;
@property (retain, nonatomic) GEOAdvisoryClientCapabilities *advisoryClientCapabilities;
@property (nonatomic) BOOL hasSnapToClosestStopSupported;
@property (nonatomic) BOOL snapToClosestStopSupported;
@property (nonatomic) BOOL hasIncludeCrossLanguagePhonetics;
@property (nonatomic) BOOL includeCrossLanguagePhonetics;
@property (readonly, nonatomic) BOOL hasUserCurrentTimezone;
@property (retain, nonatomic) NSString *userCurrentTimezone;
@property (nonatomic) BOOL hasSupportsLongShieldStrings;
@property (nonatomic) BOOL supportsLongShieldStrings;
@property (nonatomic) BOOL hasSupportsGuidanceEvents;
@property (nonatomic) BOOL supportsGuidanceEvents;
@property (nonatomic) BOOL hasSupportsGuidanceEventsInlineShields;
@property (nonatomic) BOOL supportsGuidanceEventsInlineShields;
@property (readonly, nonatomic) BOOL hasAbAssignInfo;
@property (retain, nonatomic) GEOAbAssignInfo *abAssignInfo;
@property (readonly, nonatomic) BOOL hasRequestTime;
@property (retain, nonatomic) GEOLocalTime *requestTime;
@property (nonatomic) BOOL hasMaxZilchMessageVersionSupported;
@property (nonatomic) unsigned int maxZilchMessageVersionSupported;
@property (readonly, nonatomic) unsigned long long supportedTransitFeaturesCount;
@property (readonly, nonatomic) int * supportedTransitFeatures;
@property (nonatomic) BOOL hasSupportsArrivalMapRegion;
@property (nonatomic) BOOL supportsArrivalMapRegion;
@property (nonatomic) BOOL hasSupportsNaturalGuidance;
@property (nonatomic) BOOL supportsNaturalGuidance;
@property (nonatomic) BOOL hasSupportsJunctionView;
@property (nonatomic) BOOL supportsJunctionView;
@property (nonatomic) BOOL hasSupportsCongestionZones;
@property (nonatomic) BOOL supportsCongestionZones;
@property (nonatomic) BOOL hasSupportsLicensePlateRestrictions;
@property (nonatomic) BOOL supportsLicensePlateRestrictions;
@property (nonatomic) BOOL hasSupportsElectricVehicleRoutes;
@property (nonatomic) BOOL supportsElectricVehicleRoutes;
@property (nonatomic) BOOL hasSupportsTrafficCameras;
@property (nonatomic) BOOL supportsTrafficCameras;
@property (nonatomic) BOOL hasSupportsWaypointRoutes;
@property (nonatomic) BOOL supportsWaypointRoutes;
@property (readonly, nonatomic) BOOL hasLocalizationCapabilities;
@property (retain, nonatomic) GEOLocalizationCapabilities *localizationCapabilities;
@property (readonly, nonatomic) BOOL hasDeviceSku;
@property (retain, nonatomic) NSString *deviceSku;
@property (readonly, nonatomic) BOOL hasOsVersion;
@property (retain, nonatomic) NSString *osVersion;
@property (nonatomic) BOOL hasWillSendEvDirectionsFeedback;
@property (nonatomic) BOOL willSendEvDirectionsFeedback;
@property (nonatomic) BOOL hasSupportsRoadComplexities;
@property (nonatomic) BOOL supportsRoadComplexities;
@property (nonatomic) BOOL hasSupportsSpeedTrapAnnouncements;
@property (nonatomic) BOOL supportsSpeedTrapAnnouncements;
@property (nonatomic) BOOL hasSupportsUserIncidentReports;
@property (nonatomic) BOOL supportsUserIncidentReports;
@property (nonatomic) BOOL hasSupportsAreaEventsEnhancements;
@property (nonatomic) BOOL supportsAreaEventsEnhancements;
@property (nonatomic) BOOL hasSupportsAdvancedMap;
@property (nonatomic) BOOL supportsAdvancedMap;
@property (nonatomic) BOOL hasSupportsSilentRouteUpdates;
@property (nonatomic) BOOL supportsSilentRouteUpdates;
@property (nonatomic) BOOL hasReplaceAccidentStringWithCrash;
@property (nonatomic) BOOL replaceAccidentStringWithCrash;
@property (nonatomic) BOOL hasSupportsGuidanceEventPrivacyFilters;
@property (nonatomic) BOOL supportsGuidanceEventPrivacyFilters;
@property (nonatomic) BOOL hasSupportsGuidanceEventImportanceInfo;
@property (nonatomic) BOOL supportsGuidanceEventImportanceInfo;
@property (nonatomic) BOOL hasIsAdvancedMap;
@property (nonatomic) BOOL isAdvancedMap;
@property (nonatomic) BOOL hasIsGlobeProjection;
@property (nonatomic) BOOL isGlobeProjection;
@property (readonly, nonatomic) unsigned long long supportsMultipointRoutingsCount;
@property (readonly, nonatomic) int * supportsMultipointRoutings;
@property (nonatomic) BOOL hasSupportsDefaultToNewRouteFlag;
@property (nonatomic) BOOL supportsDefaultToNewRouteFlag;
@property (readonly, nonatomic) BOOL hasWalkingSupportedFeatures;
@property (retain, nonatomic) GEOWalkingSupportedFeatures *walkingSupportedFeatures;
@property (nonatomic) BOOL hasMaxSupportedTransitFareVersion;
@property (nonatomic) int maxSupportedTransitFareVersion;
@property (nonatomic) BOOL hasSupportsDisablingProgressBarFromBannerButtons;
@property (nonatomic) BOOL supportsDisablingProgressBarFromBannerButtons;
@property (nonatomic) BOOL hasSupportsBannerQueuing;
@property (nonatomic) BOOL supportsBannerQueuing;
@property (nonatomic) BOOL hasSupportsEv2;
@property (nonatomic) BOOL supportsEv2;
@property (nonatomic) BOOL hasSupportsRouteNameRanges;
@property (nonatomic) BOOL supportsRouteNameRanges;
@property (nonatomic) BOOL hasSupportsWalkingSuggestionsAfterParking;
@property (nonatomic) BOOL supportsWalkingSuggestionsAfterParking;
@property (nonatomic) BOOL hasSupportsBannerQueuingDirections;
@property (nonatomic) BOOL supportsBannerQueuingDirections;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (Class)displayLanguagesType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (void)_updateWithAutomobileOptions:(id)options;
- (void)updateWithETARequest:(id)etarequest;
- (void)updateWithETATrafficUpdateRequest:(id)request;
- (void)updateWithDirectionsRequest:(id)request;
- (id)init;
- (id)initWithData:(id)data;
- (void)dealloc;
- (id)maxManeuverTypeSupportedAsString:(int)string;
- (int)StringAsMaxManeuverTypeSupported:(id)supported;
- (void)clearDisplayLanguages;
- (void)addDisplayLanguages:(id)languages;
- (unsigned long long)displayLanguagesCount;
- (id)displayLanguagesAtIndex:(unsigned long long)index;
- (id)transitMarketSupportAsString:(int)string;
- (int)StringAsTransitMarketSupport:(id)support;
- (void)clearSupportedTransitFeatures;
- (void)addSupportedTransitFeature:(int)feature;
- (int)supportedTransitFeatureAtIndex:(unsigned long long)index;
- (void)setSupportedTransitFeatures:(int *)features count:(unsigned long long)count;
- (id)supportedTransitFeaturesAsString:(int)string;
- (int)StringAsSupportedTransitFeatures:(id)features;
- (void)clearSupportsMultipointRoutings;
- (void)addSupportsMultipointRouting:(int)routing;
- (int)supportsMultipointRoutingAtIndex:(unsigned long long)index;
- (void)setSupportsMultipointRoutings:(int *)routings count:(unsigned long long)count;
- (id)supportsMultipointRoutingsAsString:(int)string;
- (int)StringAsSupportsMultipointRoutings:(id)routings;
- (id)maxSupportedTransitFareVersionAsString:(int)string;
- (int)StringAsMaxSupportedTransitFareVersion:(id)version;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEOClientCapabilities_h */