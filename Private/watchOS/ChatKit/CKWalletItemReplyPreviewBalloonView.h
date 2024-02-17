//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKWalletItemReplyPreviewBalloonView_h
#define CKWalletItemReplyPreviewBalloonView_h
@import Foundation;

#include "CKColoredBalloonView.h"
#include "CKMediaObject.h"

@class LPLinkView;

@interface CKWalletItemReplyPreviewBalloonView : CKColoredBalloonView

@property (retain, nonatomic) LPLinkView *linkView;
@property (retain, nonatomic) CKMediaObject *mediaObject;

/* instance methods */
- (void)configureForMessagePart:(id)part;
- (id)description;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)insets;
- (void)prepareForDisplay;
@end

#endif /* CKWalletItemReplyPreviewBalloonView_h */