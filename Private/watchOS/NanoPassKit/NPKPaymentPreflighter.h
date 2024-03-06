//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPaymentPreflighter_h
#define NPKPaymentPreflighter_h
@import Foundation;

#include "NPKCompanionAgentConnection.h"
#include "PKPaymentWebServiceTargetDeviceProtocol-Protocol.h"

@class NSDate, NSSManager, PKPaymentWebService, PUConnection;

@interface NPKPaymentPreflighter : NSObject

@property (retain, nonatomic) PUConnection *passcodeConnection;
@property (retain, nonatomic) NSSManager *systemSettingsManager;
@property (nonatomic) BOOL checkedWatchPasscodeAndUnlockedStatus;
@property (nonatomic) BOOL checkedCompanioniCloudStatus;
@property (nonatomic) BOOL checkedWatchiCloudStatus;
@property (nonatomic) BOOL checkedWristDetectionStatus;
@property (nonatomic) BOOL authRandomSetIfNecessary;
@property (nonatomic) BOOL watchConnected;
@property (nonatomic) BOOL spaceAvailableOnSecureElement;
@property (nonatomic) BOOL needsPasscode;
@property (nonatomic) BOOL needsUnlock;
@property (nonatomic) BOOL needsCompanioniCloudAccount;
@property (nonatomic) BOOL needsWatchiCloudAccount;
@property (nonatomic) BOOL needsWristDetection;
@property (nonatomic) BOOL needsSetAuthRandom;
@property (copy, nonatomic) id /* block */ preflightCompletionHandler;
@property (retain, nonatomic) PKPaymentWebService *webService;
@property (weak, nonatomic) NSObject<PKPaymentWebServiceTargetDeviceProtocol> *targetDevice;
@property (retain, nonatomic) NPKCompanionAgentConnection *companionAgentConnection;
@property (nonatomic) BOOL preflighting;
@property (retain, nonatomic) NSDate *watchPasscodeAndUnlockedQueryDate;

/* class methods */
+ (BOOL)watchConnected;

/* instance methods */
- (id)initWithWebService:(id)service targetDevice:(id)device companionAgentConnection:(id)connection;
- (void)addCardPreflightWithCompletion:(id /* block */)completion;
- (void)transferToCompanionPreflightWithCompletion:(id /* block */)completion;
- (void)addSecureElementPassPreflightWithCompletion:(id /* block */)completion;
- (void)addBiometricPassPreflightWithCompletion:(id /* block */)completion;
- (void)_checkSpaceAvailableOnSecureElement;
- (void)_checkWatchConnected;
- (void)_checkCompanioniCloudAccount;
- (void)_checkWatchiCloudAccount;
- (void)_checkPasscodeEnabledAndUnlockedState;
- (void)_checkPasscodeEnabledState;
- (void)_checkPasscodeEnabledAndUnlockedStateRequiringPasscode:(BOOL)passcode requiringUnlock:(BOOL)unlock;
- (void)_checkWristDetectEnabledState;
- (void)_setAuthRandomIfNecessary;
- (void)_finishPresentingSetupControllerIfReadyWithSuccess:(BOOL)success error:(id)error;
- (id)_errorForWristDetectNeeded;
- (id)_errorForGizmoAccountNeeded;
- (id)_errorForPasscodeNeeded;
- (id)_errorForUnlockNeeded;
- (id)_errorForCompanionAccountNeeded;
- (id)_errorForGenericIssue;
- (id)_errorForConnectionIssue;
- (BOOL)isPreflighting;
@end

#endif /* NPKPaymentPreflighter_h */