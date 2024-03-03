//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMPBGameControllerEvent_h
#define BMPBGameControllerEvent_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface BMPBGameControllerEvent : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 numberOfControllersConnected; unsigned int x :1 isControllerConnected; } _has;
}

@property (nonatomic) BOOL hasIsControllerConnected;
@property (nonatomic) BOOL isControllerConnected;
@property (nonatomic) BOOL hasNumberOfControllersConnected;
@property (nonatomic) int numberOfControllersConnected;

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

#endif /* BMPBGameControllerEvent_h */