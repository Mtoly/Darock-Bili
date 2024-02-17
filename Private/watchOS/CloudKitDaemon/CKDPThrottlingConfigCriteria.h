//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDPThrottlingConfigCriteria_h
#define CKDPThrottlingConfigCriteria_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface CKDPThrottlingConfigCriteria : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 containerEnvironment; unsigned int x :1 databaseType; unsigned int x :1 operationType; } _has;
}

@property (readonly, nonatomic) BOOL hasContainerName;
@property (retain, nonatomic) NSString *containerName;
@property (nonatomic) BOOL hasContainerEnvironment;
@property (nonatomic) int containerEnvironment;
@property (nonatomic) BOOL hasOperationType;
@property (nonatomic) int operationType;
@property (nonatomic) BOOL hasDatabaseType;
@property (nonatomic) int databaseType;
@property (readonly, nonatomic) BOOL hasZoneName;
@property (retain, nonatomic) NSString *zoneName;
@property (readonly, nonatomic) BOOL hasOperationGroupName;
@property (retain, nonatomic) NSString *operationGroupName;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BOOL hasInvernessServiceName;
@property (retain, nonatomic) NSString *invernessServiceName;
@property (readonly, nonatomic) BOOL hasInvernessFunctionName;
@property (retain, nonatomic) NSString *invernessFunctionName;

/* instance methods */
- (id)containerEnvironmentAsString:(int)string;
- (int)StringAsContainerEnvironment:(id)environment;
- (id)operationTypeAsString:(int)string;
- (int)StringAsOperationType:(id)type;
- (id)databaseTypeAsString:(int)string;
- (int)StringAsDatabaseType:(id)type;
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

#endif /* CKDPThrottlingConfigCriteria_h */