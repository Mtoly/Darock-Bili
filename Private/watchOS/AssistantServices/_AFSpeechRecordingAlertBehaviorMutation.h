//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef _AFSpeechRecordingAlertBehaviorMutation_h
#define _AFSpeechRecordingAlertBehaviorMutation_h
@import Foundation;

#include "AFSpeechRecordingAlertBehavior.h"
#include "AFSpeechRecordingAlertBehaviorMutating-Protocol.h"

@class NSString;

@interface _AFSpeechRecordingAlertBehaviorMutation : NSObject<AFSpeechRecordingAlertBehaviorMutating> {
  /* instance variables */
  AFSpeechRecordingAlertBehavior *_base;
  long long _style;
  long long _beepSoundID;
  struct _mutationFlags { unsigned int x :1 isDirty; unsigned int x :1 hasStyle; unsigned int x :1 hasBeepSoundID; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBase:(id)base;
- (BOOL)isDirty;
- (long long)getStyle;
- (void)setStyle:(long long)style;
- (long long)getBeepSoundID;
- (void)setBeepSoundID:(long long)id;
@end

#endif /* _AFSpeechRecordingAlertBehaviorMutation_h */