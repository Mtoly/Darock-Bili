//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVPlayerLooperInternal_h
#define AVPlayerLooperInternal_h
@import Foundation;

#include "AVCallbackCancellation-Protocol.h"
#include "AVPlayerItem.h"
#include "AVQueuePlayer.h"
#include "AVWeakReference.h"

@class NSError, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AVPlayerLooperInternal : NSObject {
  /* instance variables */
  AVQueuePlayer *loopingPlayer;
  AVPlayerItem *loopingItem;
  NSMutableArray *loopingItemCopies;
  struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } loopRange;
  long long loopCount;
  NSObject<OS_dispatch_queue> *ivarAccessQueue;
  long long playerOriginalActionAtItemEnd;
  struct { long long value; int timescale; unsigned int flags; long long epoch; } forwardPlaybackStartTime;
  AVPlayerItem *lastEnqueuedLoopingItem;
  BOOL waitingForLastLoopingCopyToFinish;
  long long status;
  NSError *error;
  NSObject<AVCallbackCancellation> *playerCurrentItemKVOInvoker;
  NSMutableArray *loopingItemStatusKVOInvokers;
  AVWeakReference *weakReference;
  BOOL existingItemsPrecede;
  BOOL listeningForItemFailedToPlayToEndTime;
}

@end

#endif /* AVPlayerLooperInternal_h */