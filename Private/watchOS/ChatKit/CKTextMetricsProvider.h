//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKTextMetricsProvider_h
#define CKTextMetricsProvider_h
@import Foundation;

@interface CKTextMetricsProvider : NSObject
/* instance methods */
- (id)_metricsForAttributedString:(id)string lineFragmentPadding:(double)padding maximumNumberOfLines:(unsigned long long)lines lineBreakMode:(long long)mode targetSize:(struct CGSize { double x0; double x1; })size;
- (id)metricsForRequest:(id)request;
- (id)_metricsForRequest:(id)request containerInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (id)_metricsForRequest:(id)request containerInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset minimumViewHeight:(double)height;
@end

#endif /* CKTextMetricsProvider_h */