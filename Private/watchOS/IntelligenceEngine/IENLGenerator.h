//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.31.1.0.0
//
#ifndef IENLGenerator_h
#define IENLGenerator_h
@import Foundation;

@interface IENLGenerator : NSObject
/* instance methods */
- (BOOL)fromCATI:(id)cati withOutputFile:(id)file;
- (BOOL)fromCATI:(id)cati withOutputFile:(id)file withCATIManifest:(id)catimanifest withEnsemble:(id)ensemble;
@end

#endif /* IENLGenerator_h */