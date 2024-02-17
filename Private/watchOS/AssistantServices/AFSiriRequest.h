//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFSiriRequest_h
#define AFSiriRequest_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString, NSUUID;

@interface AFSiriRequest : NSObject<NSSecureCoding> {
  /* instance variables */
  NSString *_originatingAceID;
  NSUUID *_identifier;
  NSUUID *_turnId;
}

@property (copy, nonatomic) NSString *_refId;
@property (copy, nonatomic) NSString *_originatingAceID;
@property (copy, nonatomic) NSUUID *_turnId;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_af_analyticsContextDescription;
- (id)_initWithOriginatingAceID:(id)id identifier:(id)identifier turnId:(id)id;
- (id)_initWithOriginatingAceID:(id)id;
- (id)init;
- (id)description;
- (id)_descriptionWithProperties:(id)properties;
- (id)requestName;
- (id)_identifier;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)_makeAppFrontmost;
- (void)_setOriginatingAceID:(id)id;
- (void)_setTurnId:(id)id;
- (void)_setRefId:(id)id;
@end

#endif /* AFSiriRequest_h */