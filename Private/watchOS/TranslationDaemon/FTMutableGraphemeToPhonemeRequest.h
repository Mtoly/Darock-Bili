//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutableGraphemeToPhonemeRequest_h
#define FTMutableGraphemeToPhonemeRequest_h
@import Foundation;

#include "FTGraphemeToPhonemeRequest.h"
#include "FTContextWithPronHints.h"

@class NSString;

@interface FTMutableGraphemeToPhonemeRequest : FTGraphemeToPhonemeRequest

@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) FTContextWithPronHints *context_with_pron_hints;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FTMutableGraphemeToPhonemeRequest_h */