//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.13.3.0.0
//
#ifndef SFResourceLoader_Protocol_h
#define SFResourceLoader_Protocol_h
@import Foundation;

@protocol SFResourceLoader <NSObject>
@optional
/* instance methods */
- (BOOL)loadImage:(id)image withCompletionHandler:(id /* block */)handler;
- (BOOL)loadImage:(id)image withContext:(id)context completionHandler:(id /* block */)handler;
- (BOOL)loadCard:(id)card withCompletionHandler:(id /* block */)handler;
- (BOOL)loadMoreResults:(id)results withCompletionHandler:(id /* block */)handler;
@end

#endif /* SFResourceLoader_Protocol_h */