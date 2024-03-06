//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1108.10.0.0.0
//
#ifndef NPRFSpecifierOwner_Protocol_h
#define NPRFSpecifierOwner_Protocol_h
@import Foundation;

@protocol NPRFSpecifierOwner <NSObject>

@property (retain, nonatomic) NSBundle *specifierBundle;
@property (retain, nonatomic) NSString *localizedStringTableName;
@property (retain, nonatomic) PSSpecifier *configurationSpecifier;
@property (readonly, nonatomic) NPRFSpecifierSet *specifierSet;

/* class methods */
+ (BOOL)mayOverrideReadPreferenceValue;
/* instance methods */
- (void)registerControl:(id)control controlEvents:(unsigned long long)events forSpecifier:(id)specifier;
@end

#endif /* NPRFSpecifierOwner_Protocol_h */