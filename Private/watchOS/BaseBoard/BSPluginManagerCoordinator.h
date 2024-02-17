//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef BSPluginManagerCoordinator_h
#define BSPluginManagerCoordinator_h
@import Foundation;

@class NSMutableDictionary;

@interface BSPluginManagerCoordinator : NSObject {
  /* instance variables */
  NSMutableDictionary *_managersByBundleID;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)registerPlugins;
- (void)registerPluginsFromBundle:(id)bundle;
- (id)mainPluginManager;
- (id)pluginManagerForBundle:(id)bundle;
@end

#endif /* BSPluginManagerCoordinator_h */