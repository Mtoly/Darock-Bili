//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef _MRSetDiscoveryModeProtobufMessage_h
#define _MRSetDiscoveryModeProtobufMessage_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "_MRDiscoverySessionConfigurationProtobuf.h"

@interface _MRSetDiscoveryModeProtobufMessage : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 features; unsigned int x :1 mode; } _has;
}

@property (nonatomic) BOOL hasMode;
@property (nonatomic) int mode;
@property (nonatomic) BOOL hasFeatures;
@property (nonatomic) int features;
@property (readonly, nonatomic) BOOL hasConfiguration;
@property (retain, nonatomic) _MRDiscoverySessionConfigurationProtobuf *configuration;

/* instance methods */
- (id)modeAsString:(int)string;
- (int)StringAsMode:(id)mode;
- (id)featuresAsString:(int)string;
- (int)StringAsFeatures:(id)features;
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

#endif /* _MRSetDiscoveryModeProtobufMessage_h */