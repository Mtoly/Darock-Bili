//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef _CNBufferingStrategy_Protocol_h
#define _CNBufferingStrategy_Protocol_h
@import Foundation;

@protocol _CNBufferingStrategy <NSObject>
/* instance methods */
- (void)buffer:(id)buffer didReceiveResults:(id)results forObserver:(id)observer;
- (void)bufferDidSendResults:(id)results;
@end

#endif /* _CNBufferingStrategy_Protocol_h */