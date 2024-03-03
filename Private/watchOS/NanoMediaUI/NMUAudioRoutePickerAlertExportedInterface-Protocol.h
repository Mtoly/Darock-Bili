//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMUAudioRoutePickerAlertExportedInterface_Protocol_h
#define NMUAudioRoutePickerAlertExportedInterface_Protocol_h
@import Foundation;

@protocol NMUAudioRoutePickerAlertExportedInterface 
/* instance methods */
- (void)presentRoutePickerAlertIfNecessaryAndActivateAudioSessionID:(unsigned int)id options:(unsigned long long)options completionHandler:(id /* block */)handler;
- (void)presentPlaybackRoutePickerAlertWithConfiguration:(id)configuration completionHandler:(id /* block */)handler;
@end

#endif /* NMUAudioRoutePickerAlertExportedInterface_Protocol_h */