//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.300.2.0.0
//
#ifndef HSPlayStatusUpdateResponse_h
#define HSPlayStatusUpdateResponse_h
@import Foundation;

#include "HSResponse.h"

@class NSDictionary;

@interface HSPlayStatusUpdateResponse : HSResponse

@property (nonatomic) unsigned int nextRevisionID;
@property (nonatomic) unsigned long long nowPlayingContainerID;
@property (nonatomic) unsigned long long nowPlayingContainerItemID;
@property (nonatomic) unsigned long long nowPlayingDatabaseID;
@property (nonatomic) unsigned long long nowPlayingItemID;
@property (copy, nonatomic) NSDictionary *playStatusInformation;

/* instance methods */
- (id)description;
@end

#endif /* HSPlayStatusUpdateResponse_h */