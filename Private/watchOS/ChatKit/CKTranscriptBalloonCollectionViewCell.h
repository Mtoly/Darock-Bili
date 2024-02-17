//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKTranscriptBalloonCollectionViewCell_h
#define CKTranscriptBalloonCollectionViewCell_h
@import Foundation;

#include "CKTranscriptCollectionViewCell.h"
#include "CKBalloonView.h"

@interface CKTranscriptBalloonCollectionViewCell : CKTranscriptCollectionViewCell

@property (retain, nonatomic) CKBalloonView *balloonView;
@property (nonatomic) long long animationPauseReasons;

/* class methods */
+ (id)reuseIdentifier;

/* instance methods */
- (void)dealloc;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)description;
- (void)configureForChatItem:(id)item context:(id)context;
- (id)_balloonViewForChatItem:(id)item;
- (void)addFilter:(id)filter;
- (void)clearFilters;
@end

#endif /* CKTranscriptBalloonCollectionViewCell_h */