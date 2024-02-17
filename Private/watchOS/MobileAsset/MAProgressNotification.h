//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 936.60.10.0.0
//
#ifndef MAProgressNotification_h
#define MAProgressNotification_h
@import Foundation;

@class NSString;

@interface MAProgressNotification : NSObject

@property (nonatomic) long long totalExpected;
@property (nonatomic) long long totalWritten;
@property (nonatomic) BOOL isStalled;
@property (nonatomic) double expectedTimeRemaining;
@property (retain, nonatomic) NSString *taskDescription;

/* instance methods */
@end

#endif /* MAProgressNotification_h */