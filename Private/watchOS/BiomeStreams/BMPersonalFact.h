//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMPersonalFact_h
#define BMPersonalFact_h
@import Foundation;

#include "BMProtoBufWrapper-Protocol.h"

@class NSArray, NSString;

@interface BMPersonalFact : NSObject<BMProtoBufWrapper>

@property (readonly, nonatomic) NSString *subjectId;
@property (readonly, nonatomic) NSString *subjectAlias;
@property (readonly, nonatomic) NSArray *subjectIsa;
@property (readonly, nonatomic) NSString *predicateId;
@property (readonly, nonatomic) NSString *objectId;
@property (readonly, nonatomic) NSString *objectAlias;

/* instance methods */
- (id)initWithSubjectId:(id)id subjectAlias:(id)alias subjectIsa:(id)isa predicateId:(id)id objectId:(id)id objectAlias:(id)alias;
- (id)encodeAsProto;
- (id)initWithProto:(id)proto;
- (id)initWithProtoData:(id)data;
- (id)proto;
@end

#endif /* BMPersonalFact_h */