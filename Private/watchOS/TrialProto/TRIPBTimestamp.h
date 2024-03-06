//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIPBTimestamp_h
#define TRIPBTimestamp_h
@import Foundation;

#include "TRIPBMessage.h"

@class NSDate;

@interface TRIPBTimestamp : TRIPBMessage

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) double timeIntervalSince1970;
@property (@dynamic, nonatomic) long long seconds;
@property (@dynamic, nonatomic) int nanos;

/* class methods */
+ (id)descriptor;

/* instance methods */
- (id)initWithDate:(id)date;
- (id)initWithTimeIntervalSince1970:(double)since1970;
@end

#endif /* TRIPBTimestamp_h */