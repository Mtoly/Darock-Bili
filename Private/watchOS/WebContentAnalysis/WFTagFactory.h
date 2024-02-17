//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 50.0.0.0.0
//
#ifndef WFTagFactory_h
#define WFTagFactory_h
@import Foundation;

@class NSMutableDictionary;

@interface WFTagFactory : NSObject {
  /* instance variables */
  NSMutableDictionary *sharedTags;
}

/* class methods */
+ (id)tagsForWebpage:(id)webpage;
+ (id)defaultFactory;

/* instance methods */
- (id)init;
- (id)tagWithClass:(Class)class webpage:(id)webpage;
- (void)dealloc;
@end

#endif /* WFTagFactory_h */