//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutableTTSNeuralPhonemeSequence_h
#define FTMutableTTSNeuralPhonemeSequence_h
@import Foundation;

#include "FTTTSNeuralPhonemeSequence.h"

@class NSArray;

@interface FTMutableTTSNeuralPhonemeSequence : FTTTSNeuralPhonemeSequence

@property (copy, nonatomic) NSArray *phonemes;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FTMutableTTSNeuralPhonemeSequence_h */