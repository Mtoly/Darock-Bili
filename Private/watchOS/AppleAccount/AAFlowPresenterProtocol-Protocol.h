//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef AAFlowPresenterProtocol_Protocol_h
#define AAFlowPresenterProtocol_Protocol_h
@import Foundation;

@protocol AAFlowPresenterProtocol <NSObject>

@property (copy, nonatomic) id /* block */ presentationCompletion;

/* instance methods */
- (void)launchProcessWithUserInfo:(id)info;
@end

#endif /* AAFlowPresenterProtocol_Protocol_h */