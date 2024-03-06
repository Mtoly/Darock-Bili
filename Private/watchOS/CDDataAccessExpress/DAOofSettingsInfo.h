//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef DAOofSettingsInfo_h
#define DAOofSettingsInfo_h
@import Foundation;

#include "DAOofParams.h"

@class NSString;
@protocol DAOofResponseDelegate;

@interface DAOofSettingsInfo : DAOofParams

@property (retain, nonatomic) NSString *requestID;
@property (weak, nonatomic) NSObject<DAOofResponseDelegate> *consumer;

/* instance methods */
@end

#endif /* DAOofSettingsInfo_h */