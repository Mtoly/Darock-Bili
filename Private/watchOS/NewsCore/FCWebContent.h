//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCWebContent_h
#define FCWebContent_h
@import Foundation;

#include "FCAssetHandle.h"

@class NSString, NSURL;

@interface FCWebContent : NSObject

@property (copy, nonatomic) NSString *articleID;
@property (retain, nonatomic) NSURL *sourceURL;
@property (retain, nonatomic) FCAssetHandle *excerptAssetHandle;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSURL *baseURL;

/* instance methods */
- (id)init;
- (id)initWithArticleID:(id)id sourceURL:(id)url excerptAssetHandle:(id)handle;
@end

#endif /* FCWebContent_h */