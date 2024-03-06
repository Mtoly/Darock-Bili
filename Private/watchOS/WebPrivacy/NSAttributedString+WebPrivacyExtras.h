//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 37.0.0.0.0
//
#ifndef NSAttributedString_WebPrivacyExtras_h
#define NSAttributedString_WebPrivacyExtras_h
@import Foundation;

@interface NSAttributedString (WebPrivacyExtras)
/* instance methods */
- (id)_wp_stringByRemovingTrackingInformationFromURLs;
- (void)_wp_removeTrackingInformationFromURLs:(id /* block */)urls;
@end

#endif /* NSAttributedString_WebPrivacyExtras_h */