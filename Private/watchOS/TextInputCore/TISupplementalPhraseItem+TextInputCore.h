//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TISupplementalPhraseItem_TextInputCore_h
#define TISupplementalPhraseItem_TextInputCore_h
@import Foundation;

@interface TISupplementalPhraseItem (TextInputCore)
/* instance methods */
- (void)core_appendEntitiesToArray:(id)array;
- (BOOL)core_isEqualToMecabraCandidate:(id)candidate;
- (id)core_nonPhoneticRangesInString:(id)string options:(unsigned long long)options locale:(id)locale;
- (id)core_nameReadingPairsWithGenerationMode:(unsigned char)mode mecabraEnvironment:(id)environment;
@end

#endif /* TISupplementalPhraseItem_TextInputCore_h */