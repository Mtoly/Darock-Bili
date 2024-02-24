//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 112.42.9.28.5
//
#ifndef MapsSyncManagedIncidentReport_h
#define MapsSyncManagedIncidentReport_h
@import Foundation;

#include "NSManagedObject.h"

@class NSDate, NSString, NSUUID;

@interface MapsSyncManagedIncidentReport : NSManagedObject // (Swift)

@property (nonatomic, @dynamic, copy) NSDate *createTime;
@property (nonatomic, @dynamic, copy) NSUUID *identifier;
@property (nonatomic, @dynamic, copy) NSDate *modificationTime;
@property (nonatomic, @dynamic) long long positionIndex;
@property (nonatomic, @dynamic) short type;
@property (nonatomic, @dynamic, copy) NSString *countryCode;

/* class methods */
+ (Class)wrapperClass;

/* instance methods */
- (id)initWithEntity:(id)entity insertIntoManagedObjectContext:(id)context;
@end

#endif /* MapsSyncManagedIncidentReport_h */