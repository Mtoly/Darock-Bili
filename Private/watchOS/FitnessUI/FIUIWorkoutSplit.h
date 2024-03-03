//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FIUIWorkoutSplit_h
#define FIUIWorkoutSplit_h
@import Foundation;

@class NSDateInterval;

@interface FIUIWorkoutSplit : NSObject

@property (nonatomic) double distanceInMeters;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSDateInterval *dateInterval;

/* instance methods */
- (id)initWithDistance:(double)distance duration:(double)duration;
- (id)initWithDistance:(double)distance duration:(double)duration dateInterval:(id)interval;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* FIUIWorkoutSplit_h */