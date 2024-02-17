//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKZoomScale_Protocol_h
#define HKZoomScale_Protocol_h
@import Foundation;

@protocol HKZoomScale <NSObject>
/* instance methods */
- (long long)zoomForZoomScale:(double)scale;
- (double)zoomScaleForRange:(struct HKRange { double x0; double x1; })range;
- (id)unitZoomScaleValueRange;
- (void)setUnitZoomScaleValueRangeForTimeInterval:(double)interval;
@end

#endif /* HKZoomScale_Protocol_h */