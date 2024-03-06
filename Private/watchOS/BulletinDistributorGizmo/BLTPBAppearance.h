//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 379.2.3.0.0
//
#ifndef BLTPBAppearance_h
#define BLTPBAppearance_h
@import Foundation;

#include "PBCodable.h"
#include "BLTPBImage.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface BLTPBAppearance : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 destructive; } _has;
}

@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasImage;
@property (retain, nonatomic) BLTPBImage *image;
@property (nonatomic) BOOL hasDestructive;
@property (nonatomic) BOOL destructive;

/* instance methods */
- (id)description;
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

#endif /* BLTPBAppearance_h */