//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNCacheBoundingStrategy_Protocol_h
#define CNCacheBoundingStrategy_Protocol_h
@import Foundation;

@protocol CNCacheBoundingStrategy <NSObject>
/* instance methods */
- (void)willUpdateCacheBy:(unsigned long long)by forKey:(id)key keysToEvict:(id *)evict;
- (BOOL)shouldEvictKey:(id)key;
- (void)willAccessKey:(id)key;
@end

#endif /* CNCacheBoundingStrategy_Protocol_h */