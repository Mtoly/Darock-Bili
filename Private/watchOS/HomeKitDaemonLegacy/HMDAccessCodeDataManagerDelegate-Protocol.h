//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAccessCodeDataManagerDelegate_Protocol_h
#define HMDAccessCodeDataManagerDelegate_Protocol_h
@import Foundation;

@protocol HMDAccessCodeDataManagerDelegate <NSObject>
/* instance methods */
- (void)accessCodeDataManager:(id)manager didAddHomeAccessCodes:(id)codes addedByUserUUID:(id)uuid;
- (void)accessCodeDataManager:(id)manager didUpdateHomeAccessCodes:(id)codes changedByUserUUID:(id)uuid;
- (void)accessCodeDataManager:(id)manager didRemoveHomeAccessCodes:(id)codes removedByUserUUID:(id)uuid;
- (void)accessCodeDataManager:(id)manager didAddAccessoryAccessCodes:(id)codes;
- (void)accessCodeDataManager:(id)manager didUpdateAccessoryAccessCodes:(id)codes;
- (void)accessCodeDataManager:(id)manager didRemoveAccessoryAccessCodes:(id)codes;
- (id)messageTargetUUID;
@end

#endif /* HMDAccessCodeDataManagerDelegate_Protocol_h */