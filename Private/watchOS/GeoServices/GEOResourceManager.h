//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOResourceManager_h
#define GEOResourceManager_h
@import Foundation;

#include "GEOResourceManifestConfiguration.h"

@interface GEOResourceManager : NSObject {
  /* instance variables */
  GEOResourceManifestConfiguration *_configuration;
}

/* class methods */
+ (id)sharedManager;
+ (id)sharedManagerForConfiguration:(id)configuration;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (id)pathForResourceWithName:(id)name fallbackBundle:(id)bundle;
- (id)dataForResourceWithName:(id)name fallbackBundle:(id)bundle;
- (id)pathForResourceWithName:(id)name fallbackBundle:(id)bundle fallbackNameHandler:(id /* block */)handler;
- (BOOL)isDevResourceWithName:(id)name fallbackBundle:(id)bundle fallbackNameHandler:(id /* block */)handler;
- (id)dataForResourceWithName:(id)name fallbackBundle:(id)bundle fallbackNameHandler:(id /* block */)handler;
- (void)dataForSignedResourceWithName:(id)name fallbackBundle:(id)bundle fallbackNameHandler:(id /* block */)handler resultHandler:(id /* block */)handler;
- (id)allResourceNames;
@end

#endif /* GEOResourceManager_h */