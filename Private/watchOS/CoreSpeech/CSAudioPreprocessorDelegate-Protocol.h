//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSAudioPreprocessorDelegate_Protocol_h
#define CSAudioPreprocessorDelegate_Protocol_h
@import Foundation;

@protocol CSAudioPreprocessorDelegate <NSObject>
/* instance methods */
- (void)audioPreprocessor:(id)preprocessor hasAvailableBuffer:(id)buffer atTime:(unsigned long long)time arrivalTimestampToAudioRecorder:(unsigned long long)recorder numberOfChannels:(int)channels;
@end

#endif /* CSAudioPreprocessorDelegate_Protocol_h */