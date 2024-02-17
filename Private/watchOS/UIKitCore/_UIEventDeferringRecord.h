//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIEventDeferringRecord_h
#define _UIEventDeferringRecord_h
@import Foundation;

#include "BSDebugDescriptionProviding-Protocol.h"
#include "BSInvalidatable-Protocol.h"
#include "_UIEventDeferringDescriptor.h"
#include "_UIEventDeferringOwnershipToken.h"

@class NSMutableSet, NSString;

@interface _UIEventDeferringRecord : NSObject<BSDebugDescriptionProviding> {
  /* instance variables */
  NSMutableSet *_recreationReasons;
  _UIEventDeferringDescriptor *_descriptor;
  NSObject<BSInvalidatable> *_invalidationToken;
  _UIEventDeferringOwnershipToken *_deferringToken;
  void * _recordingManagerPointer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)debugDescriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
@end

#endif /* _UIEventDeferringRecord_h */