//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMAssistantMessagePlayMessageSoundHandler_h
#define IMAssistantMessagePlayMessageSoundHandler_h
@import Foundation;

#include "IMAssistantMessageQueryHandler.h"
#include "INPlayMessageSoundIntentHandling-Protocol.h"

@class NSString;

@interface IMAssistantMessagePlayMessageSoundHandler : IMAssistantMessageQueryHandler<INPlayMessageSoundIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)handlePlayMessageSound:(id)sound completion:(id /* block */)completion;
- (id)playSendSoundForMessageGUID:(id)guid;
@end

#endif /* IMAssistantMessagePlayMessageSoundHandler_h */