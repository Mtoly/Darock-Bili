//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSHostTabProviderManager_h
#define WBSHostTabProviderManager_h
@import Foundation;

@class NSMapTable;

@interface WBSHostTabProviderManager : NSObject {
  /* instance variables */
  NSMapTable *_providerMapTable;
  NSMapTable *_hostTabMapTable;
}

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)init;
- (id)providerForContentUUID:(id)uuid;
- (void)registerHostTab:(id)tab;
- (void)unregisterHostTab:(id)tab;
- (id)_hostTabForContentUUID:(id)uuid;
@end

#endif /* WBSHostTabProviderManager_h */