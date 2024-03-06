//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFLinkActionDynamicOptionsParameterDefinition_h
#define WFLinkActionDynamicOptionsParameterDefinition_h
@import Foundation;

#include "WFLinkActionParameterDefinition.h"

@interface WFLinkActionDynamicOptionsParameterDefinition : WFLinkActionParameterDefinition
/* instance methods */
- (id)initWithParameterMetadata:(id)metadata;
- (Class)parameterClass;
- (id)defaultSerializedRepresentationFromParameterMetadataDefaultValue:(id)value;
- (id)localizedTitleForLinkValue:(id)value;
- (id)linkValueFromParameterState:(id)state;
- (void)getLinkValueFromProcessedParameterValue:(id)value parameterState:(id)state permissionRequestor:(id)requestor completionHandler:(id /* block */)handler;
- (id)parameterStateFromLinkValue:(id)value;
@end

#endif /* WFLinkActionDynamicOptionsParameterDefinition_h */