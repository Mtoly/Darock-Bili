//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBUFormAutoFillPrompt_h
#define WBUFormAutoFillPrompt_h
@import Foundation;

@class UIAlertController;

@interface WBUFormAutoFillPrompt : NSObject {
  /* instance variables */
  UIAlertController *_alertController;
}

/* class methods */
+ (void)showAutoFillPromptInWebView:(id)view title:(id)title message:(id)message cancelButtonTitle:(id)title otherButtonTitles:(id)titles makeFirstButtonSuggestedAction:(BOOL)action completionHandler:(id /* block */)handler;
+ (void)showAutoFillPromptInWebView:(id)view title:(id)title message:(id)message cancelButtonTitle:(id)title otherButtonTitles:(id)titles cancelWhenAppEntersBackground:(BOOL)background makeFirstButtonSuggestedAction:(BOOL)action headerViewController:(id)controller completionHandler:(id /* block */)handler;

/* instance methods */
- (void)showAutoFillPromptForUsernameInWebView:(id)view title:(id)title message:(id)message suggestedUsername:(id)username password:(id)password isGeneratedPassword:(BOOL)password completionHandler:(id /* block */)handler;
- (void)_alertTextFieldDidChange:(id)change;
@end

#endif /* WBUFormAutoFillPrompt_h */