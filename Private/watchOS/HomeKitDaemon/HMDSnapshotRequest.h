//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDSnapshotRequest_h
#define HMDSnapshotRequest_h
@import Foundation;

#include "HMFObject.h"

@interface HMDSnapshotRequest : HMFObject

@property (readonly, nonatomic) id /* block */ completion;

/* instance methods */
- (id)initWithCompletion:(id /* block */)completion;
@end

#endif /* HMDSnapshotRequest_h */