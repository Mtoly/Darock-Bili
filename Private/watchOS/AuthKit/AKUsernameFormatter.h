//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKUsernameFormatter_h
#define AKUsernameFormatter_h
@import Foundation;

@interface AKUsernameFormatter : NSObject
/* class methods */
+ (id)formattedUsernameFromUsername:(id)username;
+ (BOOL)_isPhoneNumber:(id)number;
@end

#endif /* AKUsernameFormatter_h */