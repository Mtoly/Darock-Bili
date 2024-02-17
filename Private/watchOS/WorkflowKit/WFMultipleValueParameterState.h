//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFMultipleValueParameterState_h
#define WFMultipleValueParameterState_h
@import Foundation;

#include "WFVariableSubstitutableParameterState.h"

@class NSArray;

@interface WFMultipleValueParameterState : WFVariableSubstitutableParameterState

@property (readonly, nonatomic) NSArray *parameterStates;

/* class methods */
+ (Class)processingValueClass;
+ (id)valueFromSerializedRepresentation:(id)representation variableProvider:(id)provider parameter:(id)parameter;
+ (id)serializedRepresentationFromValue:(id)value;

/* instance methods */
- (id)initWithValue:(id)value;
- (id)initWithParameterStates:(id)states;
- (id)containedVariables;
- (id)stateByReplacingVariable:(id)variable withVariable:(id)variable;
- (void)processWithContext:(id)context userInputRequiredHandler:(id /* block */)handler valueHandler:(id /* block */)handler;
- (void)finishProcessingWithContent:(id)content error:(id)error forParameterStateClass:(Class)class valueHandler:(id /* block */)handler;
- (id)stateByTogglingValue:(id)value;
- (id)stateByReplacingValueAtIndex:(unsigned long long)index withValue:(id)value;
- (id)stateByReplacingValueAtIndexes:(id)indexes withValues:(id)values;
- (id)stateByAppendingValue:(id)value;
- (id)stateByRemovingValueAtIndex:(unsigned long long)index;
- (id)stateByInsertingValueAtIndex:(unsigned long long)index withValue:(id)value;
@end

#endif /* WFMultipleValueParameterState_h */