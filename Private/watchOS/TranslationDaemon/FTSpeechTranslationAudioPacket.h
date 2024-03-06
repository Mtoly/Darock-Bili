//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTSpeechTranslationAudioPacket_h
#define FTSpeechTranslationAudioPacket_h
@import Foundation;

#include "FLTBFBufferAccessor-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSData, NSMutableDictionary;

@interface FTSpeechTranslationAudioPacket : NSObject<FLTBFBufferAccessor, NSCopying> {
  /* instance variables */
  NSMutableDictionary *_storage;
  NSData *_data;
  const struct SpeechTranslationAudioPacket { unsigned char x0[1] } * _root;
}

@property (readonly, nonatomic) NSArray *audio_frames;

/* instance methods */
- (id)initWithFlatbuffData:(id)data;
- (id)initAndVerifyWithFlatbuffData:(id)data;
- (id)initWithFlatbuffData:(id)data root:(const struct SpeechTranslationAudioPacket { unsigned char x0[1] } *)root;
- (id)initWithFlatbuffData:(id)data root:(const struct SpeechTranslationAudioPacket { unsigned char x0[1] } *)root verify:(BOOL)verify;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)audio_frames_objectAtIndex:(unsigned long long)index;
- (unsigned long long)audio_frames_count;
- (void)audio_frames_enumerateObjectsUsingBlock:(id /* block */)block;
- (struct Offset<siri::speech::schema_fb::SpeechTranslationAudioPacket> { unsigned int x0; })addObjectToBuffer:(void *)buffer;
- (id)flatbuffData;
@end

#endif /* FTSpeechTranslationAudioPacket_h */