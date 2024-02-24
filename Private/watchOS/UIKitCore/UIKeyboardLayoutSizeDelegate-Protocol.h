//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKeyboardLayoutSizeDelegate_Protocol_h
#define UIKeyboardLayoutSizeDelegate_Protocol_h
@import Foundation;

@protocol UIKeyboardLayoutSizeDelegate <NSObject>
/* instance methods */
- (struct CGSize { double x0; double x1; })defaultSizeForInterfaceOrientation:(long long)orientation;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })deviceSpecificStaticHitBufferForInterfaceOrientation:(long long)orientation inputMode:(id)mode;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })deviceSpecificPaddingForInterfaceOrientation:(long long)orientation inputMode:(id)mode;
@end

#endif /* UIKeyboardLayoutSizeDelegate_Protocol_h */