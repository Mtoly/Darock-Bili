//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.2.12.0.0
//
#ifndef AMSUIWebJSProperties_h
#define AMSUIWebJSProperties_h
@import Foundation;

#include "AMSUIWebClientContext.h"
#include "AMSUIWebJSPropertiesDelegate-Protocol.h"

@class NSDictionary;

@interface AMSUIWebJSProperties : NSObject

@property (weak, nonatomic) AMSUIWebClientContext *context;
@property (retain, nonatomic) NSDictionary *lastAccountsExport;
@property (weak, nonatomic) NSObject<AMSUIWebJSPropertiesDelegate> *delegate;

/* instance methods */
- (id)initWithContext:(id)context delegate:(id)delegate;
- (void)dealloc;
- (id)generateProperties;
- (void)_accessibilityPropertiesDidChange:(id)change;
- (void)_accountStoreDidChange:(id)change;
- (void)_lastConnectionReportDidChange:(id)change;
- (id)_accountsProperties;
- (id)_appearanceProperties;
- (id)_appearancePropertiesDictionary;
- (id)_clientOptionsProperties;
- (id)_deviceProperties;
- (id)_pluginProperties;
- (id)_processProperties;
- (id)_propertiesForClientInfo:(id)info;
- (id)_hexStringFromColor:(id)color;
@end

#endif /* AMSUIWebJSProperties_h */