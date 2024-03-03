//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSensorActivityApplicationStylePolicy_h
#define CSLSensorActivityApplicationStylePolicy_h
@import Foundation;

#include "CSLSensorActivityStylePolicy.h"
#include "CSLMainUIState.h"
#include "CSLSensorActivityDataProviding-Protocol.h"
#include "CSLSensorActivityIndicatorClientConfigurationObserver-Protocol.h"
#include "CSLSensorActivityIndicatorClientConfigurationProviding-Protocol.h"
#include "CSLSensorActivityLegacyDictationStylePolicy.h"
#include "CSLSensorActivityObserver-Protocol.h"
#include "CSLSensorActivityQuickBoardPublisher.h"
#include "CSLSensorActivityQuickBoardPublisherObserver-Protocol.h"
#include "CSLSensorActivityStylePolicyDelegate-Protocol.h"
#include "FBSceneObserver-Protocol.h"
#include "IOSSHLApplicationsProviding-Protocol.h"

@class FBScene, NSSet, NSString;

@interface CSLSensorActivityApplicationStylePolicy : CSLSensorActivityStylePolicy<CSLSensorActivityObserver, FBSceneObserver, CSLSensorActivityIndicatorClientConfigurationObserver, CSLSensorActivityQuickBoardPublisherObserver, CSLSensorActivityStylePolicyDelegate> {
  /* instance variables */
  FBScene *_observedScene;
  CSLMainUIState *_mainUIState;
  NSSet *_clientConfigurations;
  CSLSensorActivityLegacyDictationStylePolicy *_legacyDictationPolicy;
}

@property (readonly, weak, nonatomic) NSObject<CSLSensorActivityDataProviding> *dataProvider;
@property (readonly, weak, nonatomic) NSObject<IOSSHLApplicationsProviding> *applicationsProvider;
@property (readonly, weak, nonatomic) NSObject<CSLSensorActivityIndicatorClientConfigurationProviding> *clientConfigurationProvider;
@property (readonly, weak, nonatomic) CSLSensorActivityQuickBoardPublisher *quickBoardPublisher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDataProvider:(id)provider applicationsProvider:(id)provider clientConfigurationProvider:(id)provider quickBoardPublisher:(id)publisher state:(id)state;
- (void)dealloc;
- (void)updateForMainUIState:(id)uistate;
- (void)_reevaluateState;
- (void)_updateObservationForScene:(id)scene;
- (void)activityDidChangeForSensorActivityDataProvider:(id)provider;
- (void)scene:(id)scene didUpdateClientSettingsWithDiff:(id)diff oldClientSettings:(id)settings transitionContext:(id)context;
- (void)provider:(id)provider didUpdateClientConfigurations:(id)configurations;
- (void)dictationClient:(id)client didUpdatePublishedState:(id)state;
- (void)stylePolicyDidUpdate:(id)update;
@end

#endif /* CSLSensorActivityApplicationStylePolicy_h */