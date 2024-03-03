//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTTaskGroup_h
#define MTTaskGroup_h
@import Foundation;

@class NSArray;

@interface MTTaskGroup : NSObject

@property (copy, nonatomic) NSArray *tasks;
@property (copy, nonatomic) id /* block */ completionBlock;

/* class methods */
+ (id)taskGroupWithTasks:(id)tasks completionBlock:(id /* block */)block;

/* instance methods */
- (id)description;
@end

#endif /* MTTaskGroup_h */