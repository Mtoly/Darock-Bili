//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef BSCompoundAssertion_h
#define BSCompoundAssertion_h
@import Foundation;

#include "BSCompoundAssertionState-Protocol.h"
#include "BSInvalidatable-Protocol.h"

@class NSMutableOrderedSet, NSOrderedSet, NSSet, NSString;
@protocol OS_os_log;

@interface BSCompoundAssertion : NSObject<BSCompoundAssertionState, BSInvalidatable> {
  /* instance variables */
  NSString *_identifierPrefix;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _syncLock;
  BOOL _syncLock_invalid;
  id /* block */ _syncLock_block;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dataLock;
  NSMutableOrderedSet *_dataLock_acquisitionRecords;
  NSObject<OS_os_log> *_dataLock_log;
}

@property (readonly) NSSet *reasons;
@property (readonly) NSOrderedSet *orderedReasons;
@property (retain) NSObject<OS_os_log> *log;
@property (readonly) BOOL active;
@property (readonly) NSSet *context;
@property (readonly) NSOrderedSet *orderedContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)new;
+ (id)assertionWithIdentifier:(id)identifier;
+ (id)assertionWithIdentifier:(id)identifier stateDidChangeHandler:(id /* block */)handler;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (BOOL)isActive;
- (id)acquireForReason:(id)reason;
- (id)acquireForReason:(id)reason withContext:(id)context;
@end

#endif /* BSCompoundAssertion_h */