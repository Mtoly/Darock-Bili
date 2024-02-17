//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMPBUserFocusComputedModeEvent_h
#define BMPBUserFocusComputedModeEvent_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface BMPBUserFocusComputedModeEvent : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 modeSemanticType; unsigned int x :1 modeUpdateReason; unsigned int x :1 modeUpdateSource; unsigned int x :1 starting; } _has;
}

@property (readonly, nonatomic) BOOL hasMode;
@property (retain, nonatomic) NSString *mode;
@property (nonatomic) BOOL hasStarting;
@property (nonatomic) BOOL starting;
@property (nonatomic) BOOL hasModeUpdateReason;
@property (nonatomic) int modeUpdateReason;
@property (nonatomic) BOOL hasModeSemanticType;
@property (nonatomic) int modeSemanticType;
@property (nonatomic) BOOL hasModeUpdateSource;
@property (nonatomic) int modeUpdateSource;
@property (readonly, nonatomic) BOOL hasSemanticModeIdentifier;
@property (retain, nonatomic) NSString *semanticModeIdentifier;

/* instance methods */
- (id)modeUpdateReasonAsString:(int)string;
- (int)StringAsModeUpdateReason:(id)reason;
- (id)modeSemanticTypeAsString:(int)string;
- (int)StringAsModeSemanticType:(id)type;
- (id)modeUpdateSourceAsString:(int)string;
- (int)StringAsModeUpdateSource:(id)source;
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

#endif /* BMPBUserFocusComputedModeEvent_h */