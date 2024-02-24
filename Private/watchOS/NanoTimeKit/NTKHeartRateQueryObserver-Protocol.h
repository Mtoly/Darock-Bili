//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKHeartRateQueryObserver_Protocol_h
#define NTKHeartRateQueryObserver_Protocol_h
@import Foundation;

@protocol NTKHeartRateQueryObserver 
/* instance methods */
- (void)manager:(id)manager receivedLatestHeartRateSample:(id)sample;
@optional
/* instance methods */
- (void)manager:(id)manager receivedLatestHeartRateSummary:(id)summary;
@end

#endif /* NTKHeartRateQueryObserver_Protocol_h */