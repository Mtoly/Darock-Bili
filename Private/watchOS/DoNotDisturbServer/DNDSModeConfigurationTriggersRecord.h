//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSModeConfigurationTriggersRecord_h
#define DNDSModeConfigurationTriggersRecord_h
@import Foundation;

#include "DNDSPartitionedBackingStoreRecord-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSArray, NSString;

@interface DNDSModeConfigurationTriggersRecord : NSObject<NSCopying, NSMutableCopying, DNDSPartitionedBackingStoreRecord>

@property (readonly, copy, nonatomic) NSArray *triggers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)migrateDictionaryRepresentation:(id)representation fromVersionNumber:(unsigned long long)number toVersionNumber:(unsigned long long)number;
+ (id)newWithDictionaryRepresentation:(id)representation context:(id)context;
+ (id)newWithDictionaryRepresentation:(id)representation partitionedDictionaryRepresentation:(id)representation context:(id)context;

/* instance methods */
- (id)init;
- (id)initWithTriggers:(id)triggers;
- (id)_initWithTriggers:(id)triggers;
- (id)_initWithRecord:(id)record;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)dictionaryRepresentationWithContext:(id)context;
@end

#endif /* DNDSModeConfigurationTriggersRecord_h */