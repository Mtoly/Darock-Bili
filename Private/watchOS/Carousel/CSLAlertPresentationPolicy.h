//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLAlertPresentationPolicy_h
#define CSLAlertPresentationPolicy_h
@import Foundation;

#include "CUISAlertPresentationPolicy.h"

@interface CSLAlertPresentationPolicy : CUISAlertPresentationPolicy
/* class methods */
+ (id)presentationPolicyForCurrentDeviceStateWithViewControllerSupportsBanners:(BOOL)banners disableOpenApp:(BOOL)app;
@end

#endif /* CSLAlertPresentationPolicy_h */