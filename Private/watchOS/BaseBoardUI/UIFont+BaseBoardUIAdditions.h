//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef UIFont_BaseBoardUIAdditions_h
#define UIFont_BaseBoardUIAdditions_h
@import Foundation;

@interface UIFont (BaseBoardUIAdditions)
/* class methods */
+ (id)bsui_preferredFontForTextStyle:(id)style hiFontStyle:(long long)style;
+ (id)bsui_defaultFontForTextStyle:(id)style hiFontStyle:(long long)style;
+ (id)bsui_preferredFontForTextStyle:(id)style hiFontStyle:(long long)style contentSizeCategory:(id)category;
@end

#endif /* UIFont_BaseBoardUIAdditions_h */