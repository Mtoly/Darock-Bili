//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.16.0.0.0
//
#ifndef SNAAssertionTarget_h
#define SNAAssertionTarget_h
@import Foundation;

@class NSString;

@interface SNAAssertionTarget : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

/* instance methods */
- (id)initWithBundleIdentifier:(id)identifier;
@end

#endif /* SNAAssertionTarget_h */