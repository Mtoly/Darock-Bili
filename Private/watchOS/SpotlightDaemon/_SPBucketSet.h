//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2274.8.0.0.0
//
#ifndef _SPBucketSet_h
#define _SPBucketSet_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface _SPBucketSet : NSObject {
  /* instance variables */
  struct __CFDictionary * _members;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property long long count;

/* instance methods */
- (id)init;
- (void)dealloc;
- (long long)valueForKey:(id)key;
- (void)removeValueForKey:(id)key;
- (void)addValue:(long long)value forKey:(id)key;
- (void)decay:(long long)decay;
@end

#endif /* _SPBucketSet_h */