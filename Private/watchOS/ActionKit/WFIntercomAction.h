//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFIntercomAction_h
#define WFIntercomAction_h
@import Foundation;

#include "WFAction.h"

@class NSError *, WFContentCollection *;

@interface WFIntercomAction : WFAction { // (Swift)
  /* instance variables */
   homeParameterKey;
   $__lazy_storage_$_speechSynthesizer;
   $__lazy_storage_$_announce;
}

/* instance methods */
- (void)runWithInput:(WFContentCollection *)input completionHandler:(id /* block */)handler;
- (id)initWithIdentifier:(id)identifier definition:(id)definition serializedParameters:(id)parameters;
- (id)init;
@end

#endif /* WFIntercomAction_h */