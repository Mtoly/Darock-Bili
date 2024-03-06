//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDocumentPickerViewControllerHost_Protocol_h
#define _UIDocumentPickerViewControllerHost_Protocol_h
@import Foundation;

@protocol _UIDocumentPickerViewControllerHost <NSObject>
/* instance methods */
- (void)_didSelectURLWrapper:(id)urlwrapper;
- (void)_didSelectURLBookmark:(id)urlbookmark;
- (void)_dismissViewController;
- (void)_didSelectPicker;
- (void)_dismissWithOption:(id)option;
- (void)_stitchFileCreationAtURL:(id)url;
@end

#endif /* _UIDocumentPickerViewControllerHost_Protocol_h */