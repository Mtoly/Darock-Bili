//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUIAlertStackViewController_h
#define WNUIAlertStackViewController_h
@import Foundation;

#include "UIViewController.h"
#include "CSLPIButtonHandlerProtocol-Protocol.h"
#include "WNUIAlert.h"

@class NSArray, NSString;

@interface WNUIAlertStackViewController : UIViewController<CSLPIButtonHandlerProtocol>

@property (copy, nonatomic) NSArray *childAlertViewControllers;
@property (copy, nonatomic) NSArray *alerts;
@property (weak, nonatomic) NSObject<CSLPIButtonHandlerProtocol> *buttonHandlerDelegate;
@property (readonly, nonatomic) WNUIAlert *topActiveAlert;
@property (readonly, nonatomic) WNUIAlert *topActiveFullscreenAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (BOOL)canBecomeFirstResponder;
- (BOOL)handleButton:(unsigned long long)button eventType:(unsigned long long)type firstDownTime:(unsigned long long)time lastUpTime:(unsigned long long)time;
- (BOOL)_canAffectSensorActivityIndicatorAppearanceForAlert:(id)alert;
- (id)_viewControllerAffectingSensorActivityIndicatorAppearance;
- (BOOL)puic_canAffectSensorActivityIndicatorAppearance;
- (id)puic_preferredSensorActivityIndicatorPlacement;
- (long long)puic_preferredSensorActivityIndicatorTimeStyle;
- (id)puic_preferredSensorActivityIndicatorAttribution;
- (long long)puic_statusBarPlacement;
- (BOOL)prefersStatusBarHidden;
@end

#endif /* WNUIAlertStackViewController_h */