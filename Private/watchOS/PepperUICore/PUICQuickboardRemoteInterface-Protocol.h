//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICQuickboardRemoteInterface_Protocol_h
#define PUICQuickboardRemoteInterface_Protocol_h
@import Foundation;

@protocol PUICQuickboardRemoteInterface <NSObject>
/* instance methods */
- (void)quickboardDidUpdateAttributedText:(id)text;
- (void)quickboardDidEndEditing;
- (void)quickboardDidCancelEditing;
- (void)quickboardDidUpdateInputDictionary:(id)dictionary;
- (void)quickboardDidUpdatePrimaryLanguage:(id)language;
- (void)quickboardDidInputText:(id)text;
@end

#endif /* PUICQuickboardRemoteInterface_Protocol_h */