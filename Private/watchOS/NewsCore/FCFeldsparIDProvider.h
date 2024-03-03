//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCFeldsparIDProvider_h
#define FCFeldsparIDProvider_h
@import Foundation;

#include "FCFeldsparIDProvider-Protocol.h"
#include "FCUserInfo.h"
#include "FCUserInfoObserving-Protocol.h"

@class NSHashTable, NSString;

@interface FCFeldsparIDProvider : NSObject<FCUserInfoObserving, FCFeldsparIDProvider>

@property (retain, nonatomic) FCUserInfo *userInfo;
@property (copy, nonatomic) NSString *feldsparID;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)registerUserInfo:(id)info;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)userInfoDidChangeFeldsparID:(id)id fromCloud:(BOOL)cloud;
- (void)_updateFeldsparID:(id)id;
@end

#endif /* FCFeldsparIDProvider_h */