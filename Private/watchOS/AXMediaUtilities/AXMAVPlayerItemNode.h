//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef AXMAVPlayerItemNode_h
#define AXMAVPlayerItemNode_h
@import Foundation;

#include "AXMSourceNode.h"
#include "AXMVisionAnalysisOptions.h"

@protocol OS_dispatch_queue;

@interface AXMAVPlayerItemNode : AXMSourceNode {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_avkit_queue;
}

@property (retain, nonatomic) AXMVisionAnalysisOptions *analysisOptions;
@property (readonly, nonatomic) BOOL triggeringLegibilityEvents;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (BOOL)isSupported;
+ (id)title;

/* instance methods */
- (void)setShouldProcessRemotely:(BOOL)remotely;
- (void)nodeInitialize;
- (void)autoTriggerLegibilityEventsWithAVPlayerItem:(id)item;
- (void)endAutoTriggerOfLegibilityEvents;
- (BOOL)isTriggeringLegibilityEvents;
@end

#endif /* AXMAVPlayerItemNode_h */