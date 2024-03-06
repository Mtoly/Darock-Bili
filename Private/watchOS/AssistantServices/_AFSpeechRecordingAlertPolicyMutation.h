//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef _AFSpeechRecordingAlertPolicyMutation_h
#define _AFSpeechRecordingAlertPolicyMutation_h
@import Foundation;

#include "AFSpeechRecordingAlertBehavior.h"
#include "AFSpeechRecordingAlertPolicy.h"
#include "AFSpeechRecordingAlertPolicyMutating-Protocol.h"

@class NSString;

@interface _AFSpeechRecordingAlertPolicyMutation : NSObject<AFSpeechRecordingAlertPolicyMutating> {
  /* instance variables */
  AFSpeechRecordingAlertPolicy *_base;
  AFSpeechRecordingAlertBehavior *_startingAlertBehavior;
  AFSpeechRecordingAlertBehavior *_stoppedAlertBehavior;
  AFSpeechRecordingAlertBehavior *_stoppedWithErrorAlertBehavior;
  struct _mutationFlags { unsigned int x :1 isDirty; unsigned int x :1 hasStartingAlertBehavior; unsigned int x :1 hasStoppedAlertBehavior; unsigned int x :1 hasStoppedWithErrorAlertBehavior; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBase:(id)base;
- (BOOL)isDirty;
- (id)getStartingAlertBehavior;
- (void)setStartingAlertBehavior:(id)behavior;
- (id)getStoppedAlertBehavior;
- (void)setStoppedAlertBehavior:(id)behavior;
- (id)getStoppedWithErrorAlertBehavior;
- (void)setStoppedWithErrorAlertBehavior:(id)behavior;
@end

#endif /* _AFSpeechRecordingAlertPolicyMutation_h */