//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MusicKit_PlayerPathSessionManager_h
#define MusicKit_PlayerPathSessionManager_h
@import Foundation;

@class NSMutableDictionary;

@interface MusicKit_PlayerPathSessionManager : NSObject {
  /* instance variables */
  NSMutableDictionary *_sessionIDsByPlayerPath;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

/* class methods */
+ (id)sharedSessionManager;

/* instance methods */
- (id)init;
- (id)sessionIDForPlayerPath:(id)path;
@end

#endif /* MusicKit_PlayerPathSessionManager_h */