//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCompositeSetting_h
#define HMDCompositeSetting_h
@import Foundation;

#include "HMFObject.h"
#include "HMDCompositeSettingIsEqualValueImplementing-Protocol.h"
#include "HMFLogging-Protocol.h"

@class HMFVersion, NSString;

@interface HMDCompositeSetting : HMFObject<HMDCompositeSettingIsEqualValueImplementing, HMFLogging>

@property (readonly, copy) HMFVersion *readVersion;
@property (readonly, copy) HMFVersion *writeVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithReadVersion:(id)version writeVersion:(id)version;
- (BOOL)isEqual:(id)equal;
- (id)attributeDescriptions;
- (BOOL)isEqualValue:(id)value;
@end

#endif /* HMDCompositeSetting_h */