//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSNotificationCache_h
#define TPSNotificationCache_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString, NSURL, TPSDocument;

@interface TPSNotificationCache : NSObject<NSCopying, NSSecureCoding>

@property (retain, nonatomic) NSString *locale;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *collectionIdentifier;
@property (retain, nonatomic) TPSDocument *document;
@property (retain, nonatomic) NSDictionary *extensionPayload;
@property (retain, nonatomic) NSURL *attachmentURL;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)notificationCacheWithCollectionIdentifier:(id)identifier document:(id)document type:(unsigned long long)type;

/* instance methods */
- (id)initWithCollectionIdentifier:(id)identifier document:(id)document type:(unsigned long long)type;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)hasLocaleChanged;
- (id)debugDescription;
@end

#endif /* TPSNotificationCache_h */