//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 460.60.4.0.0
//
#ifndef BKErrorHelper_h
#define BKErrorHelper_h
@import Foundation;

@interface BKErrorHelper : NSObject
/* class methods */
+ (id)errorWithCode:(long long)code;
+ (id)errorWithOSStatus:(int)osstatus;
@end

#endif /* BKErrorHelper_h */