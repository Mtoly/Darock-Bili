//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFMutablePriorityQueueEntry_h
#define HFMutablePriorityQueueEntry_h
@import Foundation;

@interface HFMutablePriorityQueueEntry : NSObject

@property (nonatomic) unsigned long long priority;
@property (readonly, nonatomic) id value;

/* instance methods */
- (id)initWithValue:(id)value;
- (id)initWithValue:(id)value priority:(long long)priority;
@end

#endif /* HFMutablePriorityQueueEntry_h */