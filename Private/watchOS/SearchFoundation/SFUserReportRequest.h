//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFUserReportRequest_h
#define SFUserReportRequest_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFPunchout.h"
#include "SFUserReportRequest-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString;

@interface SFUserReportRequest : NSObject<SFUserReportRequest, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 reportType; } _has;
}

@property (copy, nonatomic) NSString *affordanceText;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *dismissText;
@property (copy, nonatomic) NSArray *userReportOptions;
@property (nonatomic) int reportType;
@property (copy, nonatomic) NSString *reportOptionsSectionTitle;
@property (copy, nonatomic) NSString *disclaimerText;
@property (retain, nonatomic) SFPunchout *disclaimerLearnMorePunchout;
@property (copy, nonatomic) NSString *attachmentSectionTitle;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithProtobuf:(id)protobuf;
- (BOOL)hasReportType;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* SFUserReportRequest_h */