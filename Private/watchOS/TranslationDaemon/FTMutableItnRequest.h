//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutableItnRequest_h
#define FTMutableItnRequest_h
@import Foundation;

#include "FTItnRequest.h"

@class NSArray, NSString;

@interface FTMutableItnRequest : FTItnRequest

@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSArray *words_list;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FTMutableItnRequest_h */