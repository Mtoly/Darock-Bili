//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLSandboxHelper_h
#define PLSandboxHelper_h
@import Foundation;

@interface PLSandboxHelper : NSObject
/* class methods */
+ (BOOL)processCanReadSandboxForPath:(id)path;
+ (BOOL)processWithID:(int)id canReadSandboxForPath:(id)path;
+ (BOOL)processCanWriteSandboxForPath:(id)path;
+ (BOOL)processWithID:(int)id canWriteSandboxForPath:(id)path;
+ (BOOL)fileURLHasSecurityScope:(id)scope;
@end

#endif /* PLSandboxHelper_h */