//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.0.4.0.0
//
#ifndef GSHealthLiteDataSource_h
#define GSHealthLiteDataSource_h
@import Foundation;

#include "GSDataSource.h"
#include "GSPipelineDefaultJSONLogger.h"

@class NSDate;

@interface GSHealthLiteDataSource : GSDataSource {
  /* instance variables */
  struct { int x0; long long x1; } * _mappedChannels;
  unsigned long long _mappedChannelsCount;
}

@property (retain, nonatomic) GSPipelineDefaultJSONLogger *defaultLogger;
@property (nonatomic) unsigned long long previousPacketIndex;
@property (nonatomic) BOOL didRecordFirstPacketIndex;
@property (nonatomic) BOOL isResearchMode;
@property (nonatomic) double lastResearchTimestamp;
@property (nonatomic) BOOL downsamplingEnabled;
@property (nonatomic) unsigned long long packetSkipCounter;
@property (nonatomic) unsigned long long packetSinceIRCounter;
@property (nonatomic) unsigned long long packetSkipInterval;
@property (nonatomic) double irRateHz;
@property (retain, nonatomic) NSDate *dataSouceStartDate;
@property (nonatomic) long long lastInvalidPacketReasons;
@property (nonatomic) long long lastInvalidSubsampleReasons;
@property (nonatomic) BOOL dataCollectionEnabled;

/* class methods */
+ (id)title;
+ (BOOL)isSupported;
+ (BOOL)setHIDResearchAlgOutputIsWaking:(BOOL)waking;

/* instance methods */
- (id)init;
- (id)initWithConfiguration:(id)configuration;
- (void)dealloc;
- (BOOL)_canStreamData;
- (BOOL)_startStreamingData;
- (void)_stopStreamingData;
- (BOOL)handlesLoggingInternally;
- (id)writerTrigger;
- (void)setWriterTrigger:(id)trigger;
@end

#endif /* GSHealthLiteDataSource_h */