//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLPRFPerApplicationSettings_Protocol_h
#define CSLPRFPerApplicationSettings_Protocol_h
@import Foundation;

@protocol CSLPRFPerApplicationSettings <NSObject>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSObject<CSLPRFApplication> *application;
@property (readonly, nonatomic) BOOL isGlobalDefault;
@property (readonly, nonatomic) BOOL hasCustomSetting;

/* class methods */
+ (id)settingsForApplication:(id)application withSerialization:(id)serialization delegate:(id)delegate;
+ (id)globalSettingsWithSerialization:(id)serialization delegate:(id)delegate;
+ (Class)serializationClass;
+ (id)settingsKey;
+ (const char *)notificationName;
+ (id)globalDefaultIdentifer;
/* instance methods */
- (id)resolvedSettingWithGlobalSettings:(id)settings;
- (void)updateSettingsWithBlock:(id /* block */)block;
- (id)serialize;
@end

#endif /* CSLPRFPerApplicationSettings_Protocol_h */