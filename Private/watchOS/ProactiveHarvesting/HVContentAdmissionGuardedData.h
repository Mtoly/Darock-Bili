//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef HVContentAdmissionGuardedData_h
#define HVContentAdmissionGuardedData_h
@import Foundation;

@class NSHashTable, NSSet, _PASAsset2;

@interface HVContentAdmissionGuardedData : NSObject {
  /* instance variables */
  NSSet *_learnFromThisAppBundleIdentifierDenylist;
  NSSet *_configurableBundleIdentifierDenyList;
  NSHashTable *_observers;
  _PASAsset2 *_configurableBundleIdentifierDenyListAsset;
  BOOL _suggestionsShouldShowPastEvents;
}

/* instance methods */
@end

#endif /* HVContentAdmissionGuardedData_h */