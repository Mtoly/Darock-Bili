//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIBackdropViewSettingsReplicator_h
#define _UIBackdropViewSettingsReplicator_h
@import Foundation;

#include "_UIBackdropViewSettings.h"

@interface _UIBackdropViewSettingsReplicator : _UIBackdropViewSettings
/* instance methods */
- (void)setDefaultValues;
- (BOOL)requiresBackdropLayer;
- (BOOL)isBackdropVisible;
@end

#endif /* _UIBackdropViewSettingsReplicator_h */