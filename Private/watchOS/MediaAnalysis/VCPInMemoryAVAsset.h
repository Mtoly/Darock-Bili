//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPInMemoryAVAsset_h
#define VCPInMemoryAVAsset_h
@import Foundation;

#include "AVURLAsset.h"
#include "AVAssetResourceLoaderDelegate-Protocol.h"

@class NSData, NSString;

@interface VCPInMemoryAVAsset : AVURLAsset<AVAssetResourceLoaderDelegate> {
  /* instance variables */
  NSData *_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)assetWithData:(id)data;

/* instance methods */
- (id)initWithData:(id)data;
- (BOOL)resourceLoader:(id)loader shouldWaitForLoadingOfRequestedResource:(id)resource;
@end

#endif /* VCPInMemoryAVAsset_h */