//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2622.0.0.0.0
//
#ifndef PUIFramebufferSizeChangeNotifier_h
#define PUIFramebufferSizeChangeNotifier_h
@import Foundation;

#include "FBSDisplayObserving-Protocol.h"

@class FBSDisplayMonitor, NSMutableArray, NSString;

@interface PUIFramebufferSizeChangeNotifier : NSObject<FBSDisplayObserving> {
  /* instance variables */
  NSMutableArray *_listeners;
  FBSDisplayMonitor *_displayMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)addListener:(id /* block */)listener;
- (void)removeListener:(id)listener;
- (void)_onMainQueue_notifyListeners;
- (void)displayMonitor:(id)monitor didUpdateIdentity:(id)identity withConfiguration:(id)configuration;
- (void)displayMonitor:(id)monitor didConnectIdentity:(id)identity withConfiguration:(id)configuration;
@end

#endif /* PUIFramebufferSizeChangeNotifier_h */