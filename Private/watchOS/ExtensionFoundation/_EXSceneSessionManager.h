//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.1.1.0.0
//
#ifndef _EXSceneSessionManager_h
#define _EXSceneSessionManager_h
@import Foundation;

@class NSMutableDictionary;

@interface _EXSceneSessionManager : NSObject

@property (readonly) NSMutableDictionary *_sessions;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)_init;
- (void)addSession:(id)session;
- (id)sessionForIdentifier:(id)identifier;
- (void)removeSessionForIdentifier:(id)identifier;
- (id)sessions;
@end

#endif /* _EXSceneSessionManager_h */