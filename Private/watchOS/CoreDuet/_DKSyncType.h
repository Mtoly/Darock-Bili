//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _DKSyncType_h
#define _DKSyncType_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@protocol OS_xpc_object;

@interface _DKSyncType : NSObject<NSSecureCoding> {
  /* instance variables */
  BOOL _isSingleDevice;
  BOOL _forceSync;
  BOOL _isInitialSync;
  BOOL _isPeriodicSync;
  BOOL _isTriggeredSync;
  BOOL _didActivatePeer;
  BOOL _didReceivePush;
  BOOL _didAddSyncedEvents;
  BOOL _didDeleteSyncedEvents;
  unsigned long long _urgency;
  double _periodicSyncInterval;
  NSObject<OS_xpc_object> *_xpcActivity;
}

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* _DKSyncType_h */