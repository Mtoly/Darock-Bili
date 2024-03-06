//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEORPFeatureHandle_h
#define GEORPFeatureHandle_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface GEORPFeatureHandle : PBCodable<NSCopying> {
  /* instance variables */
  unsigned long long _styleAttributesSpace;
  struct { unsigned int x :1 has_featureIndex; unsigned int x :1 has_featureTileX; unsigned int x :1 has_featureTileY; unsigned int x :1 has_featureTileZ; unsigned int x :1 has_identifier; unsigned int x :1 has_style; unsigned int x :1 has_type; } _flags;
}

@property (nonatomic) BOOL hasFeatureIndex;
@property (nonatomic) unsigned int featureIndex;
@property (nonatomic) BOOL hasFeatureTileX;
@property (nonatomic) unsigned int featureTileX;
@property (nonatomic) BOOL hasFeatureTileY;
@property (nonatomic) unsigned int featureTileY;
@property (nonatomic) BOOL hasFeatureTileZ;
@property (nonatomic) unsigned int featureTileZ;
@property (nonatomic) BOOL hasStyle;
@property (nonatomic) int style;
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) unsigned long long styleAttributesCount;
@property (readonly, nonatomic) struct GEORPFeatureHandleStyleAttribute { int x0; int x1; } * styleAttributes;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (void)dealloc;
- (id)styleAsString:(int)string;
- (int)StringAsStyle:(id)style;
- (id)typeAsString:(int)string;
- (int)StringAsType:(id)type;
- (void)clearStyleAttributes;
- (void)addStyleAttribute:(struct GEORPFeatureHandleStyleAttribute { int x0; int x1; })attribute;
- (struct GEORPFeatureHandleStyleAttribute { int x0; int x1; })styleAttributeAtIndex:(unsigned long long)index;
- (void)setStyleAttributes:(struct GEORPFeatureHandleStyleAttribute { int x0; int x1; } *)attributes count:(unsigned long long)count;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* GEORPFeatureHandle_h */