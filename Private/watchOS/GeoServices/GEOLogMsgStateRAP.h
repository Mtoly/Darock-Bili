//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOLogMsgStateRAP_h
#define GEOLogMsgStateRAP_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString, PBDataReader;

@interface GEOLogMsgStateRAP : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_duration; unsigned int x :1 has_entryPoint; unsigned int x :1 has_feedbackType; unsigned int x :1 read_feedbackFieldOptionKeys; unsigned int x :1 read_rapAbBranchId; unsigned int x :1 read_rapAbManifestVersion; unsigned int x :1 read_rapServerManifestVersion; unsigned int x :1 wrote_anyField; } _flags;
}

@property (nonatomic) BOOL hasEntryPoint;
@property (nonatomic) int entryPoint;
@property (nonatomic) BOOL hasFeedbackType;
@property (nonatomic) int feedbackType;
@property (retain, nonatomic) NSMutableArray *feedbackFieldOptionKeys;
@property (readonly, nonatomic) BOOL hasRapServerManifestVersion;
@property (retain, nonatomic) NSString *rapServerManifestVersion;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;
@property (readonly, nonatomic) BOOL hasRapAbManifestVersion;
@property (retain, nonatomic) NSString *rapAbManifestVersion;
@property (readonly, nonatomic) BOOL hasRapAbBranchId;
@property (retain, nonatomic) NSString *rapAbBranchId;

/* class methods */
+ (Class)feedbackFieldOptionKeyType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (id)entryPointAsString:(int)string;
- (int)StringAsEntryPoint:(id)point;
- (id)feedbackTypeAsString:(int)string;
- (int)StringAsFeedbackType:(id)type;
- (void)clearFeedbackFieldOptionKeys;
- (void)addFeedbackFieldOptionKey:(id)key;
- (unsigned long long)feedbackFieldOptionKeysCount;
- (id)feedbackFieldOptionKeyAtIndex:(unsigned long long)index;
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

#endif /* GEOLogMsgStateRAP_h */