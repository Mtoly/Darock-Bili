//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 598.10.0.0.0
//
#ifndef BKHIDEventDeliverySequence_h
#define BKHIDEventDeliverySequence_h
@import Foundation;

#include "BKHIDBufferedEventProcessor-Protocol.h"
#include "BKHIDEventDeliveryManager.h"
#include "BKHIDEventSenderInfo-Protocol.h"
#include "BSDescriptionStreamable-Protocol.h"
#include "NSCopying-Protocol.h"

@class BKSHIDEventKeyCommand, NSMutableSet, NSString;
@protocol BKHIDEventDispatcher;

@interface BKHIDEventDeliverySequence : NSObject<BSDescriptionStreamable, NSCopying> {
  /* instance variables */
  NSObject<BKHIDEventSenderInfo> *_senderInfo;
  BKHIDEventDeliveryManager *_deliveryManager;
  id _additionalContext;
  NSMutableSet *_currentBuffers;
  NSMutableSet *_buffersWithIncompleteSequences;
  NSMutableSet *_currentResolutions;
  NSMutableSet *_resolutionsWithIncompleteSequences;
  NSMutableSet *_repostedToBuffers;
  struct __IOHIDEvent * _firstEvent;
}

@property (readonly) id firstAdditionalContext;
@property (readonly) BKSHIDEventKeyCommand *keyCommand;
@property (readonly) NSObject<BKHIDEventDispatcher> *dispatcher;
@property (readonly) NSObject<BKHIDBufferedEventProcessor> *processor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProcessor:(id)processor dispatcher:(id)dispatcher senderInfo:(id)info additionalContext:(id)context keyCommand:(id)command deliveryManager:(id)manager resolutions:(id)resolutions buffers:(id)buffers;
- (void)dealloc;
- (void)postEvent:(struct __IOHIDEvent *)event position:(long long)position additionalContext:(id)context;
- (void)postEvent:(struct __IOHIDEvent *)event position:(long long)position additionalContext:(id)context fromBuffer:(id)buffer toResolution:(id)resolution;
- (void)bufferDidDrain:(id)drain;
- (void)repostFirstEventToBufferedTargets:(id)targets;
- (id)buffers;
- (id)resolutions;
- (void)_resolveDispatchTargetsToBuffers;
- (void)_resolveDispatchTargetsToBuffers:(id)buffers repostFirstEvent:(BOOL)event;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)appendDescriptionToFormatter:(id)formatter;
@end

#endif /* BKHIDEventDeliverySequence_h */