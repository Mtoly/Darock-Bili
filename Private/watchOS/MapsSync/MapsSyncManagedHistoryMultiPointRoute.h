//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 112.42.9.28.5
//
#ifndef MapsSyncManagedHistoryMultiPointRoute_h
#define MapsSyncManagedHistoryMultiPointRoute_h
@import Foundation;

#include "MapsSyncManagedHistoryItem.h"

@class NSData, NSNumber, NSString;

@interface MapsSyncManagedHistoryMultiPointRoute : MapsSyncManagedHistoryItem // (Swift)

@property (nonatomic, @dynamic) BOOL navigationInterrupted;
@property (nonatomic, @dynamic) short routeProgressWaypointIndex;
@property (nonatomic, @dynamic, copy) NSData *routeRequestStorage;
@property (nonatomic, @dynamic, copy) NSData *sharedETAData;
@property (nonatomic, @dynamic) short type;
@property (nonatomic, @dynamic, copy) NSString *vehicleIdentifier;
@property (nonatomic, @dynamic, retain) NSNumber *requiredCharge;

/* class methods */
+ (Class)wrapperClass;

/* instance methods */
- (id)initWithEntity:(id)entity insertIntoManagedObjectContext:(id)context;
@end

#endif /* MapsSyncManagedHistoryMultiPointRoute_h */