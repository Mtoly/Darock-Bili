//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 342.208.0.0.0
//
#ifndef AVTPhysicsController_h
#define AVTPhysicsController_h
@import Foundation;

#include "AVTPhysicsControllerDelegate-Protocol.h"

@class NSArray, SCNPhysicsWorld;

@interface AVTPhysicsController : NSObject {
  /* instance variables */
  SCNPhysicsWorld *_physicsWorld;
  NSArray *_physicsRigs;
  BOOL _physicsBehaviorsAreInstalledInPhysicsWorld;
  unsigned int _frameCount;
  BOOL _setupDone;
  BOOL _hasPhysicsStateOverride;
}

@property (weak, nonatomic) NSObject<AVTPhysicsControllerDelegate> *delegate;

/* instance methods */
- (void)applyForcesWithMultiplier:(double)multiplier;
- (void)updateAtTime:(double)time forceMultiplier:(double)multiplier;
- (3)offsetFromRestingPositionForNode:(id)node inCoordinateSpaceOfNode:(id)node;
- (void)installPhysics;
- (void)setupPhysicsIfNeeded;
- (void)setupPhysics;
- (void)_setupCollisionNode:(id)node;
- (void)_setupPhysicsChain:(id)chain physicsRigs:(id)rigs;
- (void)downforcesDidChange;
- (id)physicsState;
- (void)resetToPhysicsState:(id)state assumeRestStateIfNil:(BOOL)nil;
- (void)addToPhysicsWorld:(id)world;
- (void)removeFromPhysicsWorld:(id)world;
@end

#endif /* AVTPhysicsController_h */