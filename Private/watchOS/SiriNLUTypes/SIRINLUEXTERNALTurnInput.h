//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SIRINLUEXTERNALTurnInput_h
#define SIRINLUEXTERNALTurnInput_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "SIRINLUEXTERNALSystemDialogActGroup.h"
#include "SIRINLUEXTERNALTurnContext.h"

@class NSMutableArray, NSString;

@interface SIRINLUEXTERNALTurnInput : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 startTimestamp; unsigned int x :1 tapToEdit; } _has;
}

@property (readonly, nonatomic) BOOL hasSystemDialogActGroup;
@property (retain, nonatomic) SIRINLUEXTERNALSystemDialogActGroup *systemDialogActGroup;
@property (retain, nonatomic) NSMutableArray *salientEntities;
@property (retain, nonatomic) NSMutableArray *activeTasks;
@property (retain, nonatomic) NSMutableArray *executedTasks;
@property (retain, nonatomic) NSMutableArray *asrOutputs;
@property (readonly, nonatomic) BOOL hasTurnContext;
@property (retain, nonatomic) SIRINLUEXTERNALTurnContext *turnContext;
@property (readonly, nonatomic) BOOL hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (nonatomic) BOOL hasTapToEdit;
@property (nonatomic) BOOL tapToEdit;
@property (nonatomic) BOOL hasStartTimestamp;
@property (nonatomic) unsigned long long startTimestamp;

/* class methods */
+ (Class)salientEntitiesType;
+ (Class)activeTasksType;
+ (Class)executedTasksType;
+ (Class)asrOutputsType;

/* instance methods */
- (void)clearSalientEntities;
- (void)addSalientEntities:(id)entities;
- (unsigned long long)salientEntitiesCount;
- (id)salientEntitiesAtIndex:(unsigned long long)index;
- (void)clearActiveTasks;
- (void)addActiveTasks:(id)tasks;
- (unsigned long long)activeTasksCount;
- (id)activeTasksAtIndex:(unsigned long long)index;
- (void)clearExecutedTasks;
- (void)addExecutedTasks:(id)tasks;
- (unsigned long long)executedTasksCount;
- (id)executedTasksAtIndex:(unsigned long long)index;
- (void)clearAsrOutputs;
- (void)addAsrOutputs:(id)outputs;
- (unsigned long long)asrOutputsCount;
- (id)asrOutputsAtIndex:(unsigned long long)index;
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

#endif /* SIRINLUEXTERNALTurnInput_h */