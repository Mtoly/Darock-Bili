//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _TtC12NanoHealthUI33InternalSettingsFeatureStateModel_h
#define _TtC12NanoHealthUI33InternalSettingsFeatureStateModel_h
@import Foundation;

@interface NanoHealthUI.InternalSettingsFeatureStateModel : NSObject { // (Swift)
  /* instance variables */
   featureAvailabilityStore;
   featureStatusManager;
   _featureState;
   _featureStatus;
   _errorMessage;
   subscriptions;
   $__lazy_storage_$_dateFormatter;
}

/* instance methods */
- (id)init;
@end

#endif /* _TtC12NanoHealthUI33InternalSettingsFeatureStateModel_h */