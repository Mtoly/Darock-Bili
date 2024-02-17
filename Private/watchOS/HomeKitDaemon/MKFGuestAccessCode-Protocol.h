//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef MKFGuestAccessCode_Protocol_h
#define MKFGuestAccessCode_Protocol_h
@import Foundation;

@protocol MKFGuestAccessCode <MKFHomeAccessCode, MKFGuestAccessCodePublicExtensions>

@property (copy, nonatomic) NSUUID *hh2ModelID;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *userUniqueIDForAccessories;
@property (readonly, retain, nonatomic) NSObject<MKFHome> *home;
@property (readonly, copy, nonatomic) MKFGuestAccessCodeDatabaseID *databaseID;

@end

#endif /* MKFGuestAccessCode_Protocol_h */