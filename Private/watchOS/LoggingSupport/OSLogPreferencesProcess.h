//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1481.40.16.0.0
//
#ifndef OSLogPreferencesProcess_h
#define OSLogPreferencesProcess_h
@import Foundation;

@class NSDictionary, NSMutableDictionary, NSString;

@interface OSLogPreferencesProcess : NSObject {
  /* instance variables */
  NSString *_systemPrefsFile;
  NSDictionary *_systemPrefs;
  NSString *_internalPrefsFile;
  NSDictionary *_internalPrefs;
  NSString *_prefsFile;
  NSMutableDictionary *_prefs;
}

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BOOL isLocked;
@property (readonly, nonatomic) long long effectiveEnabledLevel;
@property (readonly, nonatomic) long long effectivePersistedLevel;
@property (nonatomic) long long enabledLevel;
@property (nonatomic) long long persistedLevel;

/* instance methods */
- (id)initWithBundleID:(id)id;
- (long long)defaultEnabledLevel;
- (long long)defaultPersistedLevel;
- (id)_levelPrefs;
- (void)reset;
@end

#endif /* OSLogPreferencesProcess_h */