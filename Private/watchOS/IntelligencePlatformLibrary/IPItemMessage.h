//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef IPItemMessage_h
#define IPItemMessage_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSData;

@interface IPItemMessage : NSObject<NSCopying>

@property (readonly, nonatomic) NSData *innerData;

/* class methods */
+ (unsigned short)itemIdentifier;
+ (unsigned short)messageIdentifier;
+ (id)descriptionForTypeIdentifier:(unsigned short)identifier;
+ (unsigned short)metaContentMessageIdentifierForItemIdentifier:(unsigned short)identifier;
+ (unsigned short)contentMessageIdentifierForItemIdentifier:(unsigned short)identifier;
+ (id)itemMessageForMessageIdentifier:(unsigned short)identifier data:(id)data error:(id *)error;

/* instance methods */
- (id)initWithData:(id)data error:(id *)error;
- (BOOL)initializeFieldValuesFromData:(id)data error:(id *)error;
- (id)data;
- (void)enumerateFieldsUsingBlock:(id /* block */)block;
- (BOOL)recursivelyEnumerateFieldsWithError:(id *)error usingBlock:(id /* block */)block;
- (BOOL)recursivelyEnumerateFieldsWithError:(id *)error forParentField:(id)field isRepeatedSubMessage:(BOOL)message repeatedSubMessageIndex:(unsigned int)index usingBlock:(id /* block */)block;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)jsonDict;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IPItemMessage_h */