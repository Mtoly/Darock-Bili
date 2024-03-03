//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 114.2.2.0.0
//
#ifndef WAGUIInteractionAction_h
#define WAGUIInteractionAction_h
@import Foundation;

#include "BSAction.h"

@class NSUUID;

@interface WAGUIInteractionAction : BSAction

@property (copy, nonatomic) id /* block */ sendResponseOverrideBlock;
@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (readonly, copy, nonatomic) id /* block */ responseHandler;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithInfo:(id)info responderHandler:(id /* block */)handler;
- (id)initWithCoder:(id)coder;
- (void)sendResponse:(id)response;
@end

#endif /* WAGUIInteractionAction_h */