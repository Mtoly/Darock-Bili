//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSHLocalCountingAssertionAttributeHandler_h
#define BLSHLocalCountingAssertionAttributeHandler_h
@import Foundation;

#include "BLSHLocalAssertionAttributeHandler.h"

@class NSMutableDictionary;

@interface BLSHLocalCountingAssertionAttributeHandler : BLSHLocalAssertionAttributeHandler {
  /* instance variables */
  NSMutableDictionary *_lock_entryDictionary;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _countingDictionaryLock;
}

/* class methods */
+ (id)attributeClasses;
+ (Class)attributeBaseClass;
+ (Class)entryClass;

/* instance methods */
- (id)initForService:(id)service;
- (void)activateWithFirstEntry:(id)entry;
- (void)deactivateWithFinalEntry:(id)entry;
- (id)countingTargetForEntry:(id)entry;
- (id)entriesForCountingTarget:(id)target;
@end

#endif /* BLSHLocalCountingAssertionAttributeHandler_h */