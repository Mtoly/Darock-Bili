//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.25.1.0.0
//
#ifndef _SUICAtomRanged_h
#define _SUICAtomRanged_h
@import Foundation;

@class NSString;

@interface _SUICAtomRanged : NSObject

@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } editRange;
@property (retain, nonatomic) NSString *replacementText;

/* class methods */
+ (id)atomWithEditRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;

/* instance methods */
- (id)initWithEditRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToEditScriptAtomRanged:(id)ranged;
@end

#endif /* _SUICAtomRanged_h */