//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIKeyboardSecureCandidateRenderTraits_h
#define TIKeyboardSecureCandidateRenderTraits_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "TIKeyboardSecureCandidateLayoutTraits.h"
#include "TIKeyboardSecureCandidateRGBColor.h"
#include "TIKeyboardSecureCandidateTextTraits.h"

@class NSArray, NSDictionary, NSString;

@interface TIKeyboardSecureCandidateRenderTraits : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSString *fontName;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) TIKeyboardSecureCandidateRGBColor *textColor;
@property (retain, nonatomic) TIKeyboardSecureCandidateLayoutTraits *layoutTraits;
@property (retain, nonatomic) TIKeyboardSecureCandidateTextTraits *headerTextTraits;
@property (retain, nonatomic) TIKeyboardSecureCandidateTextTraits *inputTextTraits;
@property (copy, nonatomic) NSString *prefixText;
@property (copy, nonatomic) NSString *suffixText;
@property (nonatomic) double singleCellWidth;
@property (copy, nonatomic) NSArray *resultCountToSingleCellWidth;
@property (copy, nonatomic) NSDictionary *cellWidthOptions;
@property (nonatomic) double singleCellHeight;
@property (nonatomic) double singleCellVerticalPadding;
@property (nonatomic) double dividerLineWidth;
@property (nonatomic) long long maxCellCount;
@property (nonatomic) long long sharedCellCount;
@property (nonatomic) double screenScale;
@property (nonatomic) long long cellRenderingStyle;
@property (nonatomic) BOOL isCandidateUI;
@property (copy, nonatomic) NSString *hideMyEmailLocalizedText;
@property (nonatomic) BOOL shouldOfferHideMyEmail;
@property (nonatomic) BOOL disableHideMyEmail;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (BOOL)isEqual:(id)equal;
@end

#endif /* TIKeyboardSecureCandidateRenderTraits_h */