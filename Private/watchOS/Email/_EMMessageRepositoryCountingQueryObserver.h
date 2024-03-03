//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef _EMMessageRepositoryCountingQueryObserver_h
#define _EMMessageRepositoryCountingQueryObserver_h
@import Foundation;

#include "EMMailboxScope.h"
#include "EMMessageRepository.h"
#include "EMMessageRepositoryCountQueryObserver_xpc-Protocol.h"
#include "EMQuery.h"
#include "EMRecoverableObserver-Protocol.h"

@class EFCancelationToken, EFPair, NSString;
@protocol EMMessageRepositoryCountQueryObserver;

@interface _EMMessageRepositoryCountingQueryObserver : NSObject<EMMessageRepositoryCountQueryObserver_xpc, EMRecoverableObserver> {
  /* instance variables */
  EMMessageRepository *_repository;
  EMQuery *_query;
  EMMailboxScope *_serverCountMailboxScope;
  NSObject<EMMessageRepositoryCountQueryObserver> *_observer;
  EFCancelationToken *_token;
}

@property (readonly) EFPair *queryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRepository:(id)repository queryIdentifier:(id)identifier includingServerCountsForMailboxScope:(id)scope observer:(id)observer;
- (void)dealloc;
- (void)cancel;
- (void)performWithRemoteConnection:(id)connection;
- (void)recoverWithRemoteConnection:(id)connection;
- (void)_performQueryWithRemoteConnection:(id)connection forRecovery:(BOOL)recovery;
- (void)countDidChange:(long long)change acknowledgementToken:(id)token;
@end

#endif /* _EMMessageRepositoryCountingQueryObserver_h */