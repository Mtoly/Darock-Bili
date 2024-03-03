//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REUISiriShortcutContentViewModel_Protocol_h
#define REUISiriShortcutContentViewModel_Protocol_h
@import Foundation;

@protocol REUISiriShortcutContentViewModel <NSObject>

@property (readonly, nonatomic) NSString *re_shortcut_titleString;
@property (readonly, nonatomic) BOOL re_shortcut_showConfirmButton;
@property (readonly, nonatomic) BOOL re_shortcut_showDismissButton;
@property (readonly, nonatomic) UIImage *re_shortcut_topImage;
@property (readonly, nonatomic) NSString *re_shortcut_subtitleString;
@property (readonly, nonatomic) UIImage *re_shortcut_contentImage;
@property (readonly, nonatomic) NSString *re_shortcut_confirmButtonString;
@property (readonly, nonatomic) UIColor *re_shortcut_confirmButtonColor;

@end

#endif /* REUISiriShortcutContentViewModel_Protocol_h */