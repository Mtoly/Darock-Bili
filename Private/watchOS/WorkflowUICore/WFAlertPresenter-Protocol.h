//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFAlertPresenter_Protocol_h
#define WFAlertPresenter_Protocol_h
@import Foundation;

@protocol WFAlertPresenter <NSObject>
/* instance methods */
- (void)dismissAlert:(id)alert completionHandler:(id /* block */)handler;
- (void)setButtons:(id)buttons forAlert:(id)alert;
- (void)replaceButtonAtIndex:(unsigned long long)index withButton:(id)button forAlert:(id)alert;
@end

#endif /* WFAlertPresenter_Protocol_h */