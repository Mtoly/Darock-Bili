//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKIDPHandlerDelegate_Protocol_h
#define AKIDPHandlerDelegate_Protocol_h
@import Foundation;

@protocol AKIDPHandlerDelegate <NSObject>
@optional
/* instance methods */
- (void)IDPHandler:(id)idphandler didStartLoadingPageInWebView:(id)view;
- (void)IDPHandler:(id)idphandler didFinishLoadingPageInWebView:(id)view;
- (id)IDPHandler:(id)idphandler sanitizeError:(id)error;
@end

#endif /* AKIDPHandlerDelegate_Protocol_h */