//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFAuthenticateAccountHomeUserInfo_h
#define SFAuthenticateAccountHomeUserInfo_h
@import Foundation;

@class NSUUID;

@interface SFAuthenticateAccountHomeUserInfo : NSObject

@property (readonly, nonatomic) NSUUID *homeUniqueIdentifier;
@property (readonly, nonatomic) NSUUID *userUniqueIdentifier;

/* instance methods */
- (id)initWithHomeUUID:(id)uuid userUUID:(id)uuid;
@end

#endif /* SFAuthenticateAccountHomeUserInfo_h */