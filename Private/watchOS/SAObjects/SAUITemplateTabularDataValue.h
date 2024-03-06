//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAUITemplateTabularDataValue_h
#define SAUITemplateTabularDataValue_h
@import Foundation;

#include "SAUITemplateBaseItem.h"
#include "SAUIImageResource.h"
#include "SAUITemplateAttributedString.h"

@class NSArray, NSDictionary;

@interface SAUITemplateTabularDataValue : SAUITemplateBaseItem

@property (retain, nonatomic) SAUITemplateAttributedString *attributedText;
@property (copy, nonatomic) NSDictionary *attributedTexts;
@property (nonatomic) BOOL highlighted;
@property (retain, nonatomic) SAUIImageResource *image;
@property (nonatomic) double imagePointHeight;
@property (nonatomic) double imagePointWidth;
@property (copy, nonatomic) NSArray *themeImages;

/* class methods */
+ (id)tabularDataValue;
+ (id)tabularDataValueWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAUITemplateTabularDataValue_h */