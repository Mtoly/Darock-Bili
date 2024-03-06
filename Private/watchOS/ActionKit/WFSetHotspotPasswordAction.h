//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFSetHotspotPasswordAction_h
#define WFSetHotspotPasswordAction_h
@import Foundation;

#include "WFAction.h"

@class NSString;

@interface WFSetHotspotPasswordAction : WFAction // (Swift)

@property (nonatomic, readonly) NSString *descriptionNote;

/* instance methods */
- (id)contentDestinationWithError:(id *)error;
- (id)smartPromptWithContentDescription:(id)description contentDestination:(id)destination workflowName:(id)name;
- (id)initWithIdentifier:(id)identifier definition:(id)definition serializedParameters:(id)parameters;
- (id)init;
@end

#endif /* WFSetHotspotPasswordAction_h */