//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMInferredModeEvent_h
#define BMInferredModeEvent_h
@import Foundation;

#include "BMProtoBufWrapper-Protocol.h"
#include "BMStoreData-Protocol.h"

@class NSArray, NSString;

@interface BMInferredModeEvent : NSObject<BMStoreData, BMProtoBufWrapper>

@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) NSString *modeIdentifier;
@property (readonly, nonatomic) NSString *modeUUID;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *suggestionUUID;
@property (readonly, nonatomic) long long origin;
@property (readonly, nonatomic) NSString *originBundleId;
@property (readonly, nonatomic) BOOL isAutomationEnabled;
@property (readonly, nonatomic) BOOL isStart;
@property (readonly, nonatomic) BOOL shouldSuggestTriggers;
@property (readonly, nonatomic) unsigned long long uiLocation;
@property (readonly, nonatomic) double confidenceScore;
@property (readonly, nonatomic) NSString *originAnchorType;
@property (readonly, nonatomic) NSArray *serializedTriggers;
@property (readonly, nonatomic) unsigned long long modeType;
@property (readonly, nonatomic) NSString *userModeName;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;

/* instance methods */
- (id)initWithAbsoluteTimestamp:(double)timestamp modeIdentifier:(id)identifier origin:(long long)origin originBundleId:(id)id originAnchorType:(id)type isAutomationEnabled:(BOOL)enabled uiLocation:(unsigned long long)location isStart:(BOOL)start confidenceScore:(double)score uuid:(id)uuid serializedTriggers:(id)triggers;
- (id)initWithAbsoluteTimestamp:(double)timestamp modeIdentifier:(id)identifier origin:(long long)origin originBundleId:(id)id originAnchorType:(id)type isAutomationEnabled:(BOOL)enabled uiLocation:(unsigned long long)location isStart:(BOOL)start confidenceScore:(double)score uuid:(id)uuid serializedTriggers:(id)triggers modeType:(unsigned long long)type;
- (id)initWithAbsoluteTimestamp:(double)timestamp modeUUID:(id)uuid origin:(long long)origin originBundleId:(id)id originAnchorType:(id)type isAutomationEnabled:(BOOL)enabled uiLocation:(unsigned long long)location isStart:(BOOL)start confidenceScore:(double)score suggestionUUID:(id)uuid serializedTriggers:(id)triggers modeType:(unsigned long long)type;
- (id)initWithAbsoluteTimestamp:(double)timestamp modeUUID:(id)uuid origin:(long long)origin originBundleId:(id)id originAnchorType:(id)type isAutomationEnabled:(BOOL)enabled uiLocation:(unsigned long long)location isStart:(BOOL)start confidenceScore:(double)score suggestionUUID:(id)uuid serializedTriggers:(id)triggers shouldSuggestTriggers:(BOOL)triggers modeType:(unsigned long long)type;
- (id)initWithAbsoluteTimestamp:(double)timestamp modeUUID:(id)uuid origin:(long long)origin originBundleId:(id)id originAnchorType:(id)type isAutomationEnabled:(BOOL)enabled uiLocation:(unsigned long long)location isStart:(BOOL)start confidenceScore:(double)score suggestionUUID:(id)uuid serializedTriggers:(id)triggers shouldSuggestTriggers:(BOOL)triggers modeType:(unsigned long long)type userModeName:(id)name;
- (id)serialize;
- (id)jsonDict;
- (id)json;
- (id)encodeAsProto;
- (id)initWithProto:(id)proto;
- (id)initWithProtoData:(id)data;
- (id)proto;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMInferredModeEvent_h */