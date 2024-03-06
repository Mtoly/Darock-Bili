//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef _TtC10ChronoCore14ProcessMonitor_h
#define _TtC10ChronoCore14ProcessMonitor_h
@import Foundation;

@interface ChronoCore.ProcessMonitor : NSObject { // (Swift)
  /* instance variables */
   _queue;
   _calloutQueue;
   _hostService;
   _extensionManager;
   _carouselSessionService;
   _subscriptions;
   _keepAliveAssertionProvider;
   _lock;
   _lock_processMonitor;
   _lock_knownExtensionBundleIdentifiers;
   _lock_knownApplicationBundleIdentifiers;
   _lock_runningBundleIdentifiersToPIDs;
   _lock_processHandlesToObserve;
   _lock_runningBundleIdentifiersWithVisibleScenes;
   _lock_runningBundleIdentifiersWithSessionExemptions;
   _lock_bundleIdentifiersToSuspensionObservers;
   _lock_observers;
   _lock_formerlyVisibleApplicationBundleIdentifiers;
   _lock_formerlyVisibleApplicationsGraceExpirationTimer;
}

/* instance methods */
- (id)init;
@end

#endif /* _TtC10ChronoCore14ProcessMonitor_h */