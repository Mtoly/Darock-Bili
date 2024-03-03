//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKAudioReplyPreviewBalloonView_h
#define CKAudioReplyPreviewBalloonView_h
@import Foundation;

#include "CKColoredBalloonView.h"
#include "CKWaveformProgressView.h"

@interface CKAudioReplyPreviewBalloonView : CKColoredBalloonView

@property (retain, nonatomic) CKWaveformProgressView *waveformProgressView;
@property (nonatomic) double duration;
@property (nonatomic) long long waveformContentMode;

/* instance methods */
- (void)configureForMessagePart:(id)part;
- (void)configureForComposition:(id)composition;
- (void)configureForMediaObject:(id)object previewWidth:(double)width orientation:(char)orientation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)insets;
- (void)prepareForDisplay;
- (void)setWaveform:(id)waveform;
@end

#endif /* CKAudioReplyPreviewBalloonView_h */