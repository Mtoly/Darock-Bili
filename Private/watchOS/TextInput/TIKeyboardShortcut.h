//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIKeyboardShortcut_h
#define TIKeyboardShortcut_h
@import Foundation;

@class NSString;

@interface TIKeyboardShortcut : NSObject

@property (retain, nonatomic) NSString *keyEquivalent;
@property unsigned long long modifierFlags;
@property (retain, nonatomic) NSString *displayStringOverride;

/* class methods */
+ (id)shortcutWithKeyEquivalent:(id)equivalent modifierFlags:(unsigned long long)flags;
+ (id)shortcutWithKeyEquivalent:(id)equivalent modifierFlags:(unsigned long long)flags displayStringOverride:(id)override;
+ (id)localizedKeyboardShortcut:(id)shortcut forKeyboardLayout:(id)layout;
+ (id)localizedKeyboardShortcut:(id)shortcut forKeyboardLayout:(id)layout usingKeyboardType:(unsigned int)type;
+ (id)localizedKeyboardShortcut:(id)shortcut forKeyboardLayout:(id)layout withAttributes:(id)attributes;
+ (id)findLocalizationForKeyboardShortcut:(id)shortcut withModifiers:(unsigned long long)modifiers inApplicableOverrides:(id)overrides usingKeyboardType:(unsigned int)type;
+ (BOOL)isMirroringCandidate:(id)candidate;

/* instance methods */
- (id)initWithKeyEquivalent:(id)equivalent modifierFlags:(unsigned long long)flags;
- (id)initWithKeyEquivalent:(id)equivalent modifierFlags:(unsigned long long)flags displayStringOverride:(id)override;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* TIKeyboardShortcut_h */