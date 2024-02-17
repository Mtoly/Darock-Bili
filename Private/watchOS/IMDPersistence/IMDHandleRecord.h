//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDHandleRecord_h
#define IMDHandleRecord_h
@import Foundation;

#include "IMDRecord.h"
#include "IMDBridgedRecord-Protocol.h"

@class NSString;

@interface IMDHandleRecord : IMDRecord<IMDBridgedRecord>

@property (readonly, copy, @dynamic, nonatomic) NSString *ID;
@property (readonly, copy, @dynamic, nonatomic) NSString *uncanonicalizedID;
@property (readonly, copy, @dynamic, nonatomic) NSString *country;
@property (readonly, copy, @dynamic, nonatomic) NSString *service;
@property (readonly, nonatomic) long long rowID;
@property (readonly, copy, nonatomic) NSString *canonicalizedURIString;
@property (readonly, copy, nonatomic) NSString *uncanonicalizedURIString;
@property (readonly, copy, nonatomic) NSString *countryCodeString;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, @dynamic, nonatomic) NSString *personCentricID;

/* class methods */
+ (id)allocWithZone:(struct _NSZone *)zone;

/* instance methods */
- (unsigned long long)_cfTypeID;
- (struct _IMDHandleRecordStruct { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; long long x1; struct __CFArray * x2; } *)cfHandleRecord;
- (void *)_fetchUpdatedRecord;
- (struct __CFArray *)_localCache;
- (struct { char * x0; long long x1; struct  * x2; unsigned int x3; void * x4; })_propertyDescriptorForProperty:(long long)property;
- (int)_propertyIDForProperty:(long long)property;
- (id)init;
@end

#endif /* IMDHandleRecord_h */