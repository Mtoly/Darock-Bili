//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPDAutocompleteParametersAllEntriesWithBrowse_h
#define GEOPDAutocompleteParametersAllEntriesWithBrowse_h
@import Foundation;

#include "PBCodable.h"
#include "GEOPDAutocompleteEntry.h"
#include "GEOPDAutocompleteOriginationInfo.h"
#include "GEOPDRetainedSearchMetadata.h"
#include "GEOPDSSearchEvChargingParameters.h"
#include "GEOPDVenueIdentifier.h"
#include "GEOPDViewportInfo.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString, PBDataReader, PBUnknownFields;

@interface GEOPDAutocompleteParametersAllEntriesWithBrowse : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_maxQueryBuilderSuggestions; unsigned int x :1 has_maxResults; unsigned int x :1 has_placeSummaryRevision; unsigned int x :1 has_highlightDiff; unsigned int x :1 has_interleaveCategorySuggestions; unsigned int x :1 has_supportClientRankingCompositeFeatures; unsigned int x :1 has_supportClientRankingFeatureMetadata; unsigned int x :1 has_supportDirectionIntentSuggestions; unsigned int x :1 has_supportRapAffordance; unsigned int x :1 has_supportSectionHeader; unsigned int x :1 has_supportStructuredRapAffordance; unsigned int x :1 has_supportUnresolvedDirectionIntent; unsigned int x :1 read_unknownFields; unsigned int x :1 read_knownRefinementTypes; unsigned int x :1 read_supportedAutocompleteResultCellTypes; unsigned int x :1 read_supportedHighlightTypes; unsigned int x :1 read_supportedListTypes; unsigned int x :1 read_supportedPlaceSummaryFormatTypes; unsigned int x :1 read_autocompleteOriginationInfo; unsigned int x :1 read_categorySuggestionEntryMetadata; unsigned int x :1 read_categorySuggestionEntry; unsigned int x :1 read_evChargingParameters; unsigned int x :1 read_querySuggestionEntry; unsigned int x :1 read_query; unsigned int x :1 read_retainedSearch; unsigned int x :1 read_venueIdentifier; unsigned int x :1 read_viewportInfo; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) BOOL hasQuery;
@property (retain, nonatomic) NSString *query;
@property (readonly, nonatomic) BOOL hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property (nonatomic) BOOL hasMaxResults;
@property (nonatomic) int maxResults;
@property (nonatomic) BOOL hasHighlightDiff;
@property (nonatomic) BOOL highlightDiff;
@property (readonly, nonatomic) BOOL hasCategorySuggestionEntryMetadata;
@property (retain, nonatomic) NSData *categorySuggestionEntryMetadata;
@property (readonly, nonatomic) BOOL hasCategorySuggestionEntry;
@property (retain, nonatomic) GEOPDAutocompleteEntry *categorySuggestionEntry;
@property (nonatomic) BOOL hasInterleaveCategorySuggestions;
@property (nonatomic) BOOL interleaveCategorySuggestions;
@property (readonly, nonatomic) BOOL hasVenueIdentifier;
@property (retain, nonatomic) GEOPDVenueIdentifier *venueIdentifier;
@property (nonatomic) BOOL hasSupportDirectionIntentSuggestions;
@property (nonatomic) BOOL supportDirectionIntentSuggestions;
@property (readonly, nonatomic) BOOL hasRetainedSearch;
@property (retain, nonatomic) GEOPDRetainedSearchMetadata *retainedSearch;
@property (nonatomic) BOOL hasSupportUnresolvedDirectionIntent;
@property (nonatomic) BOOL supportUnresolvedDirectionIntent;
@property (readonly, nonatomic) unsigned long long supportedListTypesCount;
@property (readonly, nonatomic) int * supportedListTypes;
@property (readonly, nonatomic) BOOL hasQuerySuggestionEntry;
@property (retain, nonatomic) GEOPDAutocompleteEntry *querySuggestionEntry;
@property (nonatomic) BOOL hasSupportClientRankingFeatureMetadata;
@property (nonatomic) BOOL supportClientRankingFeatureMetadata;
@property (nonatomic) BOOL hasMaxQueryBuilderSuggestions;
@property (nonatomic) int maxQueryBuilderSuggestions;
@property (nonatomic) BOOL hasSupportSectionHeader;
@property (nonatomic) BOOL supportSectionHeader;
@property (readonly, nonatomic) unsigned long long supportedAutocompleteResultCellTypesCount;
@property (readonly, nonatomic) int * supportedAutocompleteResultCellTypes;
@property (nonatomic) BOOL hasSupportRapAffordance;
@property (nonatomic) BOOL supportRapAffordance;
@property (readonly, nonatomic) unsigned long long knownRefinementTypesCount;
@property (readonly, nonatomic) int * knownRefinementTypes;
@property (nonatomic) BOOL hasPlaceSummaryRevision;
@property (nonatomic) int placeSummaryRevision;
@property (readonly, nonatomic) unsigned long long supportedPlaceSummaryFormatTypesCount;
@property (readonly, nonatomic) int * supportedPlaceSummaryFormatTypes;
@property (readonly, nonatomic) BOOL hasEvChargingParameters;
@property (retain, nonatomic) GEOPDSSearchEvChargingParameters *evChargingParameters;
@property (readonly, nonatomic) unsigned long long supportedHighlightTypesCount;
@property (readonly, nonatomic) int * supportedHighlightTypes;
@property (readonly, nonatomic) BOOL hasAutocompleteOriginationInfo;
@property (retain, nonatomic) GEOPDAutocompleteOriginationInfo *autocompleteOriginationInfo;
@property (nonatomic) BOOL hasSupportClientRankingCompositeFeatures;
@property (nonatomic) BOOL supportClientRankingCompositeFeatures;
@property (nonatomic) BOOL hasSupportStructuredRapAffordance;
@property (nonatomic) BOOL supportStructuredRapAffordance;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (void)dealloc;
- (void)clearSupportedListTypes;
- (void)addSupportedListType:(int)type;
- (int)supportedListTypeAtIndex:(unsigned long long)index;
- (void)setSupportedListTypes:(int *)types count:(unsigned long long)count;
- (id)supportedListTypesAsString:(int)string;
- (int)StringAsSupportedListTypes:(id)types;
- (void)clearSupportedAutocompleteResultCellTypes;
- (void)addSupportedAutocompleteResultCellType:(int)type;
- (int)supportedAutocompleteResultCellTypeAtIndex:(unsigned long long)index;
- (void)setSupportedAutocompleteResultCellTypes:(int *)types count:(unsigned long long)count;
- (id)supportedAutocompleteResultCellTypesAsString:(int)string;
- (int)StringAsSupportedAutocompleteResultCellTypes:(id)types;
- (void)clearKnownRefinementTypes;
- (void)addKnownRefinementType:(int)type;
- (int)knownRefinementTypeAtIndex:(unsigned long long)index;
- (void)setKnownRefinementTypes:(int *)types count:(unsigned long long)count;
- (id)knownRefinementTypesAsString:(int)string;
- (int)StringAsKnownRefinementTypes:(id)types;
- (id)placeSummaryRevisionAsString:(int)string;
- (int)StringAsPlaceSummaryRevision:(id)revision;
- (void)clearSupportedPlaceSummaryFormatTypes;
- (void)addSupportedPlaceSummaryFormatType:(int)type;
- (int)supportedPlaceSummaryFormatTypeAtIndex:(unsigned long long)index;
- (void)setSupportedPlaceSummaryFormatTypes:(int *)types count:(unsigned long long)count;
- (id)supportedPlaceSummaryFormatTypesAsString:(int)string;
- (int)StringAsSupportedPlaceSummaryFormatTypes:(id)types;
- (void)clearSupportedHighlightTypes;
- (void)addSupportedHighlightType:(int)type;
- (int)supportedHighlightTypeAtIndex:(unsigned long long)index;
- (void)setSupportedHighlightTypes:(int *)types count:(unsigned long long)count;
- (id)supportedHighlightTypesAsString:(int)string;
- (int)StringAsSupportedHighlightTypes:(id)types;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)clearSensitiveFields:(unsigned long long)fields;
- (BOOL)hasGreenTeaWithValue:(BOOL)value;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEOPDAutocompleteParametersAllEntriesWithBrowse_h */