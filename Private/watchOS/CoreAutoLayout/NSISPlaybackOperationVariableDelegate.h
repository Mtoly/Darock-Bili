//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 32.0.0.0.0
//
#ifndef NSISPlaybackOperationVariableDelegate_h
#define NSISPlaybackOperationVariableDelegate_h
@import Foundation;

#include "NSISVariable.h"

@class NSString;

@interface NSISPlaybackOperationVariableDelegate : NSObject

@property (retain) NSISVariable *variable;
@property (copy) NSString *variableDescription;
@property (copy) NSString *markedConstraintDescription;
@property BOOL variableIsUserObservable;
@property int orientationHint;

/* instance methods */
- (void)dealloc;
- (void)nsis_valueOfVariable:(id)variable didChangeInEngine:(id)engine;
- (id)nsis_descriptionOfVariable:(id)variable;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)observable;
- (int)nsis_orientationHintForVariable:(id)variable;
- (id)description;
- (id)firstItem;
- (id)secondItem;
- (void)_addToEngine:(id)engine;
@end

#endif /* NSISPlaybackOperationVariableDelegate_h */