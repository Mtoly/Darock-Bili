//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSDisplaySource_h
#define FBSDisplaySource_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "BSInvalidatable-Protocol.h"
#include "FBSDisplayConfiguration.h"
#include "FBSDisplayMonitor.h"

@class CADisplay, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface FBSDisplaySource : NSObject<BSInvalidatable, BSDescriptionProviding> {
  /* instance variables */
  CADisplay *_display;
  FBSDisplayMonitor *_lock_monitor;
  NSObject<OS_dispatch_queue> *_callOutQueue;
  FBSDisplayConfiguration *_lock_rawConfiguration;
  FBSDisplayConfiguration *_lock_rawConfigurationOfLastTransition;
  FBSDisplayConfiguration *_lock_reportedRawConfiguration;
  NSSet *_lock_reportedEffectiveConfigurations;
  FBSDisplayConfiguration *_evlock_rawConfiguration;
  FBSDisplayConfiguration *_evlock_reportedRawConfiguration;
  NSSet *_evlock_reportedEffectiveConfigurations;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _externallyVisibleLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _updateTransformsLock;
  unsigned int _displayID;
  unsigned int _instanceID;
  int _lock_attachment;
  int _evlock_attachment;
  unsigned int _lock_debounceToken;
  BOOL _alwaysConnected;
  BOOL _updatable;
  BOOL _observing;
  BOOL _lock_initialized;
  BOOL _lock_allowsUnknown;
  BOOL _lock_invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
@end

#endif /* FBSDisplaySource_h */