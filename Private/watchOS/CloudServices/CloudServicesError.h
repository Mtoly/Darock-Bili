//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 611.60.5.0.0
//
#ifndef CloudServicesError_h
#define CloudServicesError_h
@import Foundation;

@interface CloudServicesError : NSObject
/* class methods */
+ (long long)codeForNSError:(id)nserror;
+ (long long)codeForErrno:(long long)errno;
+ (id)errorWithCode:(long long)code format:(id)format;
+ (id)errorWithCode:(long long)code error:(id)error format:(id)format;
+ (id)errorWithCode:(long long)code URL:(id)url format:(id)format;
+ (id)errorWithCode:(long long)code error:(id)error URL:(id)url format:(id)format;
+ (id)errorWithDomain:(id)domain code:(long long)code format:(id)format;
+ (id)errorForNSError:(id)nserror path:(id)path format:(id)format;
@end

#endif /* CloudServicesError_h */