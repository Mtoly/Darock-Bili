//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1205.1.1.2.0
//
#ifndef CUIKTimeIntervalTextProvider_h
#define CUIKTimeIntervalTextProvider_h
@import Foundation;

@interface CUIKTimeIntervalTextProvider : NSObject
/* class methods */
+ (id)timeIntervalAttributedTextWithStartDate:(id)date endDate:(id)date calendar:(id)calendar font:(struct __CTFont *)font;
+ (id)timeIntervalAttributedTextWithStartDate:(id)date endDate:(id)date calendar:(id)calendar font:(struct __CTFont *)font designatorRequiresWhitespace:(BOOL)whitespace smallCapsAllowed:(BOOL)allowed dropLeftRedundantDesignator:(BOOL)designator;
+ (id)timeIntervalAttributedTextWithStartDate:(id)date endDate:(id)date calendar:(id)calendar;
+ (id)timeIntervalAttributedTextWithStartDate:(id)date endDate:(id)date calendar:(id)calendar keepRedundantDesignator:(BOOL)designator;
+ (id)_timeIntervalAttributedTextWithStartDate:(id)date endDate:(id)date calendar:(id)calendar designatorRequiresWhitespace:(BOOL)whitespace smallCapsAllowed:(BOOL)allowed dropLeftRedundantDesignator:(BOOL)designator keepRedundantDesignator:(BOOL)designator;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfDesignatorInAnnotatedTime:(id)time;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfAnnontatedTime:(id)time matchingPattern:(id /* block */)pattern;
+ (id)_stringByRemovingDesignatorRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range fromString:(id)string;
@end

#endif /* CUIKTimeIntervalTextProvider_h */