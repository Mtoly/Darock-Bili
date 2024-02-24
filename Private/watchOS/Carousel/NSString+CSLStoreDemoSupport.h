//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef NSString_CSLStoreDemoSupport_h
#define NSString_CSLStoreDemoSupport_h
@import Foundation;

#include "BLSBacklightStateObserving-Protocol.h"
#include "CSLChargingChangeObserver-Protocol.h"
#include "CSLIconPositionsStore.h"
#include "_TtP8Carousel27CSLStoreDemoAppNameObserver_-Protocol.h"

@class CSLPRFConcurrentObserverStore, CSLSEcoModeClient, NSString;
@protocol CSLStoreDemoAppNameProviding, OS_dispatch_queue;

@interface NSString (CSLStoreDemoSupport)
/* instance methods */
- (BOOL)fitsOnSingleLineOfWidth:(double)width withFont:(id)font;
- (BOOL)isSystemLocationIdentifier;
- (BOOL)isSetupAssistantBundleIdentifier;
- (BOOL)isDemoAppBundleIdentifier;
@end

#endif /* NSString_CSLStoreDemoSupport_h */