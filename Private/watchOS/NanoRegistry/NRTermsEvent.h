//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 920.3.0.0.0
//
#ifndef NRTermsEvent_h
#define NRTermsEvent_h
@import Foundation;

#include "NRPBTermsEvent.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface NRTermsEvent : NRPBTermsEvent<NSSecureCoding>

@property (retain, nonatomic) NSString *termsDigest;
@property (nonatomic) BOOL flaggedForSend;
@property (nonatomic) BOOL writable;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)digestFromData:(id)data;
+ (id)loadTermsWithPath:(id)path;
+ (id)eventWithProtobuf:(id)protobuf;

/* instance methods */
- (id)description;
- (BOOL)isTermsAlreadyArchived;
- (id)termsText;
- (void)saveTerms;
- (id)initWithCoder:(id)coder;
- (void)saveEventTextToFileIfNeeded;
- (id)initWithDeviceID:(id)id;
- (void)encodeWithCoder:(id)coder;
- (void)setEventType:(int)type;
- (void)_setEventType:(unsigned long long)type;
- (void)setTermsText:(id)text;
- (void)setDocumentationID:(id)id;
- (void)setPresentationReason:(id)reason;
- (void)setPresentationLocation:(int)location;
- (void)setAcknowledgedDeviceName:(id)name;
- (void)setAcknowledgedDeviceSerialNumber:(id)number;
- (void)setDisplayDeviceName:(id)name;
- (void)setDisplayDeviceSerialNumber:(id)number;
- (void)setEventDate:(double)date;
- (void)updateEventDate;
- (void)setLoggingProcessName:(id)name;
- (void)_setLoggingProcessName:(id)name;
@end

#endif /* NRTermsEvent_h */