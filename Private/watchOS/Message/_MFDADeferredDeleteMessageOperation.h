//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef _MFDADeferredDeleteMessageOperation_h
#define _MFDADeferredDeleteMessageOperation_h
@import Foundation;

#include "_MFOfflineCacheOperation.h"

@class NSString;

@interface _MFDADeferredDeleteMessageOperation : _MFOfflineCacheOperation {
  /* instance variables */
  NSString *_messageID;
}

/* class methods */
+ (id)log;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)translateToLocalActionWithConnection:(id)connection;
- (id)description;
@end

#endif /* _MFDADeferredDeleteMessageOperation_h */