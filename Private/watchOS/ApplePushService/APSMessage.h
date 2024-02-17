//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 971.300.71.0.0
//
#ifndef APSMessage_h
#define APSMessage_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface APSMessage : NSObject<NSCoding> {
  /* instance variables */
  NSMutableDictionary *_plist;
  NSMutableDictionary *_properties;
  void * _xpcMessage;
  NSObject<OS_dispatch_queue> *_ivarQueue;
}

@property (retain, nonatomic) NSString *topic;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (nonatomic) unsigned long long identifier;
@property (retain, nonatomic) NSString *correlationIdentifier;
@property (nonatomic) unsigned long long sendRTT;

/* instance methods */
- (id)initWithDictionary:(id)dictionary xpcMessage:(id)message;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithTopic:(id)topic userInfo:(id)info;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)setGuid:(id)guid;
- (id)guid;
- (id)objectForKey:(id)key;
- (void)setObject:(id)object forKey:(id)key;
- (id)instanceObjectForKey:(id)key;
- (void)setInstanceObject:(id)object forKey:(id)key;
- (id)dictionaryRepresentation;
@end

#endif /* APSMessage_h */