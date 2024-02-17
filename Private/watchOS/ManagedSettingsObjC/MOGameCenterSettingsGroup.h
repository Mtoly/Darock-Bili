//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 140.0.0.0.0
//
#ifndef MOGameCenterSettingsGroup_h
#define MOGameCenterSettingsGroup_h
@import Foundation;

#include "MOSettingsGroup.h"

@class NSNumber;

@interface MOGameCenterSettingsGroup : MOSettingsGroup

@property (retain, nonatomic) NSNumber *denyAddingFriends;
@property (retain, nonatomic) NSNumber *denyMultiplayerGaming;

/* class methods */
+ (id)groupName;
+ (id)denyAddingFriendsMetadata;
+ (id)denyMultiplayerGamingMetadata;
@end

#endif /* MOGameCenterSettingsGroup_h */