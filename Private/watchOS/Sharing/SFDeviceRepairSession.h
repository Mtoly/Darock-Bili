//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFDeviceRepairSession_h
#define SFDeviceRepairSession_h
@import Foundation;

#include "SFDevice.h"
#include "SFDeviceOperationCDPSetup.h"
#include "SFDeviceOperationWiFiSetup.h"
#include "SFSession.h"

@class NSString, UIViewController;
@protocol OS_dispatch_queue;

@interface SFDeviceRepairSession : NSObject {
  /* instance variables */
  BOOL _activateCalled;
  BOOL _invalidateCalled;
  unsigned long long _startTicks;
  int _preflightWiFiEarlyState;
  int _preflightWiFiState;
  SFSession *_sfSession;
  int _sfSessionState;
  unsigned long long _peerFeatureFlags;
  NSString *_peerSSID;
  unsigned long long _peerProblemFlags;
  int _pairVerifyState;
  unsigned long long _pairVerifyType;
  BOOL _sessionSecured;
  int _getProblemsState;
  unsigned long long _problemFlags;
  NSString *_peerOSBuild;
  BOOL _cdpEnabled;
  SFDeviceOperationCDPSetup *_cdpSetupOperation;
  double _cdpSetupSecs;
  int _cdpState;
  SFDeviceOperationWiFiSetup *_wifiSetupOperation;
  int _wifiSetupState;
  double _wifiSetupSecs;
  BOOL _wifiIsCaptive;
  int _finishState;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, copy, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (nonatomic) unsigned int repairFlags;
@property (nonatomic) unsigned long long triggerMs;
@property (nonatomic) BOOL disableSilentAuth;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_cleanup;
- (void)activate;
- (void)invalidate;
- (void)_reportError:(id)error;
- (void)_run;
- (int)_runPreflightWiFiEarly;
- (int)_runPreflightWiFiFull;
- (int)_runSFSessionStart;
- (int)_runPairVerify;
- (int)_runGetProblems;
- (int)_runWiFiSetup;
- (int)_runCDPSetup;
- (int)_runFinish;
@end

#endif /* SFDeviceRepairSession_h */