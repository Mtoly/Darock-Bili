//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIFocusEnvironmentPreferenceEnumerationContext_Protocol_h
#define _UIFocusEnvironmentPreferenceEnumerationContext_Protocol_h
@import Foundation;

#include "UIFocusEnvironment-Protocol.h"
#include "UIFocusSystem.h"
#include "_UIDebugLogStack.h"
#include "_UIFocusEnvironmentPreferenceEnumerationContext-Protocol.h"
#include "_UIFocusEnvironmentPreferenceEnumerationContextDelegate-Protocol.h"

@class NSArray, NSHashTable, NSMapTable, NSMutableArray, NSString;

@protocol _UIFocusEnvironmentPreferenceEnumerationContext <NSObject>

@property (readonly, nonatomic) NSObject<UIFocusEnvironment> *environment;
@property (readonly, nonatomic) BOOL isPrimaryPreference;
@property (readonly, nonatomic) BOOL isLeafPreference;
@property (readonly, nonatomic) BOOL preferredByItself;
@property (readonly, nonatomic) BOOL prefersNothingFocused;
@property (readonly, nonatomic) NSObject<UIFocusEnvironment> *preferringEnvironment;
@property (readonly, nonatomic) NSArray *preferredEnvironments;
@property (readonly, nonatomic) _UIDebugLogStack *debugStack;

/* instance methods */
- (BOOL)isPreferredByItself;
@end

#endif /* _UIFocusEnvironmentPreferenceEnumerationContext_Protocol_h */