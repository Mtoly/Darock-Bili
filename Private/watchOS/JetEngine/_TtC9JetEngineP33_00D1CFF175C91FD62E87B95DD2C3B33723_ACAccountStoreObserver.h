//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7.2.9.0.0
//
#ifndef _TtC9JetEngineP33_00D1CFF175C91FD62E87B95DD2C3B33723_ACAccountStoreObserver_h
#define _TtC9JetEngineP33_00D1CFF175C91FD62E87B95DD2C3B33723_ACAccountStoreObserver_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"

@interface JetEngine.(_ACAccountStoreObserver in _00D1CFF175C91FD62E87B95DD2C3B337) : Swift._SwiftObject { // (Swift)
  /* instance variables */
   eventEmitter;
   notificationCenter;
}

/* instance methods */
- (void)accountCookiesDidChange:(id)change;
- (void)accountStoreDidChange:(id)change;
@end

#endif /* _TtC9JetEngineP33_00D1CFF175C91FD62E87B95DD2C3B33723_ACAccountStoreObserver_h */