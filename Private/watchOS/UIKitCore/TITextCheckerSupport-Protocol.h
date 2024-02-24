//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef TITextCheckerSupport_Protocol_h
#define TITextCheckerSupport_Protocol_h
@import Foundation;

@protocol TITextCheckerSupport <NSObject>
/* instance methods */
- (void)string:(id)string isExemptFromTextCheckerWithCompletionHandler:(id /* block */)handler;
- (void)requestTextCheckerLocalDictionaryWithCompletionHandler:(id /* block */)handler;
- (void)appendWordToTextCheckerLocalDictionary:(id)dictionary;
@end

#endif /* TITextCheckerSupport_Protocol_h */