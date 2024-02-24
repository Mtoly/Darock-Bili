//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDBackingStoreCacheZone_h
#define HMDBackingStoreCacheZone_h
@import Foundation;

#include "HMFObject.h"

@class NSArray, NSMutableArray, NSString;

@interface HMDBackingStoreCacheZone : HMFObject

@property (retain) NSMutableArray *actualGroups;
@property (readonly) long long zoneID;
@property (readonly) NSString *zoneName;
@property (readonly) NSArray *groups;

/* instance methods */
- (id)initWithZoneID:(long long)id name:(id)name;
- (id)dumpDebug;
@end

#endif /* HMDBackingStoreCacheZone_h */