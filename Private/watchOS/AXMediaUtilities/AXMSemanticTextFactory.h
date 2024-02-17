//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef AXMSemanticTextFactory_h
#define AXMSemanticTextFactory_h
@import Foundation;

@class NLTagger, NSDataDetector, NSMutableDictionary, NSNumberFormatter;

@interface AXMSemanticTextFactory : NSObject

@property (retain, nonatomic) NLTagger *tagger;
@property (retain, nonatomic) NSMutableDictionary *cachedLexicons;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (retain, nonatomic) NSMutableDictionary *compiledPatterns;
@property (retain, nonatomic) NSDataDetector *dataDetector;

/* instance methods */
- (id)semanticTextForText:(id)text withLocale:(id)locale;
- (id)_preprocessedText:(id)text;
- (BOOL)_string:(id)_string containsOnlyCharactersFrom:(id)from;
- (void)_applyNaturalLanguageTokens:(id)tokens;
- (void)_applyDataDetectors:(id)detectors;
- (void)_applyCustomPatterns:(id)patterns;
- (void)_performSemanticAnalysis:(id)analysis;
- (BOOL)_lexiconExistsForLocale:(id)locale;
- (BOOL)_textExistsInLexicon:(id)lexicon withLocale:(id)locale;
- (struct _LXLexicon *)_lexiconForLocale:(id)locale;
@end

#endif /* AXMSemanticTextFactory_h */