//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef GKInterfaceListener_h
#define GKInterfaceListener_h
@import Foundation;

#include "InterfaceListenerDelegate-Protocol.h"

@class BOOL *;

@interface GKInterfaceListener : NSObject {
  /* instance variables */
  struct __SCDynamicStore * _dynamicStore;
  struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } _notificationMutex;
  BOOL _isWifiUp;
  BOOL _isCellUp;
  int _notifyToken;
  BOOL _monitoringAvailable;
}

@property BOOL _isWifiUp;
@property BOOL _isCellUp;
@property NSObject<InterfaceListenerDelegate> *interfaceListenerDelegate;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)hasConnectionWithWifi:(BOOL *)wifi cell:(BOOL *)cell;
- (BOOL)startChangeListener;
- (BOOL)stopChangeListener;
- (BOOL)startRoutingChangeListener;
- (void)stopRoutingChangeListener;
@end

#endif /* GKInterfaceListener_h */