//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKFeatureManager_h
#define AKFeatureManager_h
@import Foundation;

@interface AKFeatureManager : NSObject {
  /* instance variables */
  BOOL _cachedIsLisbonAvailable;
  BOOL _cachedIsAppleIDPasskeyFeatureEnabled;
  BOOL _cachedIsHawksbillEnabled;
  BOOL _cachedIsChildPasscodeEnabled;
  BOOL _cachedIsForgotPasswordNativeTakeoverEnabled;
  BOOL _cachedIsDeviceListCacheEnabled;
}

@property (readonly, nonatomic) BOOL lisbonAvailable;
@property (readonly, nonatomic) BOOL appleIDPasskeyFeatureEnabled;
@property (readonly, nonatomic) BOOL enableHawksbill;
@property (readonly, nonatomic) BOOL childPasscodeEnabled;
@property (readonly, nonatomic) BOOL forgotPasswordNativeTakeoverEnabled;
@property (readonly, nonatomic) BOOL appleIDSessionTelemetryEnabled;
@property (readonly, nonatomic) BOOL deviceListCacheEnabled;

/* class methods */
+ (id)sharedManager;
+ (BOOL)isProxAuthEnabled;
+ (BOOL)isProxForAuthkitEnabled;
+ (BOOL)isYorktownEnabled;
+ (BOOL)isEnforceMDMPolicyEnabled;
+ (BOOL)isEasyDependentSignInEnabled;

/* instance methods */
- (id)init;
- (BOOL)isLisbonAvailable;
- (BOOL)isAppleIDPasskeyFeatureEnabled;
- (BOOL)isHawksbillEnabled;
- (BOOL)isChildPasscodeEnabled;
- (BOOL)isForgotPasswordNativeTakeoverEnabled;
- (BOOL)isDeviceListCacheEnabled;
- (BOOL)isAppleIDSessionTelemetryEnabled;
@end

#endif /* AKFeatureManager_h */