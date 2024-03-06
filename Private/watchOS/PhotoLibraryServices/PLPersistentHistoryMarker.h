//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLPersistentHistoryMarker_h
#define PLPersistentHistoryMarker_h
@import Foundation;

#include "PLPersistentHistoryMarkerOverrides-Protocol.h"

@class NSString;

@interface PLPersistentHistoryMarker : NSObject<PLPersistentHistoryMarkerOverrides>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;

/* class methods */
+ (id)markerWithToken:(id)token;
+ (id)markerWithDate:(id)date;
+ (id)markerWithTransaction:(id)transaction;

/* instance methods */
- (id)overrride_changeRequestForFetching;
- (id)overrride_shortDescription;
- (id)changeRequestForFetching;
@end

#endif /* PLPersistentHistoryMarker_h */