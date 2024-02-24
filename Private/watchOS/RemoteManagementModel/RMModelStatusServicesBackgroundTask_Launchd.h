//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMModelStatusServicesBackgroundTask_Launchd_h
#define RMModelStatusServicesBackgroundTask_Launchd_h
@import Foundation;

#include "RMModelPayloadBase.h"

@class NSArray, NSString;

@interface RMModelStatusServicesBackgroundTask_Launchd : RMModelPayloadBase

@property (copy, nonatomic) NSString *statusLabel;
@property (copy, nonatomic) NSString *statusProgram;
@property (copy, nonatomic) NSArray *statusProgramArguments;
@property (copy, nonatomic) NSString *statusChecksum;

/* class methods */
+ (id)allowedStatusKeys;
+ (id)buildWithLabel:(id)label program:(id)program programArguments:(id)arguments checksum:(id)checksum;
+ (id)buildRequiredOnlyWithLabel:(id)label program:(id)program checksum:(id)checksum;

/* instance methods */
- (BOOL)loadFromDictionary:(id)dictionary serializationType:(short)type error:(id *)error;
- (id)serializeWithType:(short)type;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* RMModelStatusServicesBackgroundTask_Launchd_h */