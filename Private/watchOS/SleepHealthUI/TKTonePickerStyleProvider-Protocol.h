//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef TKTonePickerStyleProvider_Protocol_h
#define TKTonePickerStyleProvider_Protocol_h
@import Foundation;

@protocol TKTonePickerStyleProvider <NSObject>

@property (readonly, nonatomic) BOOL tonePickerUsesOpaqueBackground;
@property (readonly, nonatomic) long long tonePickerTableViewSeparatorStyle;
@property (readonly, nonatomic) UIFont *tonePickerCellTextFont;
@property (readonly, nonatomic) UIColor *tonePickerCellTextColor;
@property (readonly, nonatomic) UIColor *tonePickerCellHighlightedTextColor;
@property (readonly, nonatomic) UIColor *tonePickerCellBackgroundColor;
@property (readonly, nonatomic) BOOL wantsCustomTonePickerHeaderView;
@property (readonly, nonatomic) UIFont *tonePickerHeaderTextFont;
@property (readonly, nonatomic) UIColor *tonePickerHeaderTextColor;
@property (readonly, nonatomic) UIColor *tonePickerHeaderTextShadowColor;
@property (readonly, nonatomic) struct UIOffset { double x0; double x1; } tonePickerHeaderTextShadowOffset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } tonePickerHeaderTextPaddingInsets;
@property (readonly, nonatomic) UIColor *tonePickerCustomTableSeparatorColor;
@property (readonly, nonatomic) long long tonePickerCustomTableSeparatorBackdropOverlayBlendMode;
@property (readonly, nonatomic) BOOL tonePickerHeaderTextShouldBeUppercase;

/* instance methods */
- (id)newBackgroundViewForSelectedTonePickerCell:(BOOL)cell;
- (id)newAccessoryDisclosureIndicatorViewForTonePickerCell;
@end

#endif /* TKTonePickerStyleProvider_Protocol_h */