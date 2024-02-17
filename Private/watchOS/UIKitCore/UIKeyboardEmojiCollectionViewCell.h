//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKeyboardEmojiCollectionViewCell_h
#define UIKeyboardEmojiCollectionViewCell_h
@import Foundation;

#include "UICollectionViewCell.h"
#include "UIKeyboardEmoji.h"
#include "UIKeyboardEmojiDraggableView.h"
#include "UILabel.h"
#include "UIView.h"

@interface UIKeyboardEmojiCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *unreleasedBanner;
@property (retain, nonatomic) UIView *navigationHighlightView;
@property (retain, nonatomic) UILabel *noResultsLabel;
@property (nonatomic) BOOL cellBeingTouched;
@property (copy, nonatomic) UIKeyboardEmoji *emoji;
@property (nonatomic) long long emojiFontSize;
@property (readonly, nonatomic) UIKeyboardEmojiDraggableView *emojiLabel;
@property (nonatomic) BOOL unreleasedHighlight;
@property (nonatomic) BOOL noResultsCell;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setSelected:(BOOL)selected;
- (id)debugDescription;
@end

#endif /* UIKeyboardEmojiCollectionViewCell_h */