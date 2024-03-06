//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef AWDHomeKitCameraSnapshotIDSTransfer_h
#define AWDHomeKitCameraSnapshotIDSTransfer_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface AWDHomeKitCameraSnapshotIDSTransfer : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 receivedImage; unsigned int x :1 sentImage; } _has;
}

@property (nonatomic) BOOL hasSentImage;
@property (nonatomic) unsigned int sentImage;
@property (nonatomic) BOOL hasReceivedImage;
@property (nonatomic) unsigned int receivedImage;

/* instance methods */
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

#endif /* AWDHomeKitCameraSnapshotIDSTransfer_h */