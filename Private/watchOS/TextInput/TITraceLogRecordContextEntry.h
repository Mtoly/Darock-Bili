//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TITraceLogRecordContextEntry_h
#define TITraceLogRecordContextEntry_h
@import Foundation;

@class NSString;

@interface TITraceLogRecordContextEntry : NSObject

@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *wordID;

/* instance methods */
- (id)initWithToken:(id)token wordID:(id)id;
@end

#endif /* TITraceLogRecordContextEntry_h */