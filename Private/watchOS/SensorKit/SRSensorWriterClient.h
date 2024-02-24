//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 707.0.47.0.0
//
#ifndef SRSensorWriterClient_h
#define SRSensorWriterClient_h
@import Foundation;

#include "SRSensorKitServiceClientWriting-Protocol.h"
#include "SRSensorWriter.h"

@interface SRSensorWriterClient : NSObject<SRSensorKitServiceClientWriting>

@property (weak) SRSensorWriter *writer;

/* class methods */
+ (id)sensorWriterClientWithWriter:(id)writer;

/* instance methods */
- (id)initWithWriter:(id)writer;
- (void)resetDatastoreFiles:(id)files;
- (void)setMonitoring:(BOOL)monitoring withRequestedConfigurations:(id)configurations;
@end

#endif /* SRSensorWriterClient_h */