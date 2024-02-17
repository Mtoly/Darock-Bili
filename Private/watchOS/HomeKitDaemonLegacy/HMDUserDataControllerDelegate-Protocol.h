//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDUserDataControllerDelegate_Protocol_h
#define HMDUserDataControllerDelegate_Protocol_h
@import Foundation;

@protocol HMDUserDataControllerDelegate 
/* instance methods */
- (BOOL)userDataController:(id)controller isMediaContentProfileCapableAccessoryID:(id)id;
- (BOOL)userDataController:(id)controller isPersonalRequestCapableAccessoryID:(id)id;
- (BOOL)userDataController:(id)controller isAppleMediaAccessory:(id)accessory;
- (BOOL)userDataController:(id)controller isHAPAccessory:(id)hapaccessory;
- (void)userDataControllerDidUpdateAssistantAccessControl:(id)control;
- (void)userDataControllerDidUpdateMediaContentProfile:(id)profile;
- (void)userDataControllerDidUpdateSupportsAutomaticHH2Migration:(id)migration;
- (id)sharedZoneControllerForUserDataController:(id)controller;
- (id)privateZoneControllerForUserDataController:(id)controller;
@end

#endif /* HMDUserDataControllerDelegate_Protocol_h */