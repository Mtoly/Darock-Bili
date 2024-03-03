//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.19.1.2.1
//
#ifndef SiriTTSPhonemeTool_h
#define SiriTTSPhonemeTool_h
@import Foundation;

@interface SiriTTSPhonemeTool : NSObject
/* class methods */
+ (id)generateTTSPhonemes:(id)ttsphonemes voicePath:(id)path phonemeSystem:(long long)system error:(id *)error;
@end

#endif /* SiriTTSPhonemeTool_h */