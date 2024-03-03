//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 452.0.6.0.0
//
#ifndef AXSSKeyboardEvent_h
#define AXSSKeyboardEvent_h
@import Foundation;

#include "AXSSKeyChord.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface AXSSKeyboardEvent : NSObject<NSCopying>

@property (nonatomic) unsigned long long keyCode;
@property (copy, nonatomic) NSString *unicodeCharacter;
@property (copy, nonatomic) NSString *backupUnicodeCharacter;
@property (nonatomic) BOOL isDownEvent;
@property (nonatomic) BOOL isRepeatEvent;
@property (nonatomic) BOOL isModifierChangedEvent;
@property (readonly, nonatomic) BOOL isCommandDown;
@property (nonatomic) BOOL isLeftCommandDown;
@property (nonatomic) BOOL isRightCommandDown;
@property (readonly, nonatomic) BOOL isOptionDown;
@property (nonatomic) BOOL isLeftOptionDown;
@property (nonatomic) BOOL isRightOptionDown;
@property (readonly, nonatomic) BOOL isControlDown;
@property (nonatomic) BOOL isLeftControlDown;
@property (nonatomic) BOOL isRightControlDown;
@property (readonly, nonatomic) BOOL isShiftDown;
@property (nonatomic) BOOL isLeftShiftDown;
@property (nonatomic) BOOL isRightShiftDown;
@property (nonatomic) BOOL isCapsLockDown;
@property (nonatomic) BOOL isFnDown;
@property (readonly, nonatomic) long long modifierMask;
@property (readonly, nonatomic) AXSSKeyChord *keyChord;
@property (readonly, nonatomic) AXSSKeyChord *backupKeyChord;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)_keyChordForUnicodeCharacter:(id)character;
- (id)description;
@end

#endif /* AXSSKeyboardEvent_h */