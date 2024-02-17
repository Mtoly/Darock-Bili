//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIWebDefaultDateTimePopover_h
#define UIWebDefaultDateTimePopover_h
@import Foundation;

#include "UIWebFormRotatingAccessoryPopover.h"
#include "UIWebDateTimePopoverViewController.h"
#include "UIWebFormControl-Protocol.h"

@interface UIWebDefaultDateTimePopover : UIWebFormRotatingAccessoryPopover<UIWebFormControl> {
  /* instance variables */
  UIWebDateTimePopoverViewController *_webDateTimeViewController;
}

@property (retain, nonatomic) UIWebDateTimePopoverViewController *_webDateTimeViewController;

/* instance methods */
- (void)clear:(id)clear;
- (id)initWithDOMHTMLInputElement:(id)element datePickerMode:(long long)mode;
- (void)dealloc;
- (id)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
@end

#endif /* UIWebDefaultDateTimePopover_h */