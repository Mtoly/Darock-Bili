//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 452.0.6.0.0
//
#ifndef AXSSDialectMap_h
#define AXSSDialectMap_h
@import Foundation;

#include "AXSSLanguageMap.h"

@class NSCharacterSet, NSLocale, NSString;

@interface AXSSDialectMap : NSObject

@property (retain, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *specificLanguageID;
@property (copy, nonatomic) NSString *voiceName;
@property (copy, nonatomic) NSString *voiceIdentifier;
@property (copy, nonatomic) NSCharacterSet *speakableCharacters;
@property (retain, nonatomic) NSCharacterSet *secondaryLanguageRange;
@property (readonly, weak, nonatomic) AXSSLanguageMap *languageMap;
@property (readonly, copy, nonatomic) NSString *regionID;

/* instance methods */
- (id)initWithLocale:(id)locale voiceName:(id)name specificLanguageID:(id)id voiceIdentifier:(id)identifier speakableCharacters:(id)characters secondaryLanguageRange:(id)range;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (BOOL)canSpeakCharacter:(unsigned short)character;
- (BOOL)canSpeakString:(id)string;
- (BOOL)isDialectSecondaryForCharacter:(unsigned short)character;
@end

#endif /* AXSSDialectMap_h */