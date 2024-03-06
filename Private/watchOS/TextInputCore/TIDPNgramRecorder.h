//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIDPNgramRecorder_h
#define TIDPNgramRecorder_h
@import Foundation;

#include "TIDPNgramRecorderCascading.h"

@interface TIDPNgramRecorder : TIDPNgramRecorderCascading

@property (nonatomic) BOOL shouldDonateNgramSampleRandomly;

/* class methods */
+ (void)enumerateNgramsFromSession:(id)session n:(unsigned long long)n usingBlock:(id /* block */)block;

/* instance methods */
- (id)initWithTypingSession:(id)session aligned:(id)aligned n:(unsigned long long)n shouldDonateNgramSampleRandomly:(BOOL)randomly;
- (id)recordingKey;
- (id)delegate;
- (id)records;
- (id)randomRecords;
- (id)randomRecordsLimitedByCount:(unsigned long long)count;
- (BOOL)report;
- (id)_normalizedWordEntryStringForWordEntry:(id)entry;
@end

#endif /* TIDPNgramRecorder_h */