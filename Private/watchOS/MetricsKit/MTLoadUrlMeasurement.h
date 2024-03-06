//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.8.10.0.0
//
#ifndef MTLoadUrlMeasurement_h
#define MTLoadUrlMeasurement_h
@import Foundation;

#include "MTPerfBaseMeasurement.h"
#include "MTLoadUrlMeasurementData-Protocol.h"

@class NSArray, NSString;

@interface MTLoadUrlMeasurement : MTPerfBaseMeasurement<MTLoadUrlMeasurementData>

@property (readonly, copy, nonatomic) NSArray *eventData;
@property (readonly, copy, nonatomic) NSArray *additionalFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)mark:(id)mark;
- (void)mark:(id)mark date:(id)date;
- (void)mark:(id)mark time:(long long)time;
- (void)setRequestUrl:(id)url;
- (void)setConnectionReused:(BOOL)reused;
- (void)setDnsServersIPAddresses:(id)ipaddresses;
- (void)setEdgeNodeCacheStatus:(id)status;
- (void)setRedirectCount:(unsigned long long)count;
- (void)setResolvedIPAddress:(id)ipaddress;
- (void)setStatusCode:(unsigned long long)code;
- (void)setXpSessionDuration:(unsigned long long)duration;
- (void)setXpSamplingForced:(BOOL)forced;
- (void)setXpSamplingPercentageUsers:(double)users;
@end

#endif /* MTLoadUrlMeasurement_h */