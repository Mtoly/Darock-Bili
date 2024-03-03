//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SASettingSetValueResponse_h
#define SASettingSetValueResponse_h
@import Foundation;

#include "SASettingResponse.h"
#include "SASettingEntity.h"
#include "SASettingSupplier-Protocol.h"

@class NSString;

@interface SASettingSetValueResponse : SASettingResponse<SASettingSupplier>

@property (retain, nonatomic) SASettingEntity *setting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)setValueResponse;
+ (id)setValueResponseWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
@end

#endif /* SASettingSetValueResponse_h */