//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef _TtC10ChronoCore21TaskActivityScheduler_h
#define _TtC10ChronoCore21TaskActivityScheduler_h
@import Foundation;

@interface ChronoCore.TaskActivityScheduler : NSObject { // (Swift)
  /* instance variables */
   _schedulingProviderQueue;
   _schedulingProvider;
   _dataProtectionMonitor;
   _keybagProvider;
   _systemDataMigrator;
   _lock;
   _lock_activityStore;
   _lock_completedMigration;
   _lock_userManager;
   _lock_enqueueActivityBlocksWaitingForMigration;
}

/* instance methods */
- (void)dealloc;
- (id)init;
@end

#endif /* _TtC10ChronoCore21TaskActivityScheduler_h */