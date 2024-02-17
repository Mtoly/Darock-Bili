//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHUISMutableWatchComplicationsWidgetSceneSettings_h
#define CHUISMutableWatchComplicationsWidgetSceneSettings_h
@import Foundation;

#include "CHUISMutableWidgetSceneSettings.h"

@class CHSWatchComplicationsCurvedLabelMetrics;

@interface CHUISMutableWatchComplicationsWidgetSceneSettings : CHUISMutableWidgetSceneSettings

@property (nonatomic) unsigned long long cornerPosition;
@property (copy, nonatomic) CHSWatchComplicationsCurvedLabelMetrics *curvedLabelMetrics;
@property (nonatomic) struct CGPoint { double x0; double x1; } bezelContentCenter;
@property (nonatomic) BOOL includeAccessoryViews;
@property (nonatomic) BOOL generateSnapshotMetadata;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)keyDescriptionForSetting:(unsigned long long)setting;
- (id)valueDescriptionForFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
@end

#endif /* CHUISMutableWatchComplicationsWidgetSceneSettings_h */