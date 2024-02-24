//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSNotificationCenterServiceServerExportedInterface_Protocol_h
#define CSLSNotificationCenterServiceServerExportedInterface_Protocol_h
@import Foundation;

@protocol CSLSNotificationCenterServiceServerExportedInterface <NSObject>
/* instance methods */
- (void)restoreToDefaultF5StateWithDisabledAlerts:(BOOL)alerts completion:(id /* block */)completion;
- (void)restoreToStateInPList:(id)plist withDisabledAlerts:(BOOL)alerts completion:(id /* block */)completion;
@end

#endif /* CSLSNotificationCenterServiceServerExportedInterface_Protocol_h */