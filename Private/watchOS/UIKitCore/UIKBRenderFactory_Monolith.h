//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBRenderFactory_Monolith_h
#define UIKBRenderFactory_Monolith_h
@import Foundation;

#include "UIKBRenderFactory.h"

@interface UIKBRenderFactory_Monolith : UIKBRenderFactory
/* instance methods */
- (long long)assetIdiom;
- (void)lowQualityTraits:(id)traits;
- (id)displayContentsForKey:(id)key;
- (id)enabledTextColor;
- (id)activeTextColor;
- (id)highlightedTextColor;
- (id)variantTextColor;
- (id)highlightedVariantTextColor;
- (id)disabledTextColor;
- (id)keyplaneSwitcherDividerColor;
- (id)keyplaneSwitcherBackgroundColor;
- (id)variantPlatterBackgroundColor;
- (id)highlightedVariantBackgroundColor;
- (double)letterKeyFontSize;
- (double)letterKeySecondaryFontSize;
- (double)letterKeyFontWeight;
- (double)letterKeyTwoLineFontSize;
- (double)letterKeyTwoLineFontWeight;
- (double)controlKeyFontSize;
- (double)controlKeyFontWeight;
- (double)controlKeyRectCornerRadius;
- (double)deleteKeyFontSize;
- (double)tldKeyFontSize;
- (double)tldKeyFontWeight;
- (struct CGSize { double x0; double x1; })letterKeyFocusIncreaseSize;
- (double)keyRectCornerRadius;
- (double)shadowVerticalOffset;
- (double)shadowRadius;
- (double)shadowOpacity;
- (id)shadowColorString;
- (double)variantPlatterCornerRadius;
- (double)variantKeyWidth;
- (double)variantKeyHeight;
- (double)variantKeyFocusIncrease;
- (double)variantKeyFocusRectRadius;
- (BOOL)forceVariantsInsideKeyplane;
- (id)backgroundTraitsForKeyplane:(id)keyplane;
- (struct CGPoint { double x0; double x1; })_textOffsetForKey:(id)key;
- (struct CGPoint { double x0; double x1; })_secondaryTextOffsetForKey:(id)key;
- (id)_enabledTraitsForKey:(id)key;
- (id)_highlightedTraitsForKey:(id)key;
- (id)_activeTraitsForKey:(id)key;
- (id)_disabledTraitsForKey:(id)key;
- (void)configureSymbolStyles:(id)styles forLetterKey:(id)key;
- (id)_enabledTraitsForLetterKey:(id)key;
- (id)_highlightedTraitsForLetterKey:(id)key;
- (id)_activeTraitsForLetterKey:(id)key;
- (id)_disabledTraitsForLetterKey:(id)key;
- (void)configureSymbolStyle:(id)style forControlKey:(id)key;
- (void)configureCornersOnGeometry:(id)geometry forKey:(id)key;
- (void)configureGeometry:(id)geometry forControlKey:(id)key;
- (id)_enabledTraitsForControlKey:(id)key;
- (id)_highlightedTraitsForControlKey:(id)key;
- (id)_activeTraitsForControlKey:(id)key;
- (id)_disabledTraitsForControlKey:(id)key;
- (id)_variantTraitsForLetterKey:(id)key onKeyplane:(id)keyplane;
- (id)_variantTraitsForControlKey:(id)key onKeyplane:(id)keyplane;
- (id)_traitsForKey:(id)key onKeyplane:(id)keyplane;
@end

#endif /* UIKBRenderFactory_Monolith_h */