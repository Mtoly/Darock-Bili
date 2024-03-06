//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSInvalidatableBacklightAssertion_h
#define CSLSInvalidatableBacklightAssertion_h
@import Foundation;

#include "BSInvalidatable-Protocol.h"
#include "CSLSBacklightAssertionBase.h"

@class NSString;

@interface CSLSInvalidatableBacklightAssertion : NSObject<BSInvalidatable> {
  /* instance variables */
  CSLSBacklightAssertionBase *_backlightAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)takeWithAssertion:(id)assertion;

/* instance methods */
- (id)initWithBacklightAssertion:(id)assertion;
- (void)invalidate;
@end

#endif /* CSLSInvalidatableBacklightAssertion_h */