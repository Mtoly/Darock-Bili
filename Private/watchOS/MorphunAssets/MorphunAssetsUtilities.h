//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.101.1.0.0
//
#ifndef MorphunAssetsUtilities_h
#define MorphunAssetsUtilities_h
@import Foundation;

@interface MorphunAssetsUtilities : NSObject
/* class methods */
+ (id)userSiriXLocales;
+ (id)configurationFromPropertiesFile:(id)file;
+ (id)configFileValueForKey:(id)key;
+ (id)embeddedLanguages;
+ (id)libmorphunVersion;
+ (int)compareVersion:(id)version;
@end

#endif /* MorphunAssetsUtilities_h */