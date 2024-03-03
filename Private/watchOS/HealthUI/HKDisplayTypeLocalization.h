//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKDisplayTypeLocalization_h
#define HKDisplayTypeLocalization_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDictionary, NSSet, NSString;

@interface HKDisplayTypeLocalization : NSObject<NSCopying> {
  /* instance variables */
  NSString *_labelDisplayNameKey;
  NSString *_shortenedDisplayNameKey;
  NSString *_embeddedDisplayNameKey;
  NSString *_titleEmbeddedDisplayNameKey;
  NSString *_keywordsNameKey;
  NSString *_summaryNameKey;
  NSString *_summaryIPadNameKey;
  NSString *_summaryForEnhancedFeatureNameKey;
  NSString *_summaryPairedWatchNameKey;
  NSString *_displayNameFitnessJrKey;
  NSString *_summaryFitnessJrKey;
  NSString *_cautionaryTextKey;
  NSString *_unitChangeCautionaryTextKey;
}

@property (readonly, copy, nonatomic) NSString *localizationTableNameOverride;
@property (readonly, copy, nonatomic) NSString *displayNameKey;
@property (readonly, copy, nonatomic) NSString *localizedKeySuffix;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *displayNameForFitnessJr;
@property (readonly, copy, nonatomic) NSString *shortenedDisplayName;
@property (readonly, copy, nonatomic) NSString *embeddedDisplayName;
@property (readonly, copy, nonatomic) NSString *titleEmbeddedDisplayName;
@property (readonly, copy, nonatomic) NSString *labelDisplayName;
@property (readonly, copy, nonatomic) NSDictionary *unitNameKeyOverrides;
@property (readonly, copy, nonatomic) NSSet *keywords;
@property (readonly, copy, nonatomic) NSString *cautionaryText;
@property (readonly, copy, nonatomic) NSString *unitChangeCautionaryText;
@property (readonly, nonatomic) NSString *summary;
@property (readonly, nonatomic) NSString *summaryForEnhancedFeature;
@property (readonly, nonatomic) NSString *summaryForFitnessJr;
@property (readonly, nonatomic) NSString *summaryForPairedWatch;

/* instance methods */
- (id)init;
- (id)initWithDisplayNameKey:(id)key labelDisplayNameKey:(id)key localizationTableNameOverride:(id)override localizedKeySuffix:(id)suffix unitNameKeyOverrides:(id)overrides;
- (void)_expandLocalizationKeys;
- (id)unitDisplayNameKeyOverrideForUnit:(id)unit nameContext:(long long)context;
- (id)_localizedStringWithKey:(id)key;
- (id)_rawLocalizedStringForKey:(id)key;
- (id)_localizedStringForKeyOrNil:(id)nil;
- (id)copyWithLocalizedKeySuffix:(id)suffix;
- (id)copyWithLocalizationTableNameOverride:(id)override;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HKDisplayTypeLocalization_h */