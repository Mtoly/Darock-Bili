//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLClockFaceStatusViewServer_h
#define CSLClockFaceStatusViewServer_h
@import Foundation;

#include "CSLClockFaceStatusViewClientDelegate-Protocol.h"
#include "CSLStatusBarContextObserver-Protocol.h"
#include "CSLStatusBarContextState.h"
#include "NSXPCListenerDelegate-Protocol.h"

@class BSCompoundAssertion, NSMutableSet, NSSet, NSString, NSXPCListener;

@interface CSLClockFaceStatusViewServer : NSObject<NSXPCListenerDelegate, CSLClockFaceStatusViewClientDelegate, CSLStatusBarContextObserver> {
  /* instance variables */
  NSXPCListener *_listener;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSMutableSet *_clients;
  CSLStatusBarContextState *_globalContextState;
  NSMutableSet *_suppressionAssertions;
  NSSet *_suppressedStateNames;
  BSCompoundAssertion *_deferralAssertion;
  BOOL _needsSettingsUpdate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedServer;

/* instance methods */
- (id)initWithListener:(id)listener;
- (void)dealloc;
- (void)start;
- (id)acquireSuppressionAssertionForStateNames:(id)names reason:(id)reason;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)clockFaceStatusViewClientDidRegister:(id)register;
- (void)clockFaceStatusViewClientDidInvalidate:(id)invalidate;
- (void)globalContext:(id)context didUpdateState:(id)state;
- (id)deferStateUpdatesForReason:(id)reason;
@end

#endif /* CSLClockFaceStatusViewServer_h */