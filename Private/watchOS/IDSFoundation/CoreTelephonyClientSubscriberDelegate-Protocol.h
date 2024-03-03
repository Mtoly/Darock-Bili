//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef CoreTelephonyClientSubscriberDelegate_Protocol_h
#define CoreTelephonyClientSubscriberDelegate_Protocol_h
@import Foundation;

@protocol CoreTelephonyClientSubscriberDelegate <NSObject>
@optional
/* instance methods */
- (void)simStatusDidChange:(id)change status:(id)status;
- (void)simLockSaveRequestDidComplete:(id)complete success:(BOOL)success;
- (void)simPinEntryErrorDidOccur:(id)occur status:(id)status;
- (void)simPukEntryErrorDidOccur:(id)occur status:(id)status;
- (void)simPinChangeRequestDidComplete:(id)complete success:(BOOL)success;
- (void)authTokenChanged:(id)changed;
- (void)shortLabelsDidChange;
- (void)subscriberCountryCodeDidChange:(id)change;
- (void)userDefaultVoiceSlotDidChange:(id)change;
- (void)prlVersionDidChange:(id)change version:(id)version;
- (void)didDetectSimDeactivation:(id)deactivation info:(id)info;
@end

#endif /* CoreTelephonyClientSubscriberDelegate_Protocol_h */