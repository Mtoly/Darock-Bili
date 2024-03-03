//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSHEnvironmentTransitionStateTarget_h
#define BLSHEnvironmentTransitionStateTarget_h
@import Foundation;

@class BLSBacklightChangeEvent, BLSBacklightSceneVisualState, NSDate;

@interface BLSHEnvironmentTransitionStateTarget : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  BOOL _lock_performedBacklightRamp;
}

@property (readonly, nonatomic) unsigned long long sequenceID;
@property (readonly, nonatomic) BLSBacklightChangeEvent *triggerEvent;
@property (readonly, copy, nonatomic) id /* block */ backlightRampBlock;
@property (readonly, nonatomic) BLSBacklightSceneVisualState *visualState;
@property (readonly, nonatomic) NSDate *presentationDate;
@property long long backlightState;
@property BOOL didUpdateInitialState;
@property BOOL didCompleteAnimation;

/* instance methods */
- (id)initWithSequenceID:(unsigned long long)id backlightState:(long long)state triggerEvent:(id)event backlightRampBlock:(id /* block */)block;
- (id)initWithTarget:(id)target visualState:(id)state presentationDate:(id)date;
- (id)initWithSequenceID:(unsigned long long)id backlightState:(long long)state visualState:(id)state presentationDate:(id)date triggerEvent:(id)event backlightRampBlock:(id /* block */)block;
- (BOOL)setAndTestDidPerformBacklightRamp;
- (id)description;
- (id)debugDescription;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToVisualState:(id)state presentationDate:(id)date;
@end

#endif /* BLSHEnvironmentTransitionStateTarget_h */