//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFSystemIntentAppEnumerator_h
#define WFSystemIntentAppEnumerator_h
@import Foundation;

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface WFSystemIntentAppEnumerator : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  int _token;
  NSDictionary *_identifiersByIntentName;
  NSDictionary *_identifiersByUserActivityType;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)enumerate;
- (id)supportedIdentifiersForIntentClassName:(id)name includingUserActivityBasedApps:(BOOL)apps;
@end

#endif /* WFSystemIntentAppEnumerator_h */