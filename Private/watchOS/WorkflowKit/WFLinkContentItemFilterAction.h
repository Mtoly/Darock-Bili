//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFLinkContentItemFilterAction_h
#define WFLinkContentItemFilterAction_h
@import Foundation;

#include "WFContentItemFilterAction.h"
#include "WFLinkActionProtocol-Protocol.h"

@class INAppIntentDescriptor, LNEntityMetadata, LNFullyQualifiedActionIdentifier, LNMetadataProvider, LNQueryMetadata, NSDictionary, NSString;

@interface WFLinkContentItemFilterAction : WFContentItemFilterAction<WFLinkActionProtocol> {
  /* instance variables */
  NSDictionary *_outputDictionary;
  LNMetadataProvider *_metadataProvider;
  NSDictionary *_propertiesByPropertyIdentifier;
}

@property (readonly, nonatomic) INAppIntentDescriptor *appIntentDescriptor;
@property (readonly, copy, nonatomic) LNQueryMetadata *queryMetadata;
@property (readonly, copy, nonatomic) LNEntityMetadata *entityMetadata;
@property (readonly, nonatomic) LNFullyQualifiedActionIdentifier *fullyQualifiedLinkActionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithIdentifier:(id)identifier queryMetadata:(id)metadata entityMetadata:(id)metadata definition:(id)definition serializedParameters:(id)parameters appIntentDescriptor:(id)descriptor fullyQualifiedActionIdentifier:(id)identifier;
- (id)copyWithSerializedParameters:(id)parameters;
- (id)name;
- (id)displayableAppDescriptor;
- (id)propertiesByPropertyIdentifier;
- (void)runAsynchronouslyWithInput:(id)input;
- (void)finishRunningWithError:(id)error;
- (BOOL)isInMemoryFindAction;
- (id)metadataProvider;
- (void)finishRunningWithOutput:(id)output randomSortOrder:(BOOL)order error:(id)error;
- (id)propertyQuery;
- (id)sortingOptionsWithRandomSortOrder:(BOOL *)order;
- (id)createStateForParameter:(id)parameter fromSerializedRepresentation:(id)representation;
- (id)linkValueTypes;
- (id)outputDictionary;
- (id)descriptionSummary;
- (id)localizedKeywords;
- (id)localizedSubcategoryForCategory:(id)category;
- (id)entityMetadataForIdentifier:(id)identifier;
@end

#endif /* WFLinkContentItemFilterAction_h */