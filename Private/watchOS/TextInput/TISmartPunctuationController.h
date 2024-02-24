//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TISmartPunctuationController_h
#define TISmartPunctuationController_h
@import Foundation;

#include "TISmartPunctuationOptions.h"

@class NSCharacterSet;

@interface TISmartPunctuationController : NSObject {
  /* instance variables */
  BOOL _leftSingleQuotationMarkInserted;
  BOOL _leftDoubleQuotationMarkInserted;
  NSCharacterSet *_alphanumericCharacterSet;
  NSCharacterSet *_whitespaceAndNewlineCharacterSet;
  NSCharacterSet *_decimalDigitCharacterSet;
  NSCharacterSet *_punctuationCharacterSet;
  NSCharacterSet *_openerCharacterSet;
  NSCharacterSet *_germanApostrophePrecedingSet;
  NSCharacterSet *_dutchApostropheFollowingSet;
  NSCharacterSet *_cornerBracketCharacterSet;
  NSCharacterSet *_bookTitleMarkCharacterSet;
  NSCharacterSet *_dashCharacterSet;
  NSCharacterSet *_enDashCharacterSet;
  NSCharacterSet *_emDashCharacterSet;
}

@property (nonatomic) BOOL smartQuotesEnabled;
@property (nonatomic) BOOL smartDashesEnabled;
@property (nonatomic) unsigned long long autoQuoteType;
@property (retain, nonatomic) TISmartPunctuationOptions *smartPunctuationOptions;

/* class methods */
+ (id)_chineseContextualVariantMapping;

/* instance methods */
- (id)init;
- (void)_initializeQuoteCharacterSetsIfNecessary;
- (void)_initializeDashCharacterSetsIfNecessary;
- (id)smartPunctuationResultsForString:(id)string;
- (id)smartPunctuationedStringForString:(id)string;
- (id)smartPunctuationOutputForInput:(id)input isLockedInput:(BOOL)input documentState:(id)state;
- (void)reset;
- (id)_alternatingStringForInputString:(id)string isLockedInput:(BOOL)input hasMarkedText:(BOOL)text;
- (id)_checkInput:(id)input forContextualQuotesInDocumentState:(id)state;
- (id)_checkInput:(id)input forContextualChinesePunctuationInDocumentState:(id)state;
- (id)_checkInput:(id)input forContextualDashesInDocumentState:(id)state;
- (id)_checkInput:(id)input forContextualEllipsesInDocumentState:(id)state;
@end

#endif /* TISmartPunctuationController_h */