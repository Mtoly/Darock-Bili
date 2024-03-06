//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef _SFPBCardSectionValue_h
#define _SFPBCardSectionValue_h
@import Foundation;

#include "PBCodable.h"
#include "NSSecureCoding-Protocol.h"
#include "_SFPBActivityIndicatorCardSection.h"
#include "_SFPBAppIconCardSection.h"
#include "_SFPBAppLinkCardSection.h"
#include "_SFPBArchiveViewCardSection.h"
#include "_SFPBAttributionFooterCardSection.h"
#include "_SFPBAudioPlaybackCardSection.h"
#include "_SFPBButtonCardSection.h"
#include "_SFPBButtonListCardSection.h"
#include "_SFPBCardSectionValue-Protocol.h"
#include "_SFPBCollectionCardSection.h"
#include "_SFPBColorBarCardSection.h"
#include "_SFPBCombinedCardSection.h"
#include "_SFPBCommandRowCardSection.h"
#include "_SFPBCompactRowCardSection.h"
#include "_SFPBDescriptionCardSection.h"
#include "_SFPBDetailedRowCardSection.h"
#include "_SFPBFindMyCardSection.h"
#include "_SFPBFlightCardSection.h"
#include "_SFPBGridCardSection.h"
#include "_SFPBHeroCardSection.h"
#include "_SFPBHeroTitleCardSection.h"
#include "_SFPBHorizontalButtonCardSection.h"
#include "_SFPBHorizontalScrollCardSection.h"
#include "_SFPBImagesCardSection.h"
#include "_SFPBInfoCardSection.h"
#include "_SFPBKeyValueDataCardSection.h"
#include "_SFPBLargeTitleDetailedRowCardSection.h"
#include "_SFPBLeadingTrailingCardSection.h"
#include "_SFPBLinkPresentationCardSection.h"
#include "_SFPBListenToCardSection.h"
#include "_SFPBMapCardSection.h"
#include "_SFPBMapPlaceCardSection.h"
#include "_SFPBMapsDetailedRowCardSection.h"
#include "_SFPBMediaInfoCardSection.h"
#include "_SFPBMediaPlayerCardSection.h"
#include "_SFPBMediaRemoteControlCardSection.h"
#include "_SFPBMessageCardSection.h"
#include "_SFPBMetaInfoCardSection.h"
#include "_SFPBMiniCardSection.h"
#include "_SFPBNewsCardSection.h"
#include "_SFPBNowPlayingCardSection.h"
#include "_SFPBPersonHeaderCardSection.h"
#include "_SFPBProductCardSection.h"
#include "_SFPBRFExpandableStandardCardSection.h"
#include "_SFPBRFFactItemButtonCardSection.h"
#include "_SFPBRFFactItemDetailedNumberCardSection.h"
#include "_SFPBRFFactItemHeroButtonCardSection.h"
#include "_SFPBRFFactItemHeroNumberCardSection.h"
#include "_SFPBRFFactItemImageRightCardSection.h"
#include "_SFPBRFFactItemShortHeroNumberCardSection.h"
#include "_SFPBRFFactItemShortNumberCardSection.h"
#include "_SFPBRFFactItemStandardCardSection.h"
#include "_SFPBRFLongItemStandardCardSection.h"
#include "_SFPBRFPrimaryHeaderMarqueeCardSection.h"
#include "_SFPBRFPrimaryHeaderRichCardSection.h"
#include "_SFPBRFPrimaryHeaderStandardCardSection.h"
#include "_SFPBRFReferenceFootnoteCardSection.h"
#include "_SFPBRFReferenceRichCardSection.h"
#include "_SFPBRFSimpleItemPlayerCardSection.h"
#include "_SFPBRFSimpleItemRichCardSection.h"
#include "_SFPBRFSimpleItemStandardCardSection.h"
#include "_SFPBRFSummaryItemAlignedTextCardSection.h"
#include "_SFPBRFSummaryItemDetailedTextCardSection.h"
#include "_SFPBRFSummaryItemPairCardSection.h"
#include "_SFPBRFSummaryItemPairNumberCardSection.h"
#include "_SFPBRFSummaryItemShortNumberCardSection.h"
#include "_SFPBRFSummaryItemStandardCardSection.h"
#include "_SFPBRFSummaryItemSwitchV2CardSection.h"
#include "_SFPBRFSummaryItemTextCardSection.h"
#include "_SFPBRFTableHeaderCardSection.h"
#include "_SFPBRFTableRowCardSection.h"
#include "_SFPBResponseWrapperCardSection.h"
#include "_SFPBRichTitleCardSection.h"
#include "_SFPBRowCardSection.h"
#include "_SFPBScoreboardCardSection.h"
#include "_SFPBSectionHeaderCardSection.h"
#include "_SFPBSelectableGridCardSection.h"
#include "_SFPBSocialMediaPostCardSection.h"
#include "_SFPBSplitCardSection.h"
#include "_SFPBStockChartCardSection.h"
#include "_SFPBStrokeAnimationCardSection.h"
#include "_SFPBSuggestionCardSection.h"
#include "_SFPBTableHeaderRowCardSection.h"
#include "_SFPBTableRowCardSection.h"
#include "_SFPBTextColumnsCardSection.h"
#include "_SFPBTitleCardSection.h"
#include "_SFPBTrackListCardSection.h"
#include "_SFPBVerticalLayoutCardSection.h"
#include "_SFPBWatchListCardSection.h"
#include "_SFPBWatchNowCardSection.h"
#include "_SFPBWebCardSection.h"
#include "_SFPBWorldMapCardSection.h"

@class NSData, NSString;

@interface _SFPBCardSectionValue : PBCodable<_SFPBCardSectionValue, NSSecureCoding>

@property (retain, nonatomic) _SFPBAppLinkCardSection *appLinkCardSection;
@property (retain, nonatomic) _SFPBDescriptionCardSection *descriptionCardSection;
@property (retain, nonatomic) _SFPBKeyValueDataCardSection *keyValueDataCardSection;
@property (retain, nonatomic) _SFPBMapCardSection *mapCardSection;
@property (retain, nonatomic) _SFPBMediaInfoCardSection *mediaInfoCardSection;
@property (retain, nonatomic) _SFPBMediaPlayerCardSection *mediaPlayerCardSection;
@property (retain, nonatomic) _SFPBNowPlayingCardSection *nowPlayingCardSection;
@property (retain, nonatomic) _SFPBRichTitleCardSection *richTitleCardSection;
@property (retain, nonatomic) _SFPBRowCardSection *rowCardSection;
@property (retain, nonatomic) _SFPBScoreboardCardSection *scoreboardCardSection;
@property (retain, nonatomic) _SFPBSocialMediaPostCardSection *socialMediaPostCardSection;
@property (retain, nonatomic) _SFPBStockChartCardSection *stockChartCardSection;
@property (retain, nonatomic) _SFPBTableHeaderRowCardSection *tableHeaderRowCardSection;
@property (retain, nonatomic) _SFPBTableRowCardSection *tableRowCardSection;
@property (retain, nonatomic) _SFPBTextColumnsCardSection *textColumnsCardSection;
@property (retain, nonatomic) _SFPBTitleCardSection *titleCardSection;
@property (retain, nonatomic) _SFPBTrackListCardSection *trackListCardSection;
@property (retain, nonatomic) _SFPBAudioPlaybackCardSection *audioPlaybackCardSection;
@property (retain, nonatomic) _SFPBFlightCardSection *flightCardSection;
@property (retain, nonatomic) _SFPBActivityIndicatorCardSection *activityIndicatorCardSection;
@property (retain, nonatomic) _SFPBWebCardSection *webCardSection;
@property (retain, nonatomic) _SFPBMessageCardSection *messageCardSection;
@property (retain, nonatomic) _SFPBDetailedRowCardSection *detailedRowCardSection;
@property (retain, nonatomic) _SFPBImagesCardSection *imagesCardSection;
@property (retain, nonatomic) _SFPBSuggestionCardSection *suggestionCardSection;
@property (retain, nonatomic) _SFPBSelectableGridCardSection *selectableGridCardSection;
@property (retain, nonatomic) _SFPBSectionHeaderCardSection *sectionHeaderCardSection;
@property (retain, nonatomic) _SFPBMetaInfoCardSection *metaInfoCardSection;
@property (retain, nonatomic) _SFPBWatchListCardSection *watchListCardSection;
@property (retain, nonatomic) _SFPBMapsDetailedRowCardSection *mapsDetailedRowCardSection;
@property (retain, nonatomic) _SFPBButtonCardSection *buttonCardSection;
@property (retain, nonatomic) _SFPBHorizontalButtonCardSection *horizontalButtonCardSection;
@property (retain, nonatomic) _SFPBVerticalLayoutCardSection *verticalLayoutCardSection;
@property (retain, nonatomic) _SFPBProductCardSection *productCardSection;
@property (retain, nonatomic) _SFPBHorizontalScrollCardSection *horizontalScrollCardSection;
@property (retain, nonatomic) _SFPBMediaRemoteControlCardSection *mediaRemoteControlCardSection;
@property (retain, nonatomic) _SFPBMapPlaceCardSection *mapPlaceCardSection;
@property (retain, nonatomic) _SFPBCompactRowCardSection *compactRowCardSection;
@property (retain, nonatomic) _SFPBWorldMapCardSection *worldMapCardSection;
@property (retain, nonatomic) _SFPBAttributionFooterCardSection *attributionFooterCardSection;
@property (retain, nonatomic) _SFPBGridCardSection *gridCardSection;
@property (retain, nonatomic) _SFPBPersonHeaderCardSection *personHeaderCardSection;
@property (retain, nonatomic) _SFPBColorBarCardSection *colorBarCardSection;
@property (retain, nonatomic) _SFPBSplitCardSection *splitCardSection;
@property (retain, nonatomic) _SFPBLinkPresentationCardSection *linkPresentationCardSection;
@property (retain, nonatomic) _SFPBFindMyCardSection *findMyCardSection;
@property (retain, nonatomic) _SFPBHeroCardSection *heroCardSection;
@property (retain, nonatomic) _SFPBNewsCardSection *newsCardSection;
@property (retain, nonatomic) _SFPBMiniCardSection *miniCardSection;
@property (retain, nonatomic) _SFPBInfoCardSection *infoCardSection;
@property (retain, nonatomic) _SFPBCollectionCardSection *collectionCardSection;
@property (retain, nonatomic) _SFPBCombinedCardSection *combinedCardSection;
@property (retain, nonatomic) _SFPBResponseWrapperCardSection *responseWrapperCardSection;
@property (retain, nonatomic) _SFPBListenToCardSection *listenToCardSection;
@property (retain, nonatomic) _SFPBWatchNowCardSection *watchNowCardSection;
@property (retain, nonatomic) _SFPBStrokeAnimationCardSection *strokeAnimationCardSection;
@property (retain, nonatomic) _SFPBButtonListCardSection *buttonListCardSection;
@property (retain, nonatomic) _SFPBCommandRowCardSection *commandRowCardSection;
@property (retain, nonatomic) _SFPBLeadingTrailingCardSection *leadingTrailingCardSection;
@property (retain, nonatomic) _SFPBHeroTitleCardSection *heroTitleCardSection;
@property (retain, nonatomic) _SFPBArchiveViewCardSection *archiveViewCardSection;
@property (retain, nonatomic) _SFPBAppIconCardSection *appIconCardSection;
@property (retain, nonatomic) _SFPBLargeTitleDetailedRowCardSection *largeTitleDetailedRowCardSection;
@property (retain, nonatomic) _SFPBRFSummaryItemShortNumberCardSection *rfSummaryItemShortNumberCardSection;
@property (retain, nonatomic) _SFPBRFSummaryItemTextCardSection *rfSummaryItemTextCardSection;
@property (retain, nonatomic) _SFPBRFSummaryItemStandardCardSection *rfSummaryItemStandardCardSection;
@property (retain, nonatomic) _SFPBRFFactItemShortNumberCardSection *rfFactItemShortNumberCardSection;
@property (retain, nonatomic) _SFPBRFFactItemStandardCardSection *rfFactItemStandardCardSection;
@property (retain, nonatomic) _SFPBRFLongItemStandardCardSection *rfLongItemStandardCardSection;
@property (retain, nonatomic) _SFPBRFPrimaryHeaderRichCardSection *rfPrimaryHeaderRichCardSection;
@property (retain, nonatomic) _SFPBRFPrimaryHeaderStandardCardSection *rfPrimaryHeaderStandardCardSection;
@property (retain, nonatomic) _SFPBRFReferenceFootnoteCardSection *rfReferenceFootnoteCardSection;
@property (retain, nonatomic) _SFPBRFReferenceRichCardSection *rfReferenceRichCardSection;
@property (retain, nonatomic) _SFPBRFSimpleItemRichCardSection *rfSimpleItemRichCardSection;
@property (retain, nonatomic) _SFPBRFSimpleItemStandardCardSection *rfSimpleItemStandardCardSection;
@property (retain, nonatomic) _SFPBRFSummaryItemAlignedTextCardSection *rfSummaryItemAlignedTextCardSection;
@property (retain, nonatomic) _SFPBRFExpandableStandardCardSection *rfExpandableStandardCardSection;
@property (retain, nonatomic) _SFPBRFFactItemButtonCardSection *rfFactItemButtonCardSection;
@property (retain, nonatomic) _SFPBRFFactItemHeroNumberCardSection *rfFactItemHeroNumberCardSection;
@property (retain, nonatomic) _SFPBRFPrimaryHeaderMarqueeCardSection *rfPrimaryHeaderMarqueeCardSection;
@property (retain, nonatomic) _SFPBRFSummaryItemDetailedTextCardSection *rfSummaryItemDetailedTextCardSection;
@property (retain, nonatomic) _SFPBRFSimpleItemPlayerCardSection *rfSimpleItemPlayerCardSection;
@property (retain, nonatomic) _SFPBRFSummaryItemPairCardSection *rfSummaryItemPairCardSection;
@property (retain, nonatomic) _SFPBRFSummaryItemPairNumberCardSection *rfSummaryItemPairNumberCardSection;
@property (retain, nonatomic) _SFPBRFFactItemShortHeroNumberCardSection *rfFactItemShortHeroNumberCardSection;
@property (retain, nonatomic) _SFPBRFFactItemDetailedNumberCardSection *rfFactItemDetailedNumberCardSection;
@property (retain, nonatomic) _SFPBRFFactItemHeroButtonCardSection *rfFactItemHeroButtonCardSection;
@property (retain, nonatomic) _SFPBRFFactItemImageRightCardSection *rfFactItemImageRightCardSection;
@property (retain, nonatomic) _SFPBRFSummaryItemSwitchV2CardSection *rfSummaryItemSwitchV2CardSection;
@property (retain, nonatomic) _SFPBRFTableHeaderCardSection *rfTableHeaderCardSection;
@property (retain, nonatomic) _SFPBRFTableRowCardSection *rfTableRowCardSection;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFacade:(id)facade;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* _SFPBCardSectionValue_h */