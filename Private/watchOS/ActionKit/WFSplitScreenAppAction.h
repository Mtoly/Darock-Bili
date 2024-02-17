//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFSplitScreenAppAction_h
#define WFSplitScreenAppAction_h
@import Foundation;

#include "WFAction.h"

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface WFSplitScreenAppAction : WFAction

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *leftWindowsToWindowID;
@property (retain, nonatomic) NSMutableDictionary *rightWindowsToWindowID;

/* instance methods */
- (void)runAsynchronouslyWithInput:(id)input;
- (id)disabledOnPlatforms;
@end

#endif /* WFSplitScreenAppAction_h */