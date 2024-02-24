//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 524.1.0.0.0
//
#ifndef RPRequestRegistration_h
#define RPRequestRegistration_h
@import Foundation;

@class NSDictionary, NSString;

@interface RPRequestRegistration : NSObject

@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) id /* block */ cnxHandler;

/* instance methods */
@end

#endif /* RPRequestRegistration_h */