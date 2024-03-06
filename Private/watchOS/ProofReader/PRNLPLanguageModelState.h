//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 619.2.0.0.0
//
#ifndef PRNLPLanguageModelState_h
#define PRNLPLanguageModelState_h
@import Foundation;

#include "PRNLPLanguageModel.h"

@class NLLanguageModelState, NSMutableDictionary;

@interface PRNLPLanguageModelState : NSObject {
  /* instance variables */
  NLLanguageModelState *_state;
  NSMutableDictionary *_cachedPredictionsDictionary;
}

@property (readonly, nonatomic) PRNLPLanguageModel *languageModel;

/* instance methods */
- (id)initWithLanguageModel:(id)model state:(id)state;
- (BOOL)getConditionalProbabilityForString:(id)string probability:(double *)probability;
- (id)conditionalProbabilityDictionaryForStrings:(id)strings;
- (void)enumeratePredictions:(unsigned long long)predictions maxTokensPerPrediction:(unsigned long long)prediction withBlock:(id /* block */)block;
- (void)dealloc;
@end

#endif /* PRNLPLanguageModelState_h */