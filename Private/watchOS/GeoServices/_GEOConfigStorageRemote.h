//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef _GEOConfigStorageRemote_h
#define _GEOConfigStorageRemote_h
@import Foundation;

#include "GEOConfigStorageReadOnly-Protocol.h"

@class NSString;

@interface _GEOConfigStorageRemote : NSObject<GEOConfigStorageReadOnly>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)getConfigValueForKey:(id)key countryCode:(id)code options:(unsigned long long)options source:(long long *)source;
- (void)resync;
@end

#endif /* _GEOConfigStorageRemote_h */