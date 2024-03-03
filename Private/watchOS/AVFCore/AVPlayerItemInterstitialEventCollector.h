//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVPlayerItemInterstitialEventCollector_h
#define AVPlayerItemInterstitialEventCollector_h
@import Foundation;

#include "AVPlayerItemMediaDataCollector.h"
#include "AVPlayerItem.h"

@protocol OS_dispatch_queue;

@interface AVPlayerItemInterstitialEventCollector : AVPlayerItemMediaDataCollector {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_ivarAccessQueue;
  id /* block */ _obtainCoordinator;
  AVPlayerItem *_weakReferenceToPlayerItem;
}

/* instance methods */
- (BOOL)_attachToPlayerItem:(id)item;
- (void)_detatchFromPlayerItem;
- (void)_updateTaggedRangeMetadataArray:(id)array;
- (id)initWithCoordinatorGenerator:(id /* block */)generator;
- (void)dealloc;
@end

#endif /* AVPlayerItemInterstitialEventCollector_h */