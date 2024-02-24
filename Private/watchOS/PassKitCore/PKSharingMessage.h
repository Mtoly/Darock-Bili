//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSharingMessage_h
#define PKSharingMessage_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PKSharingMessageDisplayInformation.h"

@class NSData, NSString;

@interface PKSharingMessage : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long format;
@property (retain, nonatomic) NSData *payload;
@property (retain, nonatomic) PKSharingMessageDisplayInformation *displayInformation;

/* class methods */
+ (id)specializedMessageFromPayload:(id)payload displayInformation:(id)information outError:(id *)error;
+ (BOOL)supportsSecureCoding;
+ (id)embeddedMessageDictionaryForShareURL:(id)url targetDevice:(long long)device;

/* instance methods */
- (id)init;
- (id)initWithContent:(id)content format:(unsigned long long)format type:(unsigned long long)type displayInformation:(id)information;
- (id)_initWithPayload:(id)payload format:(unsigned long long)format type:(unsigned long long)type displayInformation:(id)information;
- (BOOL)configureWithContent:(id)content;
- (void)updateMessageContentTo:(id)to;
- (id)typeDescription;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (void)addEmbeddedMessages:(id)messages;
- (id)embeddedMessageURLs;
- (id)embeddedAddressForDeviceType:(long long)type;
@end

#endif /* PKSharingMessage_h */