//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKTranscriptSpeakerBalloonCell_h
#define CKTranscriptSpeakerBalloonCell_h
@import Foundation;

#include "CKTranscriptBalloonCell.h"
#include "CKSpeakerButton.h"

@interface CKTranscriptSpeakerBalloonCell : CKTranscriptBalloonCell

@property (retain, nonatomic) CKSpeakerButton *speakerButton;
@property (nonatomic) BOOL shouldShowText;
@property (nonatomic) BOOL speakerEnabledBeforeManualHide;
@property (nonatomic) BOOL speakerIsManuallyHidden;
@property (nonatomic) BOOL speakerEnabled;
@property (nonatomic) BOOL speakerHidden;
@property (nonatomic) BOOL adjustSpeakerForAcknowledgment;

/* instance methods */
- (void)setOrientation:(char)orientation;
- (void)layoutSubviewsForAlignmentContents;
- (BOOL)isSpeakerHidden;
- (void)setDrawerPercentRevealed:(double)revealed;
- (BOOL)allowsSwipeToReply;
- (BOOL)isSpeakerEnabled;
@end

#endif /* CKTranscriptSpeakerBalloonCell_h */