//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.300.2.0.0
//
#ifndef HSRequest_h
#define HSRequest_h
@import Foundation;

@class NSData, NSDictionary, NSString;

@interface HSRequest : NSObject {
  /* instance variables */
  NSDictionary *_arguments;
}

@property (readonly, nonatomic) NSString *action;
@property (readonly, nonatomic) BOOL concurrent;
@property (nonatomic) long long method;
@property (readonly, nonatomic) double timeoutInterval;
@property (copy, nonatomic) NSData *bodyData;
@property (readonly, nonatomic) BOOL acceptsGzipEncoding;

/* class methods */
+ (id)request;

/* instance methods */
- (id)initWithAction:(id)action;
- (id)description;
- (void)setValue:(id)value forArgument:(id)argument;
- (id)requestURLForBaseURL:(id)url sessionID:(unsigned int)id;
- (id)URLRequestForBaseURL:(id)url sessionID:(unsigned int)id;
- (id)canonicalResponseForResponse:(id)response;
- (BOOL)isConcurrent;
@end

#endif /* HSRequest_h */