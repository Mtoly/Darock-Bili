//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKGreenfieldService_h
#define NTKGreenfieldService_h
@import Foundation;

#include "NTKGreenfieldDecodingServiceProtocol-Protocol.h"

@interface NTKGreenfieldService : NSObject<NTKGreenfieldDecodingServiceProtocol>
/* class methods */
+ (id)_unzipWatchfaceFromURL:(id)url;

/* instance methods */
- (void)unzipWatchfaceFromURL:(id)url withSandboxExtension:(char *)extension writeSandboxExtension:(char *)extension completionBlock:(id /* block */)block;
- (void)removeFileAtPath:(id)path withSandboxExtension:(char *)extension completionBlock:(id /* block */)block;
@end

#endif /* NTKGreenfieldService_h */