//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1011.6.0.0.0
//
#ifndef NSKeyedUnarchiver_SWCSecureCodingWorkaround_h
#define NSKeyedUnarchiver_SWCSecureCodingWorkaround_h
@import Foundation;

@interface NSKeyedUnarchiver (SWCSecureCodingWorkaround)
/* class methods */
+ (id)swc_unarchivedObjectOfClass:(Class)class fromData:(id)data error:(id *)error;
+ (id)swc_unarchivedObjectOfClasses:(id)classes fromData:(id)data error:(id *)error;
@end

#endif /* NSKeyedUnarchiver_SWCSecureCodingWorkaround_h */