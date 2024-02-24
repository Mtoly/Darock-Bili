//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSButtonTapAssertion_h
#define CSLSButtonTapAssertion_h
@import Foundation;

#include "CSLSButtonTapAssertionClientInterface-Protocol.h"

@class NSString, NSXPCConnection;

@interface CSLSButtonTapAssertion : NSObject<CSLSButtonTapAssertionClientInterface> {
  /* instance variables */
  NSXPCConnection *_connection;
  struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
}

@property (readonly, copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) unsigned long long buttons;
@property (nonatomic) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithButtons:(unsigned long long)buttons completion:(id /* block */)completion;
- (id)init;
- (void)dealloc;
- (void)_withLock:(id /* block */)lock;
- (void)_reinitializeAndActivateIfNecessary;
- (void)activate;
- (void)deactivate;
- (void)deactivate:(BOOL)deactivate;
@end

#endif /* CSLSButtonTapAssertion_h */