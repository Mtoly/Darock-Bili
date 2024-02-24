//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIListSeparatorConfiguration_h
#define UIListSeparatorConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "UIColor.h"
#include "UIVisualEffect.h"

@interface UIListSeparatorConfiguration : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  BOOL _ignoreTopSeparatorInsetsFromCell;
  BOOL _ignoreBottomSeparatorInsetsFromCell;
}

@property (nonatomic) BOOL _ignoreBottomSeparatorInsetsFromCell;
@property (nonatomic) BOOL _ignoreTopSeparatorInsetsFromCell;
@property (copy, nonatomic) UIVisualEffect *_visualEffect;
@property (nonatomic) long long topSeparatorVisibility;
@property (nonatomic) long long bottomSeparatorVisibility;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } topSeparatorInsets;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } bottomSeparatorInsets;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *multipleSelectionColor;
@property (copy, nonatomic) UIVisualEffect *visualEffect;

/* class methods */
+ (id)_dynamicMultiselectSeparatorColor_UICollectionLayoutListAppearancePlain;
+ (id)_dynamicMultiselectSeparatorColor_UICollectionLayoutListAppearanceGrouped;
+ (id)_dynamicMultiselectSeparatorColor_UICollectionLayoutListAppearanceInsetGrouped;
+ (id)_dynamicMultiselectSeparatorColor_UICollectionLayoutListAppearanceSidebar;
+ (id)_dynamicMultiselectSeparatorColor_UICollectionLayoutListAppearanceSidebarPlain;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_multiselectSeparatorColorForListAppearance:(long long)appearance;
- (id)initWithListAppearance:(long long)appearance;
- (void)_replaceAutomaticValuesWithValuesFromConfiguration:(id)configuration;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)__copyWithSubclass:(Class)subclass inZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)_setInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_insets;
- (void)_setColor:(id)color;
- (id)_color;
- (void)_setMultipleSelectionColor:(id)color;
- (id)_multipleSelectionColor;
- (void)_setVisualEffect:(id)effect;
- (void)_setIgnoreTopSeparatorInsetsFromCell:(BOOL)cell;
- (void)_setIgnoreBottomSeparatorInsetsFromCell:(BOOL)cell;
@end

#endif /* UIListSeparatorConfiguration_h */