//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 887.3.0.0.0
//
#ifndef BBAssertion_h
#define BBAssertion_h
@import Foundation;

#include "BBAssertionDelegate-Protocol.h"

@class NSString;

@interface BBAssertion : NSObject {
  /* instance variables */
  NSString *_identifier;
  unsigned long long _transactionID;
}

@property (weak, nonatomic) NSObject<BBAssertionDelegate> *delegate;

/* instance methods */
- (id)initWithDelegate:(id)delegate identifier:(id)identifier;
- (void)dealloc;
- (void)increaseOrIgnoreTransactionID:(unsigned long long)id;
- (id)identifier;
- (unsigned long long)transactionID;
@end

#endif /* BBAssertion_h */