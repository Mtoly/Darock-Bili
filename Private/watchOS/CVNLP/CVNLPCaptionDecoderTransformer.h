//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 105.150.0.0.0
//
#ifndef CVNLPCaptionDecoderTransformer_h
#define CVNLPCaptionDecoderTransformer_h
@import Foundation;

#include "CVNLPCaptionDecoder.h"

@class NSArray, NSDictionary;

@interface CVNLPCaptionDecoderTransformer : CVNLPCaptionDecoder

@property (nonatomic) unsigned long long startID;
@property (nonatomic) unsigned long long endID;
@property (nonatomic) unsigned long long decoderBatchSize;
@property (nonatomic) unsigned long long maxCaptionLen;
@property (nonatomic) unsigned long long vocabSize;
@property (nonatomic) unsigned long long outputVocabSize;
@property (retain, nonatomic) NSDictionary *vocab;
@property (retain, nonatomic) NSArray *decoderBlocks;
@property (nonatomic) unsigned long long beamSize;
@property (nonatomic) struct CVNLPBeamSearch * beamSearch;
@property (nonatomic) struct CVNLPBeamSearch * filterBeamSearch;

/* instance methods */
- (id)initWithOptions:(id)options runTimeParams:(id)params;
- (void)_loadVocabFile:(id)file;
- (void)_loadNetwork:(id)network options:(id)options runTimeParams:(id)params;
- (void)_createBeamSearch:(id)search runTimeParams:(id)params;
- (void)dealloc;
- (id)computeCaptionForImageWithInputs:(id)inputs genderOption:(int)option;
- (id)computeCaptionForImageWithInputsImpl:(id)impl genderOption:(int)option;
- (id)performanceResults;
@end

#endif /* CVNLPCaptionDecoderTransformer_h */