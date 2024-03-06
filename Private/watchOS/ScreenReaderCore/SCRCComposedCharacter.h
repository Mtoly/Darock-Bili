//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 221.0.4.0.0
//
#ifndef SCRCComposedCharacter_h
#define SCRCComposedCharacter_h
@import Foundation;

@interface SCRCComposedCharacter : NSObject {
  /* instance variables */
  unsigned long long _originalRepresentationLength;
  unsigned long long _normalFormDRepresentationLength;
  unsigned long long _normalFormKCRepresentationLength;
  int * _originalRepresentation;
  int * _normalFormDRepresentation;
  int * _normalFormKCRepresentation;
  long long _originalCombinedCharacterLength;
  struct __CFString * _originalCombinedCharacter;
}

/* instance methods */
- (id)_initWithCharacter:(int)character;
- (id)_initWithSimpleCharacter:(int)character;
- (id)initWithCharacter:(int)character;
- (id)_initWithComposedCharacter:(struct __CFString *)character;
- (id)initWithComposedCharacter:(struct __CFString *)character;
- (void)dealloc;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToUChar32:(int)uchar32;
- (struct __CFString *)originalString;
- (struct __CFString *)copyUnicodeDescriptionString;
- (void)_buildFormD;
- (void)_buildFormKC;
- (int)charAtIndex:(unsigned long long)index;
- (int)formDCharAtIndex:(unsigned long long)index;
- (int)formKCCharAtIndex:(unsigned long long)index;
- (int)originalFromCharAtIndex:(unsigned long long)index;
- (BOOL)_formKCContaintsUpperCase;
- (BOOL)containsUpperCase;
- (unsigned long long)length;
- (unsigned long long)originalLength;
- (unsigned long long)formDLength;
- (unsigned long long)formKCLength;
@end

#endif /* SCRCComposedCharacter_h */