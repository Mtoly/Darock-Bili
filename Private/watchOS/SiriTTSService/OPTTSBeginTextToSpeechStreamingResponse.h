//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.19.1.2.1
//
#ifndef OPTTSBeginTextToSpeechStreamingResponse_h
#define OPTTSBeginTextToSpeechStreamingResponse_h
@import Foundation;

#include "FLTBFBufferAccessor-Protocol.h"
#include "NSCopying-Protocol.h"
#include "OPTTSAudioDescription.h"
#include "OPTTSTextToSpeechMeta.h"

@class NSData, NSMutableDictionary, NSString;

@interface OPTTSBeginTextToSpeechStreamingResponse : NSObject<FLTBFBufferAccessor, NSCopying> {
  /* instance variables */
  NSMutableDictionary *_storage;
  NSData *_data;
  const struct BeginTextToSpeechStreamingResponse { unsigned char x0[1] } * _root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) int error_code;
@property (readonly, nonatomic) NSString *error_str;
@property (readonly, nonatomic) NSString *stream_id;
@property (readonly, nonatomic) long long audio_type;
@property (readonly, nonatomic) OPTTSAudioDescription *decoder_description;
@property (readonly, nonatomic) OPTTSAudioDescription *playback_description;
@property (readonly, nonatomic) OPTTSTextToSpeechMeta *meta_info;
@property (readonly, nonatomic) float streaming_playback_buffer_size_in_seconds;

/* instance methods */
- (id)initWithFlatbuffData:(id)data;
- (id)initAndVerifyWithFlatbuffData:(id)data;
- (id)initWithFlatbuffData:(id)data root:(const struct BeginTextToSpeechStreamingResponse { unsigned char x0[1] } *)root;
- (id)initWithFlatbuffData:(id)data root:(const struct BeginTextToSpeechStreamingResponse { unsigned char x0[1] } *)root verify:(BOOL)verify;
- (id)copyWithZone:(struct _NSZone *)zone;
- (struct Offset<siri::speech::schema_fb::BeginTextToSpeechStreamingResponse> { unsigned int x0; })addObjectToBuffer:(void *)buffer;
- (id)flatbuffData;
@end

#endif /* OPTTSBeginTextToSpeechStreamingResponse_h */