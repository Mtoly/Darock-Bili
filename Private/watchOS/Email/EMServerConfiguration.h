//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EMServerConfiguration_h
#define EMServerConfiguration_h
@import Foundation;

@interface EMServerConfiguration : NSObject
/* class methods */
+ (id)_configurationLocation;
+ (id)_userDefaults;
+ (id)_userDefaultsKey;
+ (double)_cacheValidityInterval;
+ (void)_assertNotMainThread;
+ (id)_dateFormatter;
+ (BOOL)isCacheRecent;
+ (BOOL)refresh;
+ (void)refreshAsync;
+ (void)_savePropertyList:(id)list withDate:(id)date;
+ (id)getValueForKey:(id)key;
+ (id)getValueForKey:(id)key refreshIfNeeded:(BOOL)needed;
+ (id)_cachedPropertyList;
+ (id)cachedPropertyList;
+ (BOOL)isCacheRecentLastRefreshDate:(id *)date;
+ (void)clearCache;
+ (void)overrideWithPropertyList:(id)list;
@end

#endif /* EMServerConfiguration_h */