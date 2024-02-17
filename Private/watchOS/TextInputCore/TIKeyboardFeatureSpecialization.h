//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIKeyboardFeatureSpecialization_h
#define TIKeyboardFeatureSpecialization_h
@import Foundation;

#include "TIInputMode.h"

@class NSMutableDictionary, NSString;

@interface TIKeyboardFeatureSpecialization : NSObject {
  /* instance variables */
  NSString *m_softwareLayout;
  struct USet * m_precomposedCharacterSet;
  struct USet * m_acceptableCharacterSet;
  NSMutableDictionary *m_compositionMaps;
  NSMutableDictionary *m_reverseCompositionMaps;
}

@property (readonly, nonatomic) TIInputMode *inputMode;
@property (nonatomic) long long currentUserInterfaceIdiom;
@property (nonatomic) BOOL useRelaxedOVSPolicy;
@property (nonatomic) BOOL skipCandidateQualityFilter;

/* class methods */
+ (id)findPrefixMatchesFor:(id)for fromIndex:(unsigned long long)index usingCompositionMap:(id)map matchesInputAsPrefix:(BOOL)prefix;
+ (struct USet *)createAcceptableCharacterSetForKeyboardLocale:(id)locale;
+ (id)createSpecializationForInputMode:(id)mode;

/* instance methods */
- (void *)createInputManager;
- (void)specializeInputManager:(void *)manager forLayoutState:(id)state;
- (BOOL)doesComposeText;
- (id)compositionMapForLayout:(id)layout reverse:(BOOL)reverse;
- (id)getComposedStringFor:(id)for usingMap:(id)map;
- (id)getComposedStringFor:(id)for usingMap:(id)map byConvertingEagerly:(BOOL)eagerly;
- (id)findPrefixMatchesFor:(id)for fromIndex:(unsigned long long)index usingCompositionMap:(id)map matchesInputAsPrefix:(BOOL)prefix;
- (BOOL)shouldClearInput:(id)input;
- (id)externalStringToInternal:(id)internal;
- (id)externalStringToInternal:(id)internal byConvertingEagerly:(BOOL)eagerly;
- (id)internalStringToExternal:(id)external;
- (id)nonstopPunctuationCharacters;
- (id)sentencePrefixingCharacters;
- (id)sentenceDelimitingCharacters;
- (id)sentenceTrailingCharacters;
- (id)wordMedialPunctuationCharacters;
- (id)wordCharacters;
- (id)supplementalLexiconWordExtraCharacters;
- (id)terminatorsDeletingAutospace;
- (id)spaceDeletingCharacters;
- (unsigned long long)maxPriorWordTokensAfterTrimming;
- (BOOL)acceptsCharacter:(unsigned int)character;
- (struct USet *)createAcceptableCharacterSet;
- (BOOL)dictionaryUsesExternalEncoding;
- (BOOL)canHandleKeyHitTest;
- (const struct USet *)precomposedCharacterSet;
- (BOOL)shouldConvertCandidateToExternal;
- (BOOL)canConvertExternalToExternal;
- (BOOL)allowsAutocorrectionOfValidWords;
- (id)dictionaryInputMode;
- (BOOL)shouldConvertAutocorrectionCandidatesToFullWidth;
- (id)initWithInputMode:(id)mode;
- (void)dealloc;
- (void)reloadPrecomposedCharacterSetWithIdiom:(long long)idiom;
- (id)keyboardBehaviors;
- (BOOL)shouldExtendPriorWord;
- (BOOL)supportsReversionUI;
- (BOOL)supportsLearning;
- (BOOL)shouldAddModifierSymbolsToWordCharacters;
- (BOOL)shouldLearnLowercaseAtBeginningOfSentence;
- (id)wordSeparator;
- (id)allAccentKeyStrings;
- (id)layoutTags;
- (id)accentKeyStringForKeyboardState:(id)state;
- (id)replacementForDoubleSpace;
- (BOOL)shouldConvertEagerly;
@end

#endif /* TIKeyboardFeatureSpecialization_h */