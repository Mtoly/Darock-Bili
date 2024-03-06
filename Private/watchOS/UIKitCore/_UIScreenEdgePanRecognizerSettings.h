//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIScreenEdgePanRecognizerSettings_h
#define _UIScreenEdgePanRecognizerSettings_h
@import Foundation;

#include "_UISettings.h"
#include "_UIScreenEdgePanRecognizerCornerSettings.h"
#include "_UIScreenEdgePanRecognizerDwellSettings.h"
#include "_UIScreenEdgePanRecognizerEdgeSettings.h"

@class NSString;

@interface _UIScreenEdgePanRecognizerSettings : _UISettings

@property (copy, nonatomic) NSString *multitaskingGestureMode;
@property (copy, nonatomic) NSString *navigationGestureMode;
@property (retain, nonatomic) _UIScreenEdgePanRecognizerEdgeSettings *edgeSettings;
@property (retain, nonatomic) _UIScreenEdgePanRecognizerDwellSettings *dwellSettings;
@property (retain, nonatomic) _UIScreenEdgePanRecognizerCornerSettings *cornerSettings;

/* class methods */
+ (id)settingsControllerModule;

/* instance methods */
@end

#endif /* _UIScreenEdgePanRecognizerSettings_h */