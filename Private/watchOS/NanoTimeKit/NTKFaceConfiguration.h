//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKFaceConfiguration_h
#define NTKFaceConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface NTKFaceConfiguration : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  NSMutableDictionary *_complications;
  NSMutableDictionary *_editModeConfigurations;
  NSMutableDictionary *_metrics;
  NSMutableDictionary *_customData;
  NSString *_cachedDescription;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _complicationsLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _editModeConfigurationsLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _metricsLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _customDataLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedDescriptionLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _descriptionLock;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL resourceDirectoryExists;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)optionForCustomEditMode:(long long)mode slot:(id)slot;
- (void)setOption:(id)option forCustomEditMode:(long long)mode slot:(id)slot;
- (id)complicationForSlot:(id)slot;
- (void)setComplication:(id)complication forSlot:(id)slot;
- (id)description;
- (void)_invalidateDescription;
- (id)validationString;
- (void)appendEditModesToDailySnapshotKey:(id)key;
- (void)appendCustomDataToDailySnapshotKey:(id)key;
- (id)metricForKey:(id)key;
- (void)setMetric:(id)metric forKey:(id)key;
- (void)incrementMetricForKey:(id)key;
- (void)setMetricsFromConfiguration:(id)configuration;
- (void)clearMetrics;
- (void)_enumerateEditModeConfigurationsWithBlock:(id /* block */)block;
- (void)_enumerateCustomDataWithBlock:(id /* block */)block;
- (void)_enumerateComplicationsWithBlock:(id /* block */)block;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)complications;
- (id)editModeConfigurations;
- (id)metrics;
- (id)customData;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (void)addConfigurationKeysToJSONDictionary:(id)jsondictionary face:(id)face;
- (id)initWithJSONDictionary:(id)jsondictionary editModeMapping:(id)mapping forDevice:(id)device;
- (void)_applyCustomizationDescription:(id)description editModeMapping:(id)mapping forDevice:(id)device;
- (id)colorEditModeConfigurationWithJsonRepresentation:(id)representation editMode:(long long)mode editModeMapping:(id)mapping forDevice:(id)device;
- (void)_applyComplicationsDescription:(id)description;
- (void)_applyMetrics:(id)metrics;
- (void)_applyCustomData:(id)data;
- (id)_dateMetricsKeys;
- (id)customDataForKey:(id)key;
- (void)setCustomData:(id)data forKey:(id)key;
- (void)setCustomDataFromConfiguration:(id)configuration;
@end

#endif /* NTKFaceConfiguration_h */