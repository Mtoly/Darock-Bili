//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WPXMLRPCDecoderDelegate_h
#define WPXMLRPCDecoderDelegate_h
@import Foundation;

#include "NSXMLParserDelegate-Protocol.h"
#include "WPXMLRPCDecoderDelegate.h"

@class NSMutableArray, NSString;

@interface WPXMLRPCDecoderDelegate : NSObject<NSXMLParserDelegate> {
  /* instance variables */
  WPXMLRPCDecoderDelegate *myParent;
  NSMutableArray *myChildren;
  int myElementType;
  NSString *myElementKey;
  id myElementValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)isDictionaryElementType:(int)type;
- (void)addElementValueToParent;
- (id)parseDateString:(id)string withFormat:(id)format;
- (id)parseInteger:(id)integer;
- (id)parseDouble:(id)double;
- (id)parseBoolean:(id)boolean;
- (id)parseString:(id)string;
- (id)parseDate:(id)date;
- (id)parseData:(id)data;
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
- (void)parser:(id)parser foundCharacters:(id)characters;
- (void)parser:(id)parser parseErrorOccurred:(id)occurred;
- (id)initWithParent:(id)parent;
- (void)setParent:(id)parent;
- (id)parent;
- (void)setElementType:(int)type;
- (int)elementType;
- (void)setElementKey:(id)key;
- (id)elementKey;
- (void)setElementValue:(id)value;
- (id)elementValue;
@end

#endif /* WPXMLRPCDecoderDelegate_h */