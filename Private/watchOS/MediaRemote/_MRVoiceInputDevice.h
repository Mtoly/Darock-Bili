//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef _MRVoiceInputDevice_h
#define _MRVoiceInputDevice_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "_MRVoiceInputDeviceDescriptorProtobuf.h"

@interface _MRVoiceInputDevice : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 deviceID; unsigned int x :1 recordingState; } _has;
}

@property (nonatomic) BOOL hasDeviceID;
@property (nonatomic) unsigned int deviceID;
@property (readonly, nonatomic) BOOL hasDescriptor;
@property (retain, nonatomic) _MRVoiceInputDeviceDescriptorProtobuf *descriptor;
@property (nonatomic) BOOL hasRecordingState;
@property (nonatomic) int recordingState;

/* instance methods */
- (id)recordingStateAsString:(int)string;
- (int)StringAsRecordingState:(id)state;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* _MRVoiceInputDevice_h */