//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKAppleIDAuthenticationContextManager_h
#define AKAppleIDAuthenticationContextManager_h
@import Foundation;

#include "AKAppleIDAuthenticationClientProtocol-Protocol.h"
#include "AKAppleIDAuthenticationController.h"
#include "AKAppleIDAuthenticationDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface AKAppleIDAuthenticationContextManager : NSObject<AKAppleIDAuthenticationClientProtocol> {
  /* instance variables */
  NSMutableDictionary *_authContextsByUUID;
  AKAppleIDAuthenticationController *_authController;
  NSObject<OS_dispatch_queue> *_authContextsQueue;
}

@property (weak, nonatomic) NSObject<AKAppleIDAuthenticationDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAuthenticationController:(id)controller;
- (id)registerContext:(id)context;
- (void)unregisterContext:(id)context;
- (void)shouldContinueWithAuthenticationResults:(id)results error:(id)error forContextID:(id)id completion:(id /* block */)completion;
- (void)presentKeepUsingUIForContext:(id)context appleID:(id)id completion:(id /* block */)completion;
- (void)dismissKeepUsingUIForContext:(id)context withCompletion:(id /* block */)completion;
- (void)presentBasicLoginUIForContext:(id)context completion:(id /* block */)completion;
- (void)dismissBasicLoginUIForContext:(id)context completion:(id /* block */)completion;
- (void)presentLoginAlertForContext:(id)context withError:(id)error title:(id)title message:(id)message completion:(id /* block */)completion;
- (void)presentSecondFactorUIForContext:(id)context completion:(id /* block */)completion;
- (void)dismissSecondFactorUIForContext:(id)context completion:(id /* block */)completion;
- (void)presentSecondFactorAlertForContext:(id)context withError:(id)error title:(id)title message:(id)message completion:(id /* block */)completion;
- (void)presentServerProvidedUIForContext:(id)context withConfiguration:(id)configuration completion:(id /* block */)completion;
- (void)dismissServerProvidedUIForContext:(id)context completion:(id /* block */)completion;
- (void)presentNativeRecoveryUIForContext:(id)context recoveryContext:(id)context completion:(id /* block */)completion;
- (void)dismissNativeRecoveryUIForContext:(id)context completion:(id /* block */)completion;
- (void)presentBiometricOrPasscodeValidationForContext:(id)context completion:(id /* block */)completion;
- (void)launchOutOfProcessAuthentication:(id)authentication surrogateID:(id)id withErrorHandler:(id /* block */)handler;
- (void)presentFidoAuthForContext:(id)context fidoContext:(id)context completion:(id /* block */)completion;
- (void)presentProximityBroadcastUIForContext:(id)context completion:(id /* block */)completion;
- (void)presentProximityPairingUIForContext:(id)context verificationCode:(id)code completion:(id /* block */)completion;
- (void)presentProximityPinCodeUIForContext:(id)context completion:(id /* block */)completion;
- (void)activateProximitySession:(id)session context:(id)context completion:(id /* block */)completion;
- (void)dismissProximityPairingUIForContext:(id)context completion:(id /* block */)completion;
- (void)showProximityErrorForContext:(id)context completion:(id /* block */)completion;
- (void)provisionAnisetteForContext:(id)context withCompletion:(id /* block */)completion;
- (void)syncAnisetteForContext:(id)context withSIMData:(id)simdata completion:(id /* block */)completion;
- (void)eraseAnisetteForContext:(id)context withCompletion:(id /* block */)completion;
- (void)fetchAnisetteDataForContext:(id)context provisionIfNecessary:(BOOL)necessary withCompletion:(id /* block */)completion;
- (void)legacyAnisetteDataForContext:(id)context DSID:(id)dsid withCompletion:(id /* block */)completion;
- (void)fetchPeerAttestationDataForContext:(id)context withRequest:(id)request completion:(id /* block */)completion;
- (id)_clientSideContextForServerContext:(id)context;
@end

#endif /* AKAppleIDAuthenticationContextManager_h */