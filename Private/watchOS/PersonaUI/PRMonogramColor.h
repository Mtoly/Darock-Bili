//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 81.0.0.0.0
//
#ifndef PRMonogramColor_h
#define PRMonogramColor_h
@import Foundation;

@class NSBundle, NSString, UIColor;

@interface PRMonogramColor : NSObject

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *gradientStartColor;
@property (retain, nonatomic) UIColor *gradientEndColor;
@property (retain, nonatomic) UIColor *selectedActiveColor;
@property (retain, nonatomic) UIColor *selectedInactiveColor;
@property (retain, nonatomic) UIColor *selectedActiveTextColor;
@property (retain, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) NSString *colorName;

/* class methods */
+ (id)defaultBundle;
+ (id)gradientStartColor:(id)color;
+ (id)gradientStartName:(id)name;
+ (id)gradientEndName:(id)name;
+ (id)generateMonogramGradientColorsByNameDictionary;
+ (id)monogramGradientColorNamed:(id)named;
+ (id)colorWithName:(id)name inBundle:(id)bundle;
+ (id)defaultGradientStartColor;
+ (id)defaultGradientEndColor;
+ (id)defaultSelectedActiveColor;
+ (id)defaultSelectedInactiveColor;
+ (id)defaultSelectedActiveTextColor;
+ (id)availableColorNames;
+ (id)availableColors;

/* instance methods */
- (id)initWithRandomColor;
- (id)initWithColorName:(id)name;
- (id)initWithColorName:(id)name inBundle:(id)bundle;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* PRMonogramColor_h */