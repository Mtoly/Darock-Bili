//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HMService_AbstractionAdditions_h
#define HMService_AbstractionAdditions_h
@import Foundation;

@interface HMService (AbstractionAdditions) <HFAccessoryLikeObjectVendor, HFAccessoryRepresentable, HFFavoritable, HFHomeStatusVisible, HFShowInHomeDashboard, HFStateDumpBuildable, HFIncludedContextProtocol, HFHomeContainedObject, HFRoomContextProviding, HFUserNotificationServiceSettingsProviding, HFApplicationData, HFAccessoryLikeObjectRootHomeKitObjectProvider, HFReorderableHomeKitObject, HFServiceNameComponentsProviding>
/* class methods */
+ (id)hf_programmableSwitchServiceTypes;
+ (id)hf_standardServiceTypes;
+ (id)hf_roomsForServices:(id)services;
+ (id /* block */)hf_serviceComparator;
+ (id)hf_serviceTypesHiddenFromScenesOrAutomations;
+ (id)hf_fanServiceTypes;
+ (id)hf_sensorServiceTypes;
+ (id)hf_alarmSensorServiceTypes;
+ (id)_hf_allowedChildServicesTypeMap;
+ (id)hf_defaultServiceSubtypeForServiceType:(id)type;
+ (id)hf_descriptionForServiceSubtype:(id)subtype;
+ (id)hf_characteristicsInServices:(id)services;
+ (id)hf_getUserFriendlyDescriptionKey:(id)key;
+ (id)hf_userFriendlyLocalizedCapitalizedDescription:(id)description;
+ (id)hf_userFriendlyLocalizedLowercaseDescription:(id)description;
+ (id)hf_sensorCharacteristicTypeForServiceType:(id)type;
+ (id)hf_requiredCharacteristicTypesForDisplayMetadataWithServiceType:(id)type;
+ (id)hf_allRequiredCharacteristicTypesForStandardServices;

/* instance methods */
- (id)hf_displayName;
- (id)hf_serviceNameComponents;
- (id)hf_dateAdded;
- (id)hf_updateDateAdded:(id)added;
- (id)hf_rootAccessoryLikeHomeKitObject;
- (void)hf_updateApplicationData:(id)data needCellReload:(BOOL)reload handleError:(BOOL)error completionHandler:(id /* block */)handler;
- (void)hf_updateApplicationData:(id)data handleError:(BOOL)error completionHandler:(id /* block */)handler;
- (void)hf_postUpdateApplicationDataNotification:(id)notification needCellReload:(BOOL)reload;
- (id)hf_userNotificationSettings;
- (id)hf_updateUserNotificationSettings:(id)settings;
- (id)hf_parentRoom;
- (BOOL)hf_isValidObject;
- (id)home;
- (BOOL)hf_isProgrammableSwitch;
- (unsigned long long)hf_fallbackProgrammableSwitchIndex;
- (id)hf_labelIndexCharacteristic;
- (id)hf_labelNamespaceCharacteristic;
- (id)_hf_firstLinkedServiceOfType:(id)type;
- (id)hf_characteristicOfType:(id)type;
- (id)hf_serviceDescriptor;
- (id)hf_effectiveServiceType;
- (id)hf_iconDescriptor;
- (id)hf_updateIconDescriptor:(id)descriptor;
- (BOOL)hf_supportsGroups;
- (id)hf_serviceGroup;
- (BOOL)hf_isInGroup;
- (BOOL)hf_isLegacyService;
- (BOOL)hf_isVisible;
- (BOOL)hf_showsAsServiceInControlCentre;
- (BOOL)hf_isFan;
- (BOOL)hf_isTelevision;
- (BOOL)hf_isChildService;
- (BOOL)hf_isSensorService;
- (BOOL)hf_isAlarmSensorService;
- (BOOL)hf_isCameraContainedMotionSensor;
- (BOOL)hf_requiresDeviceUnlock;
- (id)hf_childServicesOfType:(id)type;
- (id)hf_childServices;
- (BOOL)_hf_isDirectlyOrIndirectlyLinkedToService:(id)service;
- (id)hf_parentService;
- (id)hf_effectiveServiceSubtype;
- (BOOL)hf_canGroupWithService:(id)service;
- (id)hf_characteristicEqualToType:(id)type forServiceType:(id)type;
- (id)hf_lightProfiles;
- (BOOL)hf_supportsNaturalLighting;
- (BOOL)hf_isDisplayableSensor;
- (id)hf_userFriendlyLocalizedCapitalizedDescription;
- (id)hf_userFriendlyLocalizedLowercaseDescription;
- (BOOL)hf_isOnForContextType:(unsigned long long)type;
- (BOOL)hf_hasSetForContextType:(unsigned long long)type;
- (BOOL)hf_shouldBeOnForContextType:(unsigned long long)type;
- (BOOL)hf_shouldHideForContextType:(unsigned long long)type;
- (id)hf_updateValue:(BOOL)value forContextType:(unsigned long long)type;
- (id)hf_requiredCharacteristicTypesForDisplayMetadata;
- (id)hf_stateDumpBuilderWithContext:(id)context;
- (BOOL)hf_isInRoom:(id)room;
- (id)hf_homeKitObject;
- (id)hf_accessoryLikeObject;
- (Class)hf_itemClass;
- (id)hf_containedServices;
- (id)hf_containedProfiles;
- (id)hf_containedCharacteristics;
- (id)hf_associatedAccessories;
- (id)hf_accessoryType;
- (id)hf_safeRoom;
- (BOOL)hf_canSpanMultipleRooms;
- (BOOL)hf_isIdentifiable;
- (id)hf_moveToRoom:(id)room;
- (BOOL)hf_isFavorite;
- (BOOL)hf_hasSetFavorite;
- (BOOL)hf_shouldShowInFavorites;
- (BOOL)hf_effectiveIsFavorite;
- (id)hf_updateIsFavorite:(BOOL)favorite;
- (BOOL)hf_supportsHomeStatus;
- (BOOL)hf_isVisibleInHomeStatus;
- (BOOL)hf_hasSetVisibleInHomeStatus;
- (BOOL)hf_isForcedVisibleInHomeStatus;
- (id)hf_updateIsVisibleInHomeStatus:(BOOL)status;
- (BOOL)hf_showInHomeDashboard;
- (BOOL)hf_hasSetShowInHomeDashboard;
- (BOOL)hf_effectiveShowInHomeDashboard;
- (id)hf_updateShowInHomeDashboard:(BOOL)dashboard;
- (id)hf_tileSize;
- (id)hf_setTileSize:(id)size;
@end

#endif /* HMService_AbstractionAdditions_h */