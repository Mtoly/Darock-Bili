//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFAppStateMonitor_h
#define MFAppStateMonitor_h
@import Foundation;

@class EFObservable, RBSProcessMonitor;
@protocol EFObservable<EFObserver;

@interface MFAppStateMonitor : NSObject {
  /* instance variables */
  atomic BOOL _isVisible;
  RBSProcessMonitor *_underlyingMonitor;
  EFObservable<EFObserver> *_observable;
}

@property (readonly, nonatomic) EFObservable *appIsVisibleObservable;
@property (readonly, nonatomic) BOOL visible;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)dealloc;
- (id)initWithBundleId:(id)id;
- (BOOL)isVisible;
@end

#endif /* MFAppStateMonitor_h */