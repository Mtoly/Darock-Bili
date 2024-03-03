//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef CNUIUserActionListDataSource_h
#define CNUIUserActionListDataSource_h
@import Foundation;

#include "CNUIUserActionDisambiguationModeler.h"
#include "CNUIUserActionListDataSource-Protocol.h"
#include "CNUIUserActionListModelCache.h"

@class NSString;
@protocol CNScheduler, CNSchedulerProvider;

@interface CNUIUserActionListDataSource : NSObject<CNUIUserActionListDataSource> {
  /* instance variables */
  unsigned long long _cacheCapacity;
  double _cacheEntryRefreshAge;
  double _cacheEntryExpirationAge;
}

@property (retain, nonatomic) CNUIUserActionListModelCache *models;
@property (retain, nonatomic) CNUIUserActionDisambiguationModeler *modeler;
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider;
@property (readonly, nonatomic) NSObject<CNScheduler> *resolutionScheduler;
@property (nonatomic) BOOL tracksChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)os_log;
+ (id)descriptorForRequiredKeys;
+ (id)makeCacheWithCapacity:(unsigned long long)capacity expirationAge:(double)age timeProvider:(id)provider;
+ (id)allActionTypes;
+ (id)allSupportedActionTypes;
+ (id)allSupportedActionTypesWithCapabilities:(id)capabilities;
+ (id)displayNameForButtonForActionType:(id)type;
+ (id)displayNameForDisambiguationForActionType:(id)type;
+ (BOOL)isSupportedActionType:(id)type;

/* instance methods */
- (id)initWithSchedulerProvider:(id)provider;
- (id)initWithSchedulerProvider:(id)provider idsAvailabilityProvider:(id)provider;
- (id)initWithDiscoveringEnvironment:(id)environment;
- (id)makeCacheWithCurrentSettings;
- (void)dealloc;
- (void)setCacheCapacity:(unsigned long long)capacity;
- (void)setCacheEntryRefreshAge:(double)age;
- (void)setCacheEntryExpirationAge:(double)age;
- (void)makeCacheAndTransferContents;
- (void)setContactStore:(id)store;
- (id)actionTypesForConsumer:(id)consumer;
- (id)consumer:(id)consumer imageForActionType:(id)type;
- (id)consumer:(id)consumer localizedDisplayNameForActionType:(id)type;
- (id)consumer:(id)consumer localizedButtonDisplayNameForActionType:(id)type;
- (id)consumer:(id)consumer localizedDisplayNameForButtonWithDefaultAction:(id)action actionType:(id)type;
- (BOOL)shouldUseLabelForButtonWithDefaultAction:(id)action;
- (id)consumer:(id)consumer currentActionModelForContact:(id)contact actionType:(id)type;
- (id)consumer:(id)consumer actionModelsForContact:(id)contact actionType:(id)type handler:(id /* block */)handler;
- (id)consumer:(id)consumer actionModelsForContact:(id)contact actionType:(id)type;
- (id)modelsForContact:(id)contact actionType:(id)type;
- (void)performFirstResolutionForEntry:(id)entry contact:(id)contact actionType:(id)type;
- (void)refreshEntry:(id)entry contact:(id)contact actionType:(id)type;
- (id)makeModelObservableForContact:(id)contact actionType:(id)type;
- (id)thirdPartyTargetsForActionTypes:(id)types;
- (id)thirdPartyActionsForContactProperty:(id)property;
- (id)thirdPartyActionsForContact:(id)contact propertyKey:(id)key identifier:(id)identifier;
- (id)actionTypesToUpdateForSelectedItem:(id)item;
- (void)consumer:(id)consumer didSelectItem:(id)item forContact:(id)contact actionType:(id)type;
@end

#endif /* CNUIUserActionListDataSource_h */