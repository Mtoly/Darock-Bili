//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FIUIApplication_Protocol_h
#define FIUIApplication_Protocol_h
@import Foundation;

@protocol FIUIApplication <NSObject>

@property (readonly, nonatomic) FIUIFormattingManager *formattingManager;
@property (readonly, nonatomic) FIUIUnitManager *unitManager;

/* instance methods */
- (void)setHealthStore:(id)store;
@end

#endif /* FIUIApplication_Protocol_h */