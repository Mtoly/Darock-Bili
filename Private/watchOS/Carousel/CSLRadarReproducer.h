//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLRadarReproducer_h
#define CSLRadarReproducer_h
@import Foundation;

@class NSDictionary;

@interface CSLRadarReproducer : NSObject {
  /* instance variables */
  NSDictionary *_radars;
}

/* instance methods */
- (id)init;
- (void)reproduceRadar:(unsigned long long)radar withCompletion:(id /* block */)completion;
@end

#endif /* CSLRadarReproducer_h */