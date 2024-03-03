//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 92.0.0.0.0
//
#ifndef Calculate_h
#define Calculate_h
@import Foundation;

@interface Calculate : NSObject
/* class methods */
+ (void)_resetGlobals;
+ (void)_lock;
+ (void)_unlock;
+ (id)evaluate:(id)evaluate options:(id)options needsUpdate:(BOOL *)update;
+ (id)evaluate:(id)evaluate options:(id)options resultHandler:(id /* block */)handler;
+ (id)evaluate:(id)evaluate options:(id)options;
@end

#endif /* Calculate_h */