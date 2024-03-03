//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKStampButtonChatItem_h
#define CKStampButtonChatItem_h
@import Foundation;

#include "CKChatItem.h"

@interface CKStampButtonChatItem : CKChatItem

@property (readonly, nonatomic) BOOL hasSelectableText;

/* instance methods */
- (unsigned long long)layoutType;
- (id)layoutItemSpacingWithEnvironment:(id)environment datasourceItemIndex:(long long)index allDatasourceItems:(id)items supplementryItems:(id)items;
- (id)init;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (char)transcriptOrientation;
- (Class)cellClass;
- (BOOL)displayDuringSend;
- (struct CGSize { double x0; double x1; })loadSizeThatFits:(struct CGSize { double x0; double x1; })fits textAlignmentInsets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)insets;
@end

#endif /* CKStampButtonChatItem_h */