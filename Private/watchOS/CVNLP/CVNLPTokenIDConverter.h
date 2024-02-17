//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 105.150.0.0.0
//
#ifndef CVNLPTokenIDConverter_h
#define CVNLPTokenIDConverter_h
@import Foundation;

@protocol {unique_ptr<cvnlp::AbstractVocabulary, std::default_delete<cvnlp::AbstractVocabulary>>="__ptr_"{__compressed_pair<cvnlp::AbstractVocabulary *, std::default_delete<cvnlp::AbstractVocabulary>>="__value_"^{AbstractVocabulary}}};

@interface CVNLPTokenIDConverter : NSObject {
  /* instance variables */
  struct unique_ptr<cvnlp::AbstractVocabulary, std::default_delete<cvnlp::AbstractVocabulary>> { struct __compressed_pair<cvnlp::AbstractVocabulary *, std::default_delete<cvnlp::AbstractVocabulary>> { struct AbstractVocabulary *__value_; } __ptr_; } _vocabTokenizer;
}

@property (readonly) unsigned int bosTokenID;
@property (readonly) unsigned int eosTokenID;
@property (readonly) unsigned int unkTokenID;

/* instance methods */
- (id)initWithResource:(id)resource andTokenType:(int)type;
- (void)enumerateTokenIDsForText:(id)text withBlock:(id /* block */)block;
@end

#endif /* CVNLPTokenIDConverter_h */