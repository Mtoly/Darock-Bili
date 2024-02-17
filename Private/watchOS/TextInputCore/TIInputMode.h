//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIInputMode_h
#define TIInputMode_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSLocale, NSString;

@interface TIInputMode : NSObject<NSCopying>

@property (readonly, nonatomic) NSString *normalizedIdentifier;
@property (readonly, nonatomic) NSString *languageWithRegion;
@property (readonly, nonatomic) NSString *variant;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) Class inputManagerClass;
@property (readonly, nonatomic) Class keyboardFeatureSpecializationClass;
@property (readonly, nonatomic) Class multilingualInputManagerClass;
@property (readonly, nonatomic) BOOL supportsPrediction;
@property (readonly, nonatomic) BOOL supportsMultilingualKeyboard;
@property (readonly, nonatomic) BOOL spaceAutocorrectionEnabled;
@property (readonly, nonatomic) BOOL typedStringLMRankingEnabled;
@property (readonly, nonatomic) NSString *replacementForDoubleSpace;
@property (readonly, nonatomic) BOOL doesComposeText;
@property (readonly, nonatomic) NSArray *allAccentKeyStrings;
@property (readonly, nonatomic) NSDictionary *layoutTags;
@property (readonly, nonatomic) NSDictionary *compositionMap;
@property (readonly, nonatomic) NSDictionary *reverseCompositionMap;
@property (readonly, nonatomic) NSString *nonstopPunctuationCharacters;
@property (readonly, nonatomic) NSString *sentencePrefixingCharacters;
@property (readonly, nonatomic) NSString *sentenceDelimitingCharacters;
@property (readonly, nonatomic) NSString *sentenceTrailingCharacters;
@property (readonly, nonatomic) NSString *wordMedialPunctuationCharacters;
@property (readonly, nonatomic) NSString *spaceDeletingCharacters;
@property (readonly, nonatomic) NSString *autocorrectionLocaleIdentifier;

/* class methods */
+ (id)inputModeWithIdentifier:(id)identifier;

/* instance methods */
- (void)setQuickTypeKeyboardFeatureSpecializationClass;
- (id)initWithNormalizedIdentifier:(id)identifier;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (Class)keyboardFeatureSpecializationClassFromInputModeProperties;
@end

#endif /* TIInputMode_h */