//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKeyboardArbiterManager_h
#define UIKeyboardArbiterManager_h
@import Foundation;

@interface UIKeyboardArbiterManager : NSObject

@property (readonly) BOOL remoteKeyboardUndocked;

/* class methods */
+ (id)sharedArbiterManager;
+ (id)arbiterClient;

/* instance methods */
- (id)keyboardWindow;
- (void)forceKeyboardAway;
- (void)preserveKeyboardWithId:(id)id;
- (void)restoreKeyboardWithId:(id)id;
- (void)userSelectedApp:(id)app onCompletion:(id /* block */)completion;
- (void)userSelectedProcessIdentifier:(int)identifier withSceneIdentity:(id)identity onCompletion:(id /* block */)completion;
@end

#endif /* UIKeyboardArbiterManager_h */