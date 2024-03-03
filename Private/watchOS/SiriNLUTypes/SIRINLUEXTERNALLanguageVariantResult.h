//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SIRINLUEXTERNALLanguageVariantResult_h
#define SIRINLUEXTERNALLanguageVariantResult_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "SIRINLUEXTERNALParser.h"

@class NSMutableArray;

@interface SIRINLUEXTERNALLanguageVariantResult : PBCodable<NSCopying>

@property (retain, nonatomic) NSMutableArray *multilingualVariants;
@property (readonly, nonatomic) BOOL hasParser;
@property (retain, nonatomic) SIRINLUEXTERNALParser *parser;

/* class methods */
+ (Class)multilingualVariantType;

/* instance methods */
- (void)clearMultilingualVariants;
- (void)addMultilingualVariant:(id)variant;
- (unsigned long long)multilingualVariantsCount;
- (id)multilingualVariantAtIndex:(unsigned long long)index;
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

#endif /* SIRINLUEXTERNALLanguageVariantResult_h */