//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.16.0.0.0
//
#ifndef _TtC11SessionCore16ActivityDatabase_h
#define _TtC11SessionCore16ActivityDatabase_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"

@interface SessionCore.ActivityDatabase : Swift._SwiftObject { // (Swift)
  /* instance variables */
   database;
   pushSubscriptionStore;
   pushTokenStore;
   publicTokenStore;
   activityStore;
   syncEngineRecordMetadataStore;
   syncEnginePairedDeviceIdentifierStore;
   syncEngineRecordIDSyncDateStore;
   assertionStore;
   writerLock;
}

@end

#endif /* _TtC11SessionCore16ActivityDatabase_h */