//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef SGTokenJoiningTransformer_h
#define SGTokenJoiningTransformer_h
@import Foundation;

#include "PMLTransformerProtocol-Protocol.h"

@class NSString;

@interface SGTokenJoiningTransformer : NSObject<PMLTransformerProtocol>

@property (retain) NSString *separator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)withSeparator:(id)separator;

/* instance methods */
- (id)initWithSeparator:(id)separator;
- (id)transform:(id)transform;
- (id)toPlistWithChunks:(id)chunks;
- (id)initWithPlist:(id)plist chunks:(id)chunks context:(id)context;
- (BOOL)isEqualToSGTokenJoiningTransformer:(id)transformer;
- (BOOL)isEqual:(id)equal;
@end

#endif /* SGTokenJoiningTransformer_h */