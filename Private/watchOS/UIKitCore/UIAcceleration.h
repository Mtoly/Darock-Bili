//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIAcceleration_h
#define UIAcceleration_h
@import Foundation;

@interface UIAcceleration : NSObject

@property (nonatomic) double timestamp;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double z;

/* instance methods */
- (id)description;
@end

#endif /* UIAcceleration_h */