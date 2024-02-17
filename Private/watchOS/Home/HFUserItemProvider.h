//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFUserItemProvider_h
#define HFUserItemProvider_h
@import Foundation;

#include "HFItemProvider.h"

@class HMHome, NSMutableSet;

@interface HFUserItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *userItems;
@property (copy, nonatomic) id /* block */ filter;
@property (nonatomic) BOOL includeCurrentUser;
@property (nonatomic) BOOL includeOtherUsers;
@property (nonatomic) unsigned long long nameStyle;
@property (readonly, nonatomic) HMHome *home;

/* instance methods */
- (id)init;
- (id)initWithHome:(id)home;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;
@end

#endif /* HFUserItemProvider_h */