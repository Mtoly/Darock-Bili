//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRISequencePersistedTask_h
#define TRISequencePersistedTask_h
@import Foundation;

#include "TRIPBMessage.h"
#include "TRIAnyPersistedTask.h"

@interface TRISequencePersistedTask : TRIPBMessage

@property (retain, @dynamic, nonatomic) TRIAnyPersistedTask *task;
@property (@dynamic, nonatomic) BOOL hasTask;
@property (retain, @dynamic, nonatomic) TRIAnyPersistedTask *dependentTask;
@property (@dynamic, nonatomic) BOOL hasDependentTask;

/* class methods */
+ (id)descriptor;
@end

#endif /* TRISequencePersistedTask_h */