//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 571.0.0.0.0
//
#ifndef ETKissMessage_h
#define ETKissMessage_h
@import Foundation;

#include "ETMessage.h"
#include "KissNode.h"

@class NSMutableArray, NSMutableSet, SKTexture, SKUniform;

@interface ETKissMessage : ETMessage {
  /* instance variables */
  SKTexture *_atlas;
  SKUniform *_atlasUniform;
  NSMutableArray *_points;
  NSMutableArray *_angles;
  NSMutableArray *_delays;
  NSMutableSet *_kissMarkNodes;
  double _lastKissTime;
  KissNode *_lastKiss;
  BOOL _didDelegateWillStopPlaying;
  BOOL _didDelegateDidStopPlaying;
}

/* class methods */
+ (unsigned short)messageType;
+ (id)_kissColor;

/* instance methods */
- (id)init;
- (id)initWithArchiveData:(id)data;
- (id)archiveData;
- (BOOL)_leaveMarkAtDelay:(double)delay;
- (void)_initAtlas;
- (void)addKissAtNormalizedPoint:(struct CGPoint { double x0; double x1; })point angle:(double)angle time:(double)time toScene:(id)scene;
- (BOOL)_hasKissesThatLeaveMark;
- (void)displayInScene:(id)scene;
- (void)_setKissLeavesMark:(id)mark;
- (void)_displayKissAtPoint:(struct CGPoint { double x0; double x1; })point angle:(double)angle leavesMark:(BOOL)mark inScene:(id)scene;
- (void)_notifyDelegateDidStopPlaying;
- (void)_notifyDelegateWillStopPlaying;
- (void)stopPlaying;
- (id)messageTypeAsString;
- (double)messageDuration;
- (BOOL)reachedSizeLimit;
- (void)setParentMessage:(id)message;
@end

#endif /* ETKissMessage_h */