//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKCompactNavigationContainedNavigationController_h
#define PKCompactNavigationContainedNavigationController_h
@import Foundation;

#include "UINavigationController.h"
#include "PKObservableContentContainer-Protocol.h"

@class NSHashTable, NSString, UIVisualEffectView;

@interface PKCompactNavigationContainedNavigationController : UINavigationController<PKObservableContentContainer> {
  /* instance variables */
  UIVisualEffectView *_backdropView;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
  NSHashTable *_observers;
}

@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithStyle:(unsigned long long)style;
- (void)loadView;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void)viewWillLayoutSubviews;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)container;
- (void)pushViewController:(id)controller animated:(BOOL)animated;
- (void)addContentContainerObserver:(id)observer;
- (void)removeContentContainerObserver:(id)observer;
- (id)_observers;
@end

#endif /* PKCompactNavigationContainedNavigationController_h */