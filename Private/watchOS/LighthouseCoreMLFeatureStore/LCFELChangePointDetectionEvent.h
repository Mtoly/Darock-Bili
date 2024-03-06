//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.2.1.0.0
//
#ifndef LCFELChangePointDetectionEvent_h
#define LCFELChangePointDetectionEvent_h
@import Foundation;

#include "LCFELBatchProviderInfo.h"

@class NSArray, NSError, NSNumber, NSUUID;

@interface LCFELChangePointDetectionEvent : NSObject

@property (readonly, nonatomic) NSUUID *contextId;
@property (readonly, nonatomic) NSUUID *eventId;
@property (readonly, nonatomic) LCFELBatchProviderInfo *inputBachProviderInfo;
@property (readonly, nonatomic) NSArray *results;
@property (readonly, nonatomic) NSNumber *succeeded;
@property (readonly, nonatomic) NSError *analysisError;

/* instance methods */
- (id)init:(id)init results:(id)results succeeded:(id)succeeded analysisError:(id)error;
@end

#endif /* LCFELChangePointDetectionEvent_h */