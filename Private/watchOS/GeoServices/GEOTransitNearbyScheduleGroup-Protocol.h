//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOTransitNearbyScheduleGroup_Protocol_h
#define GEOTransitNearbyScheduleGroup_Protocol_h
@import Foundation;

@protocol GEOTransitNearbyScheduleGroup <NSObject>

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *pinnedDisplayName;
@property (readonly, nonatomic) NSArray *lineCells;
@property (readonly, nonatomic) BOOL hasWalkingDetails;
@property (readonly, nonatomic) unsigned long long minWalkingTime;
@property (readonly, nonatomic) unsigned long long maxWalkingTime;
@property (readonly, nonatomic) unsigned long long minWalkingDistance;
@property (readonly, nonatomic) unsigned long long maxWalkingDistance;
@property (readonly, nonatomic) long long groupType;
@property (readonly, nonatomic) NSArray *incidents;

@end

#endif /* GEOTransitNearbyScheduleGroup_Protocol_h */