//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef MMMarkdown_h
#define MMMarkdown_h
@import Foundation;

@interface MMMarkdown : NSObject
/* class methods */
+ (id)HTMLStringWithMarkdown:(id)markdown error:(id *)error;
+ (id)HTMLStringWithMarkdown:(id)markdown extensions:(unsigned long long)extensions error:(id *)error;
+ (id)HTMLStringWithMarkdown:(id)markdown extensions:(unsigned long long)extensions fromSelector:(SEL)selector error:(id *)error;
@end

#endif /* MMMarkdown_h */