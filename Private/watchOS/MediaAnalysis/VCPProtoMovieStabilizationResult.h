//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPProtoMovieStabilizationResult_h
#define VCPProtoMovieStabilizationResult_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "VCPProtoResultLegacyConversionProtocol-Protocol.h"

@class NSData;

@interface VCPProtoMovieStabilizationResult : PBCodable<VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (nonatomic) float analysisConfidence;
@property (nonatomic) BOOL gyroStabilization;
@property (readonly, nonatomic) BOOL hasRecipeBlob;
@property (retain, nonatomic) NSData *recipeBlob;

/* class methods */
+ (id)resultFromLegacyDictionary:(id)dictionary;

/* instance methods */
- (id)exportToLegacyDictionary;
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

#endif /* VCPProtoMovieStabilizationResult_h */