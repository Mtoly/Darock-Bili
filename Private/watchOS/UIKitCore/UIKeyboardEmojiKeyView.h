//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKeyboardEmojiKeyView_h
#define UIKeyboardEmojiKeyView_h
@import Foundation;

#include "UIKBKeyView.h"
#include "UIKeyboardEmojiCategoryUpdate-Protocol.h"

@class NSString;
@protocol UIKeyboardEmojiKeyDisplayController<UIKeyboardEmojiCategoryUpdateDelegate;

@interface UIKeyboardEmojiKeyView : UIKBKeyView<UIKeyboardEmojiCategoryUpdate>

@property (weak, nonatomic) UIKeyboardEmojiKeyDisplayController<UIKeyboardEmojiCategoryUpdateDelegate> *emojiKeyManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)updateToCategory:(long long)category;
- (long long)updateToCategoryWithOffsetPercentage:(double)percentage;
@end

#endif /* UIKeyboardEmojiKeyView_h */