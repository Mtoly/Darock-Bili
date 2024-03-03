//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SHSheetUIServiceClientContext_h
#define SHSheetUIServiceClientContext_h
@import Foundation;

#include "BSXPCSecureCoding-Protocol.h"

@class NSArray, NSAttributedString, NSDictionary, NSNumber, NSString, RBSProcessIdentity, UIColor;

@interface SHSheetUIServiceClientContext : NSObject<BSXPCSecureCoding>

@property (readonly, copy, nonatomic) NSArray *serializedMetadataValues;
@property (readonly, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) BOOL configureForCloudSharing;
@property (readonly, nonatomic) BOOL configureForPhotosEdit;
@property (readonly, nonatomic) BOOL hideHeaderView;
@property (readonly, nonatomic) BOOL isSharingExpanded;
@property (readonly, nonatomic) BOOL showHeroActionsHorizontally;
@property (readonly, copy, nonatomic) NSString *topContentSectionText;
@property (readonly, copy, nonatomic) NSArray *heroActionActivityTypes;
@property (readonly, copy, nonatomic) NSArray *excludedActivityTypes;
@property (readonly, copy, nonatomic) NSArray *applicationActivityTypes;
@property (readonly, copy, nonatomic) NSArray *activityConfigurations;
@property (readonly, copy, nonatomic) NSDictionary *activitiesByUUID;
@property (readonly, copy, nonatomic) NSArray *metadataValues;
@property (readonly, nonatomic) BOOL isLoadingMetadata;
@property (readonly, copy, nonatomic) NSArray *urlRequests;
@property (readonly, copy, nonatomic) NSArray *urlSandboxExtensions;
@property (readonly, nonatomic) BOOL showOptions;
@property (readonly, copy, nonatomic) NSString *customOptionsTitle;
@property (readonly, nonatomic) BOOL showCustomHeaderButton;
@property (readonly, nonatomic) BOOL showHeaderSpecialization;
@property (readonly, copy, nonatomic) NSAttributedString *customHeaderButtonTitle;
@property (readonly, nonatomic) UIColor *customHeaderButtonColor;
@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) BOOL supportsCollaboration;
@property (readonly, nonatomic) BOOL supportsSendCopy;
@property (readonly, nonatomic) BOOL isCollaborative;
@property (readonly, nonatomic) NSString *collaborationModeTitle;
@property (readonly, nonatomic) RBSProcessIdentity *processIdentity;
@property (readonly, nonatomic) BOOL wantsCustomScene;
@property (readonly, nonatomic) NSNumber *customViewControllerVerticalInsetWrapper;
@property (readonly, nonatomic) NSNumber *customViewControllerSectionHeightWrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)_deserializeMetadatas:(id)metadatas;

/* instance methods */
- (id)initWithSession:(id)session;
- (BOOL)isEqual:(id)equal;
- (void)encodeWithBSXPCCoder:(id)bsxpccoder;
- (id)initWithBSXPCCoder:(id)bsxpccoder;
@end

#endif /* SHSheetUIServiceClientContext_h */