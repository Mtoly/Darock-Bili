//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFTextComponentsAction_h
#define WFTextComponentsAction_h
@import Foundation;

#include "WFHandleCustomIntentAction.h"

@interface WFTextComponentsAction : WFHandleCustomIntentAction
/* instance methods */
- (id)appResource;
- (BOOL)shouldBeSuggestedAfterAction:(id)action inWorkflow:(id)workflow;
@end

#endif /* WFTextComponentsAction_h */