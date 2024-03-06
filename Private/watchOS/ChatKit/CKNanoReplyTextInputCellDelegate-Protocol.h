//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKNanoReplyTextInputCellDelegate_Protocol_h
#define CKNanoReplyTextInputCellDelegate_Protocol_h
@import Foundation;

@protocol CKNanoReplyTextInputCellDelegate <NSObject>
/* instance methods */
- (void)replyTextInputCell:(id)cell enteredText:(id)text;
- (void)replyTextInputCell:(id)cell tappedReplyType:(long long)type;
- (id)viewControllerForPresentingApplicationLauncherForTextInputCell:(id)cell;
@end

#endif /* CKNanoReplyTextInputCellDelegate_Protocol_h */