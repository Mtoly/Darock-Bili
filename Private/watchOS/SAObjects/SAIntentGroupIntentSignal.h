//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAIntentGroupIntentSignal_h
#define SAIntentGroupIntentSignal_h
@import Foundation;

#include "SABaseClientBoundCommand.h"
#include "SAIntentGroupProtobufMessage.h"

@class NSString;

@interface SAIntentGroupIntentSignal : SABaseClientBoundCommand

@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (copy, nonatomic) NSString *jsonEncodedIntent;

/* class methods */
+ (id)intentSignal;
+ (id)intentSignalWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;
@end

#endif /* SAIntentGroupIntentSignal_h */