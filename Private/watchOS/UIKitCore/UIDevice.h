//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIDevice_h
#define UIDevice_h
@import Foundation;

@class NSString, NSUUID;

@interface UIDevice : NSObject {
  /* instance variables */
  long long _numDeviceOrientationObservers;
  unsigned long long _remoteTouchSurfaceType;
  BOOL _remoteHasMicrophone;
  BOOL _remoteHasMute;
  BOOL _remoteSupportsPushToTalk;
  struct { unsigned int x :1 batteryMonitoringEnabled; unsigned int x :1 proximityMonitoringEnabled; unsigned int x :1 expectsFaceContactInLandscape; unsigned int x :3 orientation; unsigned int x :2 batteryState; unsigned int x :1 proximityState; unsigned int x :1 hasTouchPadOverride; unsigned int x :1 hasTouchPad; unsigned int x :1 isHardwareKeyboardAvailable; } _deviceFlags;
}

@property (readonly, retain, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) BOOL _supportsPencil;
@property (nonatomic) float _backlightLevel;
@property (readonly, nonatomic) BOOL _hardwareKeyboardAvailable;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *localizedModel;
@property (readonly, nonatomic) NSString *systemName;
@property (readonly, nonatomic) NSString *systemVersion;
@property (readonly, nonatomic) long long orientation;
@property (readonly, nonatomic) NSUUID *identifierForVendor;
@property (readonly, nonatomic) BOOL generatesDeviceOrientationNotifications;
@property (nonatomic) BOOL batteryMonitoringEnabled;
@property (readonly, nonatomic) long long batteryState;
@property (readonly, nonatomic) float batteryLevel;
@property (nonatomic) BOOL proximityMonitoringEnabled;
@property (readonly, nonatomic) BOOL proximityState;
@property (readonly, nonatomic) BOOL multitaskingSupported;
@property (readonly, nonatomic) long long userInterfaceIdiom;

/* class methods */
+ (BOOL)_isLowEnd;
+ (BOOL)_hasHomeButton;
+ (id)modelSpecificLocalizedStringKeyForKey:(id)key;
+ (long long)currentDeviceOrientationAllowingAmbiguous:(BOOL)ambiguous;
+ (BOOL)_isWatch;
+ (BOOL)_isWatchCompanion;
+ (id)currentDevice;

/* instance methods */
- (long long)_keyboardGraphicsQuality;
- (long long)_predictionGraphicsQuality;
- (long long)_nativeScreenGamut;
- (BOOL)_supportsPushToTalk;
- (void)_setProximityState:(BOOL)state;
- (void)_setBatteryState:(long long)state;
- (void)_setBatteryLevel:(float)level;
- (BOOL)_hasTouchPad;
- (void)_setHasTouchPad:(BOOL)pad;
- (void)_loadRemoteDeviceInfoIfNeeded;
- (unsigned long long)_remoteTouchSurfaceType;
- (BOOL)_remoteHasMicrophoneCapability;
- (long long)_graphicsQuality;
- (void)_setGraphicsQualityOverride:(long long)override;
- (void)_clearGraphicsQualityOverride;
- (BOOL)_hasGraphicsQualityOverride;
- (BOOL)_supportsForceTouch;
- (BOOL)_supportsDeepColor;
- (void)_enableDeviceOrientationEvents:(BOOL)events;
- (id)_tapticEngine;
- (id)init;
- (void)dealloc;
- (id)_deviceInfoForKey:(struct __CFString *)key;
- (void)setOrientation:(long long)orientation animated:(BOOL)animated;
- (void)beginGeneratingDeviceOrientationNotifications;
- (void)endGeneratingDeviceOrientationNotifications;
- (BOOL)isGeneratingDeviceOrientationNotifications;
- (BOOL)isBatteryMonitoringEnabled;
- (BOOL)isProximityMonitoringEnabled;
- (void)_setExpectsFaceContactInLandscape:(BOOL)landscape;
- (BOOL)isMultitaskingSupported;
- (void)_setActiveUserInterfaceIdiom:(long long)idiom;
- (void)playInputClick;
- (void)_setBacklightLevel:(float)level;
- (float)_softwareDimmingAlpha;
- (void)_updateSystemSoundActiveStatus:(id)status;
- (BOOL)_isSystemSoundEnabled;
- (void)_registerForSystemSounds:(id)sounds;
- (void)_unregisterForSystemSounds:(id)sounds;
- (void)_playSystemSound:(unsigned int)sound;
- (void)_playInputSelectSound;
- (void)_playInputDeleteSound;
- (void)_hardwareKeyboardAvailabilityChanged;
- (BOOL)_isHardwareKeyboardAvailable;
- (void)setValue:(id)value forKey:(id)key;
- (void)_performShimmedRequestIfPossibleForDeviceOrientation:(long long)orientation;
@end

#endif /* UIDevice_h */