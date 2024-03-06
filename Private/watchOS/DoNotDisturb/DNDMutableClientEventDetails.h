//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDMutableClientEventDetails_h
#define DNDMutableClientEventDetails_h
@import Foundation;

#include "DNDClientEventDetails.h"
#include "DNDContactHandle.h"

@class NSString;

@interface DNDMutableClientEventDetails : DNDClientEventDetails

@property (@dynamic, nonatomic) BOOL notifyAnyway;
@property (@dynamic, nonatomic) unsigned long long behavior;
@property (copy, @dynamic, nonatomic) NSString *identifier;
@property (copy, @dynamic, nonatomic) NSString *bundleIdentifier;
@property (@dynamic, nonatomic) unsigned long long type;
@property (@dynamic, nonatomic) unsigned long long urgency;
@property (copy, @dynamic, nonatomic) DNDContactHandle *sender;
@property (copy, @dynamic, nonatomic) NSString *threadIdentifier;
@property (copy, @dynamic, nonatomic) NSString *filterCriteria;
@property (@dynamic, nonatomic) BOOL shouldAlwaysInterrupt;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* DNDMutableClientEventDetails_h */