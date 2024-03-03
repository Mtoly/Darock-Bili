//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAppleAccessoryPairingControllerDataSource_Protocol_h
#define HMDAppleAccessoryPairingControllerDataSource_Protocol_h
@import Foundation;

#include "HMCContextProvider.h"
#include "HMDAppleAccessoryPairingControllerDataSource-Protocol.h"
#include "HMDBulletinBoard.h"

@class HAPPairingIdentity, NSArray, NSNotificationCenter, NSString;

@protocol HMDAppleAccessoryPairingControllerDataSource <NSObject>

@property (readonly, nonatomic) NSArray *inProgressPairingAccessories;
@property (readonly, nonatomic) HAPPairingIdentity *hh1ControllerIdentity;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) HMDBulletinBoard *bulletinBoard;

/* instance methods */
- (id)timerWithInterval:(double)interval options:(unsigned long long)options;
- (void)updatePairingAccessoryState:(id)state;
- (void)deletePairingAccessoryState:(id)state;
- (id)deviceForIdentifier:(id)identifier;
@end

#endif /* HMDAppleAccessoryPairingControllerDataSource_Protocol_h */