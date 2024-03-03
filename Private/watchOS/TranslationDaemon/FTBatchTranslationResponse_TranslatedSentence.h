//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTBatchTranslationResponse_TranslatedSentence_h
#define FTBatchTranslationResponse_TranslatedSentence_h
@import Foundation;

#include "FLTBFBufferAccessor-Protocol.h"
#include "FTSpan.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSData, NSMutableDictionary, NSString;

@interface FTBatchTranslationResponse_TranslatedSentence : NSObject<FLTBFBufferAccessor, NSCopying> {
  /* instance variables */
  NSMutableDictionary *_storage;
  NSData *_data;
  const struct TranslatedSentence { unsigned char x0[1] } * _root;
}

@property (readonly, nonatomic) FTSpan *source_span;
@property (readonly, nonatomic) NSString *engine_input;
@property (readonly, nonatomic) FTSpan *target_span;
@property (readonly, nonatomic) NSArray *n_best_choices;
@property (readonly, nonatomic) NSArray *alternative_descriptions;

/* instance methods */
- (id)initWithFlatbuffData:(id)data;
- (id)initAndVerifyWithFlatbuffData:(id)data;
- (id)initWithFlatbuffData:(id)data root:(const struct TranslatedSentence { unsigned char x0[1] } *)root;
- (id)initWithFlatbuffData:(id)data root:(const struct TranslatedSentence { unsigned char x0[1] } *)root verify:(BOOL)verify;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)n_best_choices_objectAtIndex:(unsigned long long)index;
- (unsigned long long)n_best_choices_count;
- (void)n_best_choices_enumerateObjectsUsingBlock:(id /* block */)block;
- (id)alternative_descriptions_objectAtIndex:(unsigned long long)index;
- (unsigned long long)alternative_descriptions_count;
- (void)alternative_descriptions_enumerateObjectsUsingBlock:(id /* block */)block;
- (struct Offset<siri::speech::schema_fb::BatchTranslationResponse_::TranslatedSentence> { unsigned int x0; })addObjectToBuffer:(void *)buffer;
- (id)flatbuffData;
@end

#endif /* FTBatchTranslationResponse_TranslatedSentence_h */