//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef _PASLPReaderProtocol_Protocol_h
#define _PASLPReaderProtocol_Protocol_h
@import Foundation;

@protocol _PASLPReaderProtocol 
/* instance methods */
- (id)rootObjectWithErrMsg:(id *)msg;
- (id)objectForKey:(id)key usingDictionaryContext:(id)context;
- (id)keyAtIndex:(unsigned long long)index usingDictionaryContext:(id)context;
- (id)objectAtIndex:(unsigned long long)index usingDictionaryContext:(id)context;
- (id)objectAtIndex:(unsigned long long)index usingArrayContext:(id)context;
@end

#endif /* _PASLPReaderProtocol_Protocol_h */