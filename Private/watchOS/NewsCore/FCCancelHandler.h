//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCCancelHandler_h
#define FCCancelHandler_h
@import Foundation;

#include "FCOperationCanceling-Protocol.h"

@class NSString;

@interface FCCancelHandler : NSObject<FCOperationCanceling>

@property (copy, nonatomic) id /* block */ cancelBlock;
@property (weak, nonatomic) id weakTarget;
@property (retain, nonatomic) id strongTarget;
@property (nonatomic) SEL selector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)cancelHandlerWithBlock:(id /* block */)block;
+ (id)cancelHandlerWithWeakTarget:(id)target selector:(SEL)selector;
+ (id)cancelHandlerWithStrongTarget:(id)target selector:(SEL)selector;

/* instance methods */
- (id)initWithBlock:(id /* block */)block;
- (id)initWithWeakTarget:(id)target selector:(SEL)selector;
- (id)initWithStrongTarget:(id)target selector:(SEL)selector;
- (void)cancel;
@end

#endif /* FCCancelHandler_h */