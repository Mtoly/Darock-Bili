//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.0.0.0.0
//
#ifndef NBExclusionListManager_h
#define NBExclusionListManager_h
@import Foundation;

@class NSMutableDictionary, NSSet;

@interface NBExclusionListManager : NSObject

@property (nonatomic) BOOL hasReadConfiguration;
@property (retain, nonatomic) NSSet *excludedPerGizmoDomains;
@property (retain, nonatomic) NSMutableDictionary *excludedPerGizmoDomainSettings;

/* instance methods */
- (id)excludedKeysInDomain:(id)domain;
- (void)purgeCache;
- (void)readConfigurationIfNeeded;
@end

#endif /* NBExclusionListManager_h */