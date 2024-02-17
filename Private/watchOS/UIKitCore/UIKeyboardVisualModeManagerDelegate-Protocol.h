//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKeyboardVisualModeManagerDelegate_Protocol_h
#define UIKeyboardVisualModeManagerDelegate_Protocol_h
@import Foundation;

@protocol UIKeyboardVisualModeManagerDelegate <NSObject>
/* instance methods */
- (BOOL)enhancedWindowingModeIsAvailable;
- (BOOL)enhancedWindowingModeIsEnabled;
- (BOOL)expectedInputViewSetIsCustom;
- (BOOL)expectedInputModeIsSpecialized;
- (BOOL)textEntryFocusOnExternalDisplay;
- (BOOL)showingAccessoryViewOnly;
- (void)visualModeManager:(id)manager didChangeToMode:(int)mode;
- (void)visualModeManager:(id)manager observedEnhancedWindowingModeEnabledDidChange:(BOOL)change;
@end

#endif /* UIKeyboardVisualModeManagerDelegate_Protocol_h */