//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVMovieInternal_h
#define AVMovieInternal_h
@import Foundation;

#include "AVAssetInspectorLoader.h"
#include "AVDispatchOnce.h"

@class NSArray, NSData, NSDictionary, NSURL;

@interface AVMovieInternal : NSObject {
  /* instance variables */
  AVAssetInspectorLoader *loader;
  NSURL *URL;
  NSData *data;
  NSDictionary *initializationOptions;
  NSArray *tracks;
  AVDispatchOnce *makeTracksArrayOnce;
}

/* instance methods */
@end

#endif /* AVMovieInternal_h */