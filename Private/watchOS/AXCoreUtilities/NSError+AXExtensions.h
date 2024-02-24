//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef NSError_AXExtensions_h
#define NSError_AXExtensions_h
@import Foundation;

@interface NSError (AXExtensions)
/* class methods */
+ (id)ax_errorWithDomain:(id)domain description:(id)description;
+ (id)ax_errorWithDomain:(id)domain code:(long long)code description:(id)description;
+ (id)ax_errorWithDomain:(id)domain code:(long long)code description:(id)description arguments:(char *)arguments;

/* instance methods */
- (id)ax_nonRedundantDescription;
@end

#endif /* NSError_AXExtensions_h */