//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSBuddyButtonRegistration_h
#define CSLSBuddyButtonRegistration_h
@import Foundation;

@interface CSLSBuddyButtonRegistration : NSObject

@property (readonly, nonatomic) unsigned long long mask;
@property (readonly, nonatomic) unsigned long long event;

/* instance methods */
- (id)initWithMask:(unsigned long long)mask event:(unsigned long long)event;
- (BOOL)matchesMask:(unsigned long long)mask event:(unsigned long long)event;
@end

#endif /* CSLSBuddyButtonRegistration_h */