//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EFSQLBetweenExpression_h
#define EFSQLBetweenExpression_h
@import Foundation;

#include "EFPair.h"
#include "EFSQLBitExpressable-Protocol.h"
#include "EFSQLExpressable-Protocol.h"
#include "EFSQLValueExpressable-Protocol.h"

@class NSString;

@interface EFSQLBetweenExpression : EFPair<EFSQLBitExpressable, EFSQLValueExpressable>

@property (readonly, nonatomic) NSObject<EFSQLExpressable> *left;
@property (readonly, nonatomic) BOOL between;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;

/* instance methods */
- (id)initWithLeft:(id)left firstValue:(id)value secondValue:(id)value between:(BOOL)between;
- (void)ef_renderSQLExpressionInto:(id)into;
- (id)ef_SQLIsolatedExpression;
- (void)setColumnExpression:(id)expression;
@end

#endif /* EFSQLBetweenExpression_h */