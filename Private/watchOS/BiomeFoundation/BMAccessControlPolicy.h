//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMAccessControlPolicy_h
#define BMAccessControlPolicy_h
@import Foundation;

#include "BMAccessControlPolicy.h"
#include "BMProcess.h"

@class NSMutableDictionary, NSString;

@interface BMAccessControlPolicy : NSObject {
  /* instance variables */
  BMAccessControlPolicy *_onBehalfOf;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSMutableDictionary *_authorizedResources;
}

@property (readonly) BOOL allowsConnectionToWriteService;
@property (readonly, nonatomic) BMProcess *process;
@property (readonly, nonatomic) NSString *useCase;
@property (readonly, nonatomic) NSString *descriptionOfProcessAndUseCase;
@property (readonly) BOOL allowsAccessToSync;
@property (readonly) BOOL allowsAccessToFlexibleStorage;
@property (readonly) BOOL allowsConnectionToComputePublisherService;
@property (readonly) BOOL allowsConnectionToComputeSourceService;
@property (readonly) BOOL allowsProxyingBiomeEndpoint;
@property (readonly) BOOL allowsAccessToContextSync;

/* class methods */
+ (id)policyForProcess:(id)process useCase:(id)case;
+ (id)policyForProcess:(id)process onBehalfOfProcessWithAccessControlPolicy:(id)policy;
+ (id)contextSyncMapping;
+ (BOOL)process:(id)process canActOnBehalfOfProcess:(id)process;

/* instance methods */
- (BOOL)allowsAccessToWriteServiceForStream:(id)stream ofUser:(unsigned int)user;
- (id)init;
- (id)initWithProcess:(id)process useCase:(id)case;
- (BOOL)allowsConnectionToAccessServiceWithDomain:(unsigned long long)domain;
- (BOOL)allowsAccessToStream:(id)stream withMode:(unsigned long long)mode;
- (BOOL)allowsAccessToDatabase:(id)database withMode:(unsigned long long)mode;
- (BOOL)allowsAccessToView:(id)view withMode:(unsigned long long)mode;
- (BOOL)allowsAccessToResource:(id)resource withMode:(unsigned long long)mode;
- (id)authorizedResources;
- (id)explicitlyAuthorizedResourcesOfType:(unsigned long long)type withAccessMode:(unsigned long long)mode;
- (unsigned long long)allowedModeForStream:(id)stream;
- (BOOL)allowsComputePublisherAccessToStreams:(id)streams;
- (BOOL)allowsComputeSourceAccessToStreams:(id)streams;
- (BOOL)allowsAccessToClientCompute:(id)compute;
- (void)_warnAboutInternalEntitlement:(id)entitlement streamIdentifier:(id)identifier;
- (BOOL)allowsAccessToContextSyncStreams:(id)streams;
@end

#endif /* BMAccessControlPolicy_h */