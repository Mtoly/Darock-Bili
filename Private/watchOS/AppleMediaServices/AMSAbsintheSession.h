//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSAbsintheSession_h
#define AMSAbsintheSession_h
@import Foundation;

@class NSString;

@interface AMSAbsintheSession : NSObject

@property (nonatomic) void * sessionRef;
@property (retain, nonatomic) NSString *servKey;

/* class methods */
+ (id)defaultSession;

/* instance methods */
- (id)init;
- (BOOL)clearSession;
- (id)signData:(id)data bag:(id)bag error:(id *)error;
- (BOOL)verifyData:(id)data bag:(id)bag error:(id *)error;
- (BOOL)_prepareContextWithBag:(id)bag error:(id *)error;
@end

#endif /* AMSAbsintheSession_h */