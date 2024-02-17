//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 13.0.0.0.0
//
#ifndef SCRTaskTargetConfiguration_h
#define SCRTaskTargetConfiguration_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;
@protocol SCRAsyncTargetContextProvider, SCRSyncTargetContextProvider, SCRTargetContextProvider;

@interface SCRTaskTargetConfiguration : NSObject<NSCopying, BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSString *targetIdentifier;
@property (readonly, nonatomic) NSObject<SCRSyncTargetContextProvider> *syncContextProvider;
@property (readonly, nonatomic) NSObject<SCRAsyncTargetContextProvider> *asyncContextProvider;
@property (readonly, nonatomic) NSObject<SCRTargetContextProvider> *contextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTarget:(id)target syncContextProvider:(id)provider;
- (id)initWithTarget:(id)target asyncContextProvider:(id)provider;
- (id)_initWithTarget:(id)target syncProvider:(id)provider asyncProvider:(id)provider;
- (void)createContextWithCompletion:(id /* block */)completion;
- (void)invalidateTargetContext:(id)context completion:(id /* block */)completion;
- (Class)_expectedTargetContextClass;
- (id)_expectedTargetContextProtocol;
- (void)_validateContext:(id)context;
- (id)initWithTarget:(id)target contextProvider:(id)provider;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
@end

#endif /* SCRTaskTargetConfiguration_h */