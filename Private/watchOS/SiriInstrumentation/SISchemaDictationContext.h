//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef SISchemaDictationContext_h
#define SISchemaDictationContext_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "SISchemaLocaleIdentifier.h"
#include "SISchemaUUID.h"

@class NSArray, NSData, NSString;

@interface SISchemaDictationContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *keyboardLanguage;
@property (nonatomic) BOOL hasKeyboardLanguage;
@property (retain, nonatomic) SISchemaLocaleIdentifier *keyboardLocale;
@property (nonatomic) BOOL hasKeyboardLocale;
@property (retain, nonatomic) SISchemaLocaleIdentifier *dictationLocale;
@property (nonatomic) BOOL hasDictationLocale;
@property (retain, nonatomic) SISchemaLocaleIdentifier *userSelectedLocale;
@property (nonatomic) BOOL hasUserSelectedLocale;
@property (retain, nonatomic) SISchemaLocaleIdentifier *siriSelectedLocale;
@property (nonatomic) BOOL hasSiriSelectedLocale;
@property (copy, nonatomic) NSArray *keyboardLocalesEnableds;
@property (copy, nonatomic) NSArray *dictationLocalesEnableds;
@property (copy, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) SISchemaUUID *textInputSessionId;
@property (nonatomic) BOOL hasTextInputSessionId;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteKeyboardLanguage;
- (void)deleteKeyboardLocale;
- (void)deleteDictationLocale;
- (void)deleteUserSelectedLocale;
- (void)deleteSiriSelectedLocale;
- (void)clearKeyboardLocalesEnabled;
- (void)deleteKeyboardLocalesEnabled;
- (void)addKeyboardLocalesEnabled:(id)enabled;
- (unsigned long long)keyboardLocalesEnabledCount;
- (id)keyboardLocalesEnabledAtIndex:(unsigned long long)index;
- (void)clearDictationLocalesEnabled;
- (void)deleteDictationLocalesEnabled;
- (void)addDictationLocalesEnabled:(id)enabled;
- (unsigned long long)dictationLocalesEnabledCount;
- (id)dictationLocalesEnabledAtIndex:(unsigned long long)index;
- (void)deleteBundleId;
- (void)deleteTextInputSessionId;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* SISchemaDictationContext_h */