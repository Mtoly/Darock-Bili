//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLUnlockCompanionViewController_h
#define CSLUnlockCompanionViewController_h
@import Foundation;

#include "UIViewController.h"
#include "RadiosPreferencesDelegate-Protocol.h"

@class RadiosPreferences, UIButton, UILabel;
@protocol OS_dispatch_queue;

@interface CSLUnlockCompanionViewController : UIViewController<RadiosPreferencesDelegate> {
  /* instance variables */
  UILabel *_instructionLabel;
  RadiosPreferences *_radioPrefs;
  NSObject<OS_dispatch_queue> *_radioPrefsQueue;
  UILabel *_airplaneModeHeaderLabel;
  UIButton *_airplaneModeDisableButton;
  UILabel *_airplaneModeFooterLabel;
}

/* class methods */
+ (id)_shortBodyFont;
+ (void)initialize;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_noteOnWristStateChanged;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidLoad;
- (void)_updateInstructions;
- (void)_queue_updateAirplaneModeContentAnimated:(BOOL)animated;
- (void)_updateAirplaneModeContentAnimated:(BOOL)animated visible:(BOOL)visible;
- (void)disableAirplaneMode;
- (void)airplaneModeChanged;
@end

#endif /* CSLUnlockCompanionViewController_h */