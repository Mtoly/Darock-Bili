//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.7.1.0.0
//
#ifndef _EARRecognitionMetrics_h
#define _EARRecognitionMetrics_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSMutableArray, NSNumber;
@protocol {weak_ptr<quasar::SpeechRecognizer>="__ptr_"^{SpeechRecognizer}"__cntrl_"^{__shared_weak_count}};

@interface _EARRecognitionMetrics : NSObject<NSCopying> {
  /* instance variables */
  struct weak_ptr<quasar::SpeechRecognizer> { struct SpeechRecognizer *__ptr_; struct __shared_weak_count *__cntrl_; } _recognizer;
}

@property (copy, nonatomic) NSMutableArray *allItnRunIntervals;
@property (readonly, copy, nonatomic) NSArray *pauseDurations;
@property (readonly, nonatomic) NSNumber *itnDurationInNs;
@property (readonly, nonatomic) BOOL isEmojiPersonalizationUsed;
@property (readonly, nonatomic) BOOL isEmojiDisambiguationUsed;
@property (readonly, nonatomic) BOOL isEmojiExpectedButNotRecognized;
@property (readonly, copy, nonatomic) NSArray *recognizedEmojis;

/* instance methods */
- (id)initWithRecognizer:(struct shared_ptr<quasar::SpeechRecognizer> { struct SpeechRecognizer * x0; struct __shared_weak_count * x1; })recognizer;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)addPauseDurationMetric;
- (void)addEmojiRecognitionMetrics:(id)metrics recognizedEmojis:(id)emojis;
- (void)addItnRunIntervals:(id)intervals;
@end

#endif /* _EARRecognitionMetrics_h */