//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutableLanguageDetectionStreamingRequest_h
#define FTMutableLanguageDetectionStreamingRequest_h
@import Foundation;

#include "FTLanguageDetectionStreamingRequest.h"
#include "FTAudioPacket.h"
#include "FTFinishAudio.h"
#include "FTStartLanguageDetectionRequest.h"

@protocol FLTBFBufferAccessor><NSCopying;

@interface FTMutableLanguageDetectionStreamingRequest : FTLanguageDetectionStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTStartLanguageDetectionRequest *contentAsFTStartLanguageDetectionRequest;
@property (copy, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property (copy, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property (copy, @dynamic, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;

/* class methods */
+ (Class)content_mutableClassForType:(long long)type;
+ (long long)content_typeForMutableObject:(id)object;
+ (long long)content_typeForObject:(id)object;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FTMutableLanguageDetectionStreamingRequest_h */