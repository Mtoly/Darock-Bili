//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutableKeyword_h
#define FTMutableKeyword_h
@import Foundation;

#include "FTKeyword.h"

@class NSString;

@interface FTMutableKeyword : FTKeyword

@property (copy, nonatomic) NSString *keyword_orthography;
@property (nonatomic) double posterior;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FTMutableKeyword_h */