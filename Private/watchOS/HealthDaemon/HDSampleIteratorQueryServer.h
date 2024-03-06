//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSampleIteratorQueryServer_h
#define HDSampleIteratorQueryServer_h
@import Foundation;

#include "HDBatchedQueryServer.h"

@class HKSampleIteratorQueryCursor;

@interface HDSampleIteratorQueryServer : HDBatchedQueryServer {
  /* instance variables */
  unsigned long long _deliveredResultCount;
  HKSampleIteratorQueryCursor *_queryCursor;
  unsigned long long _limit;
}

/* class methods */
+ (Class)queryClass;
+ (id)requiredEntitlements;
+ (BOOL)validateConfiguration:(id)configuration client:(id)client error:(id *)error;
+ (BOOL)supportsAnchorBasedAuthorization;

/* instance methods */
- (id)initWithUUID:(id)uuid configuration:(id)configuration client:(id)client delegate:(id)delegate;
- (id)objectTypes;
- (void)_queue_start;
@end

#endif /* HDSampleIteratorQueryServer_h */