//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFWebResourceCapturer_h
#define WFWebResourceCapturer_h
@import Foundation;

@interface WFWebResourceCapturer : NSObject
/* class methods */
+ (void)getPasteboardRepresentationForWebResource:(id)resource type:(id)type coercionOptions:(id)options completionHandler:(id /* block */)handler;
+ (void)getPrintFormatterForWebResource:(id)resource coercionOptions:(id)options completionHandler:(id /* block */)handler;
+ (void)getImageRepresentationForWebResource:(id)resource atSize:(struct CGSize { double x0; double x1; })size coercionOptions:(id)options completionHandler:(id /* block */)handler;

/* instance methods */
- (void)generatePDFForWebResource:(id)resource includeMargin:(BOOL)margin coercionOptions:(id)options completionHandler:(id /* block */)handler;
@end

#endif /* WFWebResourceCapturer_h */