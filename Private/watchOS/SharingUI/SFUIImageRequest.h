//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFUIImageRequest_h
#define SFUIImageRequest_h
@import Foundation;

@class NSString;

@interface SFUIImageRequest : NSObject

@property (readonly, nonatomic) int requestID;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL synchronous;
@property (readonly, copy, nonatomic) id /* block */ resultHandler;

/* instance methods */
- (id)initWithRequestID:(int)id identifier:(id)identifier synchronous:(BOOL)synchronous resultHandler:(id /* block */)handler;
@end

#endif /* SFUIImageRequest_h */