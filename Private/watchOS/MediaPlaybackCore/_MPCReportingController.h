//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef _MPCReportingController_h
#define _MPCReportingController_h
@import Foundation;

#include "MPCLyricsReportingController.h"
#include "MPCPlaybackEngine.h"

@interface _MPCReportingController : NSObject

@property (retain, nonatomic) MPCLyricsReportingController *lyricsReportingController;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;

/* instance methods */
- (id)initWithPlaybackEngine:(id)engine;
- (void)recordLyricsViewEvent:(id)event;
@end

#endif /* _MPCReportingController_h */