//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDRemoteLoginAnisetteDataProvider_h
#define HMDRemoteLoginAnisetteDataProvider_h
@import Foundation;

#include "HMFObject.h"
#include "AKAnisetteServiceProtocol-Protocol.h"
#include "HMDRemoteLoginMessageSender.h"
#include "HMFLogging-Protocol.h"

@class NSString;

@interface HMDRemoteLoginAnisetteDataProvider : HMFObject<AKAnisetteServiceProtocol, HMFLogging>

@property (readonly, nonatomic) NSString *sessionID;
@property (retain, nonatomic) HMDRemoteLoginMessageSender *remoteMessageSender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithSessionID:(id)id remoteMessageSender:(id)sender;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)logIdentifier;
- (void)provisionAnisetteWithCompletion:(id /* block */)completion;
- (void)syncAnisetteWithSIMData:(id)simdata completion:(id /* block */)completion;
- (void)eraseAnisetteWithCompletion:(id /* block */)completion;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)necessary withCompletion:(id /* block */)completion;
- (void)legacyAnisetteDataForDSID:(id)dsid withCompletion:(id /* block */)completion;
@end

#endif /* HMDRemoteLoginAnisetteDataProvider_h */