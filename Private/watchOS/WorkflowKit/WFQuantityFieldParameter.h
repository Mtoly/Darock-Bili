//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFQuantityFieldParameter_h
#define WFQuantityFieldParameter_h
@import Foundation;

#include "WFNumberFieldParameter.h"

@class NSArray;

@interface WFQuantityFieldParameter : WFNumberFieldParameter

@property (copy, nonatomic) NSArray *possibleUnits;

/* class methods */
+ (BOOL)defaultAllowsDecimalNumbers;
+ (BOOL)defaultAllowsNegativeNumbers;

/* instance methods */
- (Class)singleStateClass;
- (id)initWithDefinition:(id)definition;
- (id)localizedLabelForPossibleUnit:(id)unit magnitude:(id)magnitude style:(unsigned long long)style;
- (id)defaultUnit;
- (id)defaultSerializedRepresentation;
- (void)createDialogRequestWithAttribution:(id)attribution defaultState:(id)state prompt:(id)prompt completionHandler:(id /* block */)handler;
@end

#endif /* WFQuantityFieldParameter_h */