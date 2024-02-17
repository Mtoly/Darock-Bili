//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCIssueThumbnail_h
#define FCIssueThumbnail_h
@import Foundation;

#include "FCAssetHandle.h"

@interface FCIssueThumbnail : NSObject

@property (retain, nonatomic) FCAssetHandle *thumbnailAssetHandle;
@property (nonatomic) struct CGSize { double x0; double x1; } thumbnailSize;

/* class methods */
+ (id)issueThumbnailWithAssetHandle:(id)handle thumbnailSize:(struct CGSize { double x0; double x1; })size;

/* instance methods */
@end

#endif /* FCIssueThumbnail_h */