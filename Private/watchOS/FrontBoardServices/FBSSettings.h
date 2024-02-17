//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSSettings_h
#define FBSSettings_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "BSXPCCoding-Protocol.h"
#include "BSXPCSecureCoding-Protocol.h"
#include "FBSSettings-Protocol.h"
#include "FBSSettings.h"
#include "FBSSettingsSubclass-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class BSKeyedSettings, BSSettings, NSString;

@interface FBSSettings : NSObject<FBSSettingsSubclass, BSXPCSecureCoding, BSXPCCoding, BSDescriptionProviding, FBSSettings, NSCopying, NSMutableCopying> {
  /* instance variables */
  BSKeyedSettings *_settings;
  BSKeyedSettings *_localSettings;
  BSSettings *_legacyLocalSettings;
  BSSettings *_legacyOtherSettings;
  Class _mutabilityLock;
  FBSSettings *_progenitor;
  BOOL _mutable;
  BOOL _needsCoW;
}

@property (readonly, copy, nonatomic) BSSettings *otherSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;
+ (Class)_baseClass;
+ (Class)_mutableClass;
+ (Class)_diffClass;
+ (Class)_counterpartClass;
+ (void)_setCounterpartClass:(Class)class;
+ (id)_descriptionProvider;
+ (id)_legacyDescriptionProvider;
+ (id)_settingsExtensionsForSceneExtension:(Class)extension;
+ (Class)subclassExtension;
+ (BOOL)supportsBSXPCSecureCoding;

/* instance methods */
- (id)valueForProperty:(SEL)property expectedClass:(Class)class;
- (void)setValue:(id)value forProperty:(SEL)property;
- (id)init;
- (id)initWithSettings:(id)settings;
- (id)copy:(id /* block */)copy;
- (id)mutableCopy:(id /* block */)copy;
- (id)_copyClearingProgenitor:(id /* block */)progenitor;
- (id)_progenitor;
- (id)_unitTestRealValueForProperty:(SEL)property;
- (void)_lockMutabilityToExtension:(Class)extension inBlock:(id /* block */)block;
- (id)_allSceneExtensions;
- (void)_addSceneExtension:(Class)extension;
- (void)_addSceneExtension:(Class)extension applyingSettings:(id)settings;
- (void)_removeSceneExtension:(Class)extension;
- (void)_removeAllSceneExtensions;
- (void)_removeVolatileSettings;
- (void)_removeSettingsExtension:(Class)extension;
- (id)_sceneExtensionNames;
- (BOOL)_hasAdditionalDescription;
- (void)_appendToDescriptionBuilder:(id)builder;
- (BOOL)_isEqualToSettings:(id)settings;
- (BOOL)_isEmpty;
- (BOOL)_isEmptyForCoding:(BOOL)coding;
- (BOOL)conformsToExtension:(Class)extension;
- (BOOL)isEqual:(id)equal;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (void)encodeWithBSXPCCoder:(id)bsxpccoder;
- (id)initWithBSXPCCoder:(id)bsxpccoder;
- (id)initWithXPCDictionary:(id)xpcdictionary;
- (void)encodeWithXPCDictionary:(id)xpcdictionary;
- (BOOL)settings:(id)settings appendDescriptionToBuilder:(id)builder forFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
- (id)settings:(id)settings keyDescriptionForSetting:(unsigned long long)setting;
- (id)settings:(id)settings valueDescriptionForFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
- (BOOL)appendDescriptionToBuilder:(id)builder forFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
- (id)keyDescriptionForSetting:(unsigned long long)setting;
- (id)valueDescriptionForFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
@end

#endif /* FBSSettings_h */