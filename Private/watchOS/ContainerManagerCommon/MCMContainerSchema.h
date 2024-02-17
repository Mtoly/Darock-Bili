//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMContainerSchema_h
#define MCMContainerSchema_h
@import Foundation;

#include "MCMContainerSchemaContext.h"
#include "MCMMetadataMinimal-Protocol.h"

@class NSNumber;

@interface MCMContainerSchema : NSObject

@property (readonly, nonatomic) NSObject<MCMMetadataMinimal> *metadata;
@property (readonly, nonatomic) MCMContainerSchemaContext *context;
@property (readonly, nonatomic) NSNumber *latestSchemaVersion;

/* class methods */
+ (BOOL)schemaIsUpToDateForIdentifier:(id)identifier containerClass:(unsigned long long)class currentSchemaVersion:(id)version latestSchemaVersion:(id *)version;
+ (id)containerSchemaWithMetadata:(id)metadata dataProtectionClass:(int)class libraryRepair:(id)repair;

/* instance methods */
- (id)initWithMetadata:(id)metadata dataProtectionClass:(int)class libraryRepair:(id)repair;
- (BOOL)writeSchemaFromVersion:(id)version toTargetVersion:(id)version error:(id *)error;
- (BOOL)writeSchemaToTargetVersion:(id)version error:(id *)error;
- (id)_actionArgsAfterInterpolationOnActionArgs:(id)args replacements:(id)replacements;
- (id)_interpolationReplacements;
- (id)_actionsFromVersion:(id)version toTargetVersion:(id)version context:(id)context;
- (BOOL)_executeActions:(id)actions error:(id *)error;
@end

#endif /* MCMContainerSchema_h */