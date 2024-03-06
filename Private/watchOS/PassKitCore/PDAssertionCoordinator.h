//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PDAssertionCoordinator_h
#define PDAssertionCoordinator_h
@import Foundation;

#include "PDXPCService.h"
#include "PDAssertionCoordinatorExportedInterface-Protocol.h"
#include "PDAssertionRequestDelegate-Protocol.h"
#include "PKEntitlementWhitelist.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, PDAssertionCoordinatorDelegate;

@interface PDAssertionCoordinator : PDXPCService<PDAssertionRequestDelegate, PDAssertionCoordinatorExportedInterface> {
  /* instance variables */
  NSMutableDictionary *_assertionsByType;
  NSObject<OS_dispatch_queue> *_coordinatorSerialQueue;
  PKEntitlementWhitelist *_whitelist;
  long long _suppressionPermissionState;
  NSMutableArray *_pendingAssertionRequests;
}

@property (weak, nonatomic) NSObject<PDAssertionCoordinatorDelegate> *delegate;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL isForegroundApplication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)suppressionApplicationRegistry;

/* instance methods */
- (id)initWithConnection:(id)connection;
- (void)acquireAssertionOfType:(unsigned long long)type withIdentifier:(id)identifier reason:(id)reason handler:(id /* block */)handler;
- (void)invalidateAssertionOfType:(unsigned long long)type withIdentifier:(id)identifier handler:(id /* block */)handler;
- (void)assertionOfType:(unsigned long long)type withIdentifier:(id)identifier shouldInvalidateWhenBackgrounded:(BOOL)backgrounded;
- (void)assertionOfType:(unsigned long long)type withIdentifier:(id)identifier isValid:(id /* block */)valid;
- (void)hasValidAssertionOfType:(unsigned long long)type completion:(id /* block */)completion;
- (void)_showAlertForContactlessInterfaceSuppression;
- (void)_acquireContactlessInterfaceSuppressionAssertion:(id)assertion handler:(id /* block */)handler;
- (void)_acquireAssertion:(id)assertion handler:(id /* block */)handler;
- (void)_addRequestForAssertion:(id)assertion handler:(id /* block */)handler;
- (void)_cancelPendingAssertionRequest:(id)request;
- (void)_processPendingAssertionRequests;
- (void)assertionRequestDidTimeout:(id)timeout;
- (void)invalidateAllAssertions;
- (void)invalidateAssertionsForBackgroundApplicationState;
- (id)assertionsOfType:(unsigned long long)type;
- (BOOL)hasAssertionsOfType:(unsigned long long)type;
- (void)processPendingAssertionRequests;
- (void)cancelPendingAssertionRequests;
@end

#endif /* PDAssertionCoordinator_h */