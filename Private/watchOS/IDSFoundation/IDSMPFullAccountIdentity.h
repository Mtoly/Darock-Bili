//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSMPFullAccountIdentity_h
#define IDSMPFullAccountIdentity_h
@import Foundation;

#include "IDSMPIdentity.h"

@class NSData;

@interface IDSMPFullAccountIdentity : IDSMPIdentity

@property (readonly, nonatomic) NSData *publicName;

/* class methods */
+ (id)identityWithData:(id)data error:(id *)error;
+ (id)fullAccountIdentityWithError:(id *)error;

/* instance methods */
- (id)publicAccountIdentityWithError:(id *)error;
- (id)rolledAccountIdenityWithError:(id *)error;
- (id)signData:(id)data withError:(id *)error;
- (id)dataRepresentationWithError:(id *)error;
@end

#endif /* IDSMPFullAccountIdentity_h */