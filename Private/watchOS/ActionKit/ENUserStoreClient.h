//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef ENUserStoreClient_h
#define ENUserStoreClient_h
@import Foundation;

#include "ENStoreClient.h"
#include "EDAMUserStoreClient.h"

@class NSString;

@interface ENUserStoreClient : ENStoreClient

@property (retain, nonatomic) EDAMUserStoreClient *client;
@property (retain, nonatomic) NSString *authenticationToken;

/* class methods */
+ (id)userStoreClientWithUrl:(id)url authenticationToken:(id)token;

/* instance methods */
- (id)initWithUserStoreUrl:(id)url authenticationToken:(id)token;
- (id)authenticateToBusiness;
- (void)checkVersionWithClientName:(id)name edamVersionMajor:(short)major edamVersionMinor:(short)minor completion:(id /* block */)completion;
- (void)fetchBootstrapInfoWithLocale:(id)locale completion:(id /* block */)completion;
- (void)fetchUserWithCompletion:(id /* block */)completion;
- (void)fetchPublicUserInfoWithUsername:(id)username completion:(id /* block */)completion;
- (void)fetchPremiumInfoWithCompletion:(id /* block */)completion;
- (void)fetchNoteStoreURLWithCompletion:(id /* block */)completion;
- (void)authenticateToBusinessWithCompletion:(id /* block */)completion;
- (void)revokeLongSessionWithAuthenticationToken:(id)token completion:(id /* block */)completion;
- (void)checkVersionWithClientName:(id)name edamVersionMajor:(short)major edamVersionMinor:(short)minor success:(id /* block */)success failure:(id /* block */)failure;
- (void)getBootstrapInfoWithLocale:(id)locale success:(id /* block */)success failure:(id /* block */)failure;
- (void)getUserWithSuccess:(id /* block */)success failure:(id /* block */)failure;
- (void)getPublicUserInfoWithUsername:(id)username success:(id /* block */)success failure:(id /* block */)failure;
- (void)getPremiumInfoWithSuccess:(id /* block */)success failure:(id /* block */)failure;
- (void)getNoteStoreUrlWithSuccess:(id /* block */)success failure:(id /* block */)failure;
- (void)authenticateToBusinessWithSuccess:(id /* block */)success failure:(id /* block */)failure;
- (void)revokeLongSessionWithAuthenticationToken:(id)token success:(id /* block */)success failure:(id /* block */)failure;
@end

#endif /* ENUserStoreClient_h */