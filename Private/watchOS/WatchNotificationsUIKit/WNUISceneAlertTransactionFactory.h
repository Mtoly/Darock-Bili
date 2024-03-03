//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUISceneAlertTransactionFactory_h
#define WNUISceneAlertTransactionFactory_h
@import Foundation;

#include "WNUISceneTransactionFactory-Protocol.h"

@class NSString, PUICApplicationSceneTransitionContext;

@interface WNUISceneAlertTransactionFactory : NSObject<WNUISceneTransactionFactory>

@property (retain, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) PUICApplicationSceneTransitionContext *applicationSceneTransitionContext;
@property (retain, nonatomic) NSString *transactionIdentifier;
@property (retain, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) NSString *sceneIdentifier;
@property (readonly) NSString *infoPlistSceneIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithApplicationBundleIdentifier:(id)identifier;
- (void)destroyScene;
- (id)makeTransaction;
- (void)sceneCreated:(id)created;
@end

#endif /* WNUISceneAlertTransactionFactory_h */