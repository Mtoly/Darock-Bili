//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NSMutableAttributedString_NanoPassKitUI_h
#define NSMutableAttributedString_NanoPassKitUI_h
@import Foundation;

@interface NSMutableAttributedString (NanoPassKitUI)
/* instance methods */
- (void)npkApplyLinkAttributesForURLString:(id)urlstring toSubstring:(id)substring;
- (void)npkApplyLinkAttributesForURLString:(id)urlstring atRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)npkResizeImageAttachmentsToFontPointSize:(double)size;
@end

#endif /* NSMutableAttributedString_NanoPassKitUI_h */