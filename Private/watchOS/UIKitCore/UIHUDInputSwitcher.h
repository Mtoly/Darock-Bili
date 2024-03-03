//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIHUDInputSwitcher_h
#define UIHUDInputSwitcher_h
@import Foundation;

#include "UIInputSwitcher.h"
#include "UIInputSwitcherView.h"

@interface UIHUDInputSwitcher : UIInputSwitcher {
  /* instance variables */
  UIInputSwitcherView *m_switcherView;
}

/* instance methods */
- (id)init;
- (void)reloadInputModes;
- (id)availableInputModes;
- (id)selectedInputMode;
- (void)setSelectedInputMode:(id)mode;
- (id)nextInputMode;
- (id)previousInputMode;
- (void)setShowingCapsLockSwitcher:(BOOL)switcher;
- (BOOL)isVisibleOrHiding;
- (void)dismissSwitcherWithDelay:(double)delay;
- (void)dismissSwitcher:(BOOL)switcher;
- (void)_showSwitcherViewAsHUD;
- (BOOL)handleSwitchCommand:(BOOL)command withHUD:(BOOL)hud withDelay:(BOOL)delay;
- (BOOL)switchMode:(id)mode withHUD:(BOOL)hud withDelay:(BOOL)delay;
@end

#endif /* UIHUDInputSwitcher_h */