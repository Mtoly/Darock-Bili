//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSConfirmationSpecifier_h
#define PSConfirmationSpecifier_h
@import Foundation;

#include "PSSpecifier.h"

@class NSString;

@interface PSConfirmationSpecifier : PSSpecifier

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *prompt;
@property (retain, nonatomic) NSString *okButton;
@property (retain, nonatomic) NSString *alternateButton;
@property (retain, nonatomic) NSString *cancelButton;

/* class methods */
+ (id)preferenceSpecifierNamed:(id)named target:(id)target set:(SEL)set get:(SEL)get detail:(Class)detail cell:(long long)cell edit:(Class)edit;
+ (id)specifierWithSpecifier:(id)specifier;

/* instance methods */
- (void)setupWithDictionary:(id)dictionary;
- (BOOL)isDestructive;
- (BOOL)isAlternateDestructive;
- (BOOL)isEqualToSpecifier:(id)specifier;
@end

#endif /* PSConfirmationSpecifier_h */