//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 210.0.0.0.0
//
#ifndef CKVOToken_h
#define CKVOToken_h
@import Foundation;

@class NSString;

@interface CKVOToken : NSObject

@property (readonly, copy, nonatomic) NSString *keypath;
@property (readonly, nonatomic) long long index;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly, nonatomic) void * context;

/* instance methods */
- (id)initWithKeyPath:(id)path index:(long long)index block:(id /* block */)block;
- (id)description;
@end

#endif /* CKVOToken_h */