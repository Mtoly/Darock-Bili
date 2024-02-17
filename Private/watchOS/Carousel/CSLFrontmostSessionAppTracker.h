//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLFrontmostSessionAppTracker_h
#define CSLFrontmostSessionAppTracker_h
@import Foundation;

#include "CSLForegroundMonitorService.h"
#include "CSLMainUIStateProviding-Protocol.h"
#include "CSLSessionManager.h"

@class CSLPRFConcurrentObserverStore;

@interface CSLFrontmostSessionAppTracker : NSObject {
  /* instance variables */
  CSLPRFConcurrentObserverStore *_observers;
}

@property (weak, nonatomic) CSLSessionManager *sessionManager;
@property (weak, nonatomic) CSLForegroundMonitorService *foregroundMonitorService;
@property (weak, nonatomic) NSObject<CSLMainUIStateProviding> *mainUIStateProvider;

/* instance methods */
- (id)init;
- (id)initWithSessionManager:(id)manager;
- (id)initWithForegroundMonitorService:(id)service sessionManager:(id)manager mainUIStateProvider:(id)provider;
- (void)dealloc;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (id)_topAppBundleID;
- (void)foregroundMonitorService:(id)service application:(id)application changedForegroundStatus:(BOOL)status;
- (void)sessionManager:(id)manager sessionDidStart:(id)start;
- (void)sessionManager:(id)manager sessionDidEnd:(id)end;
@end

#endif /* CSLFrontmostSessionAppTracker_h */