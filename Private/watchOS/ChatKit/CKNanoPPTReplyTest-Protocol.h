//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKNanoPPTReplyTest_Protocol_h
#define CKNanoPPTReplyTest_Protocol_h
@import Foundation;

@protocol CKNanoPPTReplyTest <NSObject>
/* instance methods */
- (void)willTapReplyButton;
- (void)willPresentReplyViewController:(id)controller;
- (void)didPresentReplyViewController:(id)controller;
- (void)willBeginSendingReply;
- (void)didBeginSendingReply;
- (void)failedTest;
@end

#endif /* CKNanoPPTReplyTest_Protocol_h */