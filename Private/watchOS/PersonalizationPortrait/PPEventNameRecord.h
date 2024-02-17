//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPEventNameRecord_h
#define PPEventNameRecord_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface PPEventNameRecord : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) double score;
@property (nonatomic) unsigned char changeType;
@property (retain, nonatomic) NSString *eventIdentifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSArray *participantNames;

/* class methods */
+ (id)eventNameRecordWithScore:(double)score eventIdentifier:(id)identifier changeType:(unsigned char)type title:(id)title location:(id)location participantNames:(id)names;
+ (id)describeChangeType:(unsigned char)type;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIdentifier:(id)identifier score:(double)score eventIdentifier:(id)identifier changeType:(unsigned char)type title:(id)title location:(id)location participantNames:(id)names;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)hasScoreSimilarToRecord:(id)record;
- (BOOL)isEqualToEventNameRecord:(id)record;
@end

#endif /* PPEventNameRecord_h */