//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef BSAction_h
#define BSAction_h
@import Foundation;

#include "BSDebugDescriptionProviding-Protocol.h"
#include "BSInvalidatable-Protocol.h"
#include "BSSettingDescriptionProvider-Protocol.h"
#include "BSSettings.h"
#include "BSXPCCoding-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_BSActionResponder.h"

@class NSString;

@interface BSAction : NSObject<BSXPCCoding, NSSecureCoding, BSSettingDescriptionProvider, BSDebugDescriptionProviding, BSInvalidatable> {
  /* instance variables */
  _BSActionResponder *_responder;
  BOOL _isImplicitOriginator;
}

@property (readonly, @dynamic, nonatomic) BOOL expectsResponse;
@property (readonly, copy, nonatomic) BSSettings *info;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)new;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithInfo:(id)info responder:(id)responder;
- (id)initWithInfo:(id)info timeout:(double)timeout forResponseOnQueue:(id)queue withHandler:(id /* block */)handler;
- (id)init;
- (void)dealloc;
- (id)initWithXPCDictionary:(id)xpcdictionary;
- (void)encodeWithXPCDictionary:(id)xpcdictionary;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)keyDescriptionForSetting:(unsigned long long)setting;
- (id)valueDescriptionForFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
- (BOOL)canSendResponse;
- (void)sendResponse:(id)response;
- (void)sendResponse:(id)response withCompletion:(id /* block */)completion;
- (BOOL)isValid;
- (void)invalidate;
- (void)setInvalidationHandler:(id /* block */)handler;
- (void)setNullificationHandler:(id /* block */)handler;
- (BOOL)_expectsResponse;
- (BOOL)isEqual:(id)equal;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (id)debugDescriptionWithMultilinePrefix:(id)prefix;
@end

#endif /* BSAction_h */