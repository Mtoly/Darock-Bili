//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.13.3.0.0
//
#ifndef SRUIFSpeechRecognitionHypothesis_h
#define SRUIFSpeechRecognitionHypothesis_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class AFUserUtterance, AceObject;

@interface SRUIFSpeechRecognitionHypothesis : NSObject<NSCopying>

@property (readonly, nonatomic) AFUserUtterance *userUtterance;
@property (readonly, nonatomic) BOOL final;
@property (readonly, nonatomic) AceObject *backingAceObject;

/* instance methods */
- (id)initWithUserUtterance:(id)utterance backingAceObject:(id)object isFinal:(BOOL)final;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isFinal;
@end

#endif /* SRUIFSpeechRecognitionHypothesis_h */