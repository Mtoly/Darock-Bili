//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 949.0.0.0.0
//
#ifndef LocalLocationClientType_Protocol_h
#define LocalLocationClientType_Protocol_h
@import Foundation;

@protocol LocalLocationClientType 
/* instance methods */
- (void)handleLocalLocationMonitorState:(long long)state;
- (void)handleUpdatedLocalLocation:(id)location;
@end

#endif /* LocalLocationClientType_Protocol_h */