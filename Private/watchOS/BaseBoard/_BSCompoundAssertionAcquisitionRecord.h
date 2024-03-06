//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef _BSCompoundAssertionAcquisitionRecord_h
#define _BSCompoundAssertionAcquisitionRecord_h
@import Foundation;

#include "BSCompoundAssertion.h"
#include "_BSCompoundAssertionAcquisitionReference.h"

@class NSString;

@interface _BSCompoundAssertionAcquisitionRecord : NSObject {
  /* instance variables */
  BSCompoundAssertion *_assertion;
  NSString *_reason;
  _BSCompoundAssertionAcquisitionReference *_reference;
  id _context;
}

/* instance methods */
@end

#endif /* _BSCompoundAssertionAcquisitionRecord_h */