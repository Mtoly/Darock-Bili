//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.2.12.0.0
//
#ifndef AMSUIMessageMarkdownGenerator_h
#define AMSUIMessageMarkdownGenerator_h
@import Foundation;

#include "AMSUIMarkdownParser.h"
#include "AMSUIMarkdownParserDelegate-Protocol.h"
#include "AMSUIMessageMarkdownConfiguration.h"

@class NSDictionary, NSMutableArray, NSMutableAttributedString, NSString;

@interface AMSUIMessageMarkdownGenerator : NSObject<AMSUIMarkdownParserDelegate>

@property (retain, nonatomic) NSMutableAttributedString *accumulator;
@property (retain, nonatomic) AMSUIMarkdownParser *parser;
@property (retain, nonatomic) NSMutableArray *attributeStack;
@property (nonatomic) BOOL didParseEverything;
@property (retain, nonatomic) NSString *symbol;
@property (retain, nonatomic) NSDictionary *symbolAttributes;
@property (retain, nonatomic) AMSUIMessageMarkdownConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMarkdownString:(id)string configuration:(id)configuration;
- (id)generate;
- (void)popAttributes;
- (void)pushAttributes:(id)attributes;
- (void)appendStyledString:(id)string;
- (id)currentFont;
- (id)currentFontAddingFontAttributes:(id)attributes;
- (id)fontWithTraits:(unsigned int)traits;
- (id)reconcileElementAttributes:(id)attributes withFont:(id)font;
- (void)parserDidStartDocument:(id)document;
- (void)parserDidEndDocument:(id)document;
- (void)parser:(id)parser parseErrorOccurred:(id)occurred;
- (void)parser:(id)parser didStartElement:(unsigned long long)element attributes:(id)attributes;
- (void)parser:(id)parser didEndElement:(unsigned long long)element;
- (void)parser:(id)parser didFindArtworkWithIdentifier:(id)identifier;
- (void)parser:(id)parser didFindCharacters:(id)characters;
- (void)parserDidFindNewline:(id)newline;
- (void)parser:(id)parser didStartListOfStyle:(unsigned long long)style;
- (void)parserDidStartListElement:(id)element;
- (void)parserDidEndListElement:(id)element;
- (void)parser:(id)parser didEndListOfStyle:(unsigned long long)style;
@end

#endif /* AMSUIMessageMarkdownGenerator_h */