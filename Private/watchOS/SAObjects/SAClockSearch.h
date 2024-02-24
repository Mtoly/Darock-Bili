//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAClockSearch_h
#define SAClockSearch_h
@import Foundation;

#include "SADomainCommand.h"

@class NSNumber, NSString, NSURL;

@interface SAClockSearch : SADomainCommand

@property (copy, nonatomic) NSNumber *alCityId;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSURL *identifier;
@property (copy, nonatomic) NSString *unlocalizedCityName;
@property (copy, nonatomic) NSString *unlocalizedCountryName;

/* class methods */
+ (id)search;
+ (id)searchWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
@end

#endif /* SAClockSearch_h */