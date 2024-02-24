//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NBBloomFilterReader_h
#define NBBloomFilterReader_h
@import Foundation;

@class NBObjCBloomFilterReader;

@interface NBBloomFilterReader : NSObject

@property (readonly, nonatomic) NBObjCBloomFilterReader *bloomFilterReader;

/* instance methods */
- (id)initWithData:(id)data hashFunctionCount:(unsigned long long)count;
- (BOOL)maybeContainsString:(id)string;
@end

#endif /* NBBloomFilterReader_h */