//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.0.4.0.0
//
#ifndef _GSHIDGyroHelperDataSource_h
#define _GSHIDGyroHelperDataSource_h
@import Foundation;

#include "GSHIDBaseDataSource.h"

@class NSArray;

@interface _GSHIDGyroHelperDataSource : GSHIDBaseDataSource

@property (copy, nonatomic) NSArray *orderedChannelNames;
@property (nonatomic) double gyroRateHz;
@property (nonatomic) long long xTransformation;
@property (nonatomic) long long yTransformation;
@property (nonatomic) long long zTransformation;

/* class methods */
+ (id)hidSourceName;
+ (unsigned int)hidUsage;
+ (unsigned int)hidUsagePage;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (void)_startUpdatesWithServiceClient:(struct __IOHIDServiceClient *)client;
- (void)_stopUpdatesWithServiceClient:(struct __IOHIDServiceClient *)client;
- (void)_handleHIDEvent:(struct __IOHIDEvent *)hidevent computedTimestamp:(double)timestamp dataTimestamp:(double)timestamp localSequence:(unsigned int)sequence;
- (id)channels;
- (void)_configureOrientationTransformations;
@end

#endif /* _GSHIDGyroHelperDataSource_h */