//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2253.0.0.0.0
//
#ifndef MCRelayPayload_h
#define MCRelayPayload_h
@import Foundation;

#include "MCPayload.h"

@class NSArray, NSDictionary, NSString;

@interface MCRelayPayload : MCPayload

@property (readonly, copy, nonatomic) NSDictionary *configurationDictionary;
@property (readonly, copy, nonatomic) NSArray *relays;
@property (readonly, copy, nonatomic) NSArray *matchDomains;
@property (readonly, copy, nonatomic) NSArray *excludedDomains;
@property (copy, nonatomic) NSString *relayUUID;
@property (readonly, copy, nonatomic) NSArray *onDemandRules;
@property (readonly, nonatomic) BOOL restrictDomains;

/* class methods */
+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

/* instance methods */
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;
- (id)stubDictionary;
- (id)verboseDescription;
- (id)payloadDescriptionKeyValueSections;
- (id)installationWarnings;
- (id)filterForUserEnrollmentOutError:(id *)error;
@end

#endif /* MCRelayPayload_h */