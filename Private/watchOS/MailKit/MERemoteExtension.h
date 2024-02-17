//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MERemoteExtension_h
#define MERemoteExtension_h
@import Foundation;

#include "EFPubliclyDescribable-Protocol.h"
#include "MEComposeSessionHandler-Protocol.h"
#include "MEComposeSessionHandler_Private-Protocol.h"
#include "MEContentBlocker_Private-Protocol.h"
#include "MEExtensionHostContext.h"
#include "MEMailComposeToolbarItemInfo.h"
#include "MEMessageActionHandler_Private-Protocol.h"
#include "MEMessageSecurityHandler-Protocol.h"
#include "MERemoteExtensionContext.h"

@class EFPromise, NSArray, NSDictionary, NSExtension, NSString, NSURL, NSUUID;
@protocol OS_dispatch_queue;

@interface MERemoteExtension : NSObject<EFPubliclyDescribable> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _remoteExtensionProxyLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessLevelLock;
}

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *extensionLoadingQueue;
@property (retain, nonatomic) NSString *containerPath;
@property (retain, nonatomic) NSString *containerID;
@property (retain, nonatomic) NSString *extensionID;
@property (nonatomic) BOOL entitlementVerified;
@property (retain, nonatomic) EFPromise *remoteExtensionProxyPromise;
@property (readonly, nonatomic) MERemoteExtensionContext *extensionContext;
@property (readonly) MEExtensionHostContext *extensionHostContext;
@property (readonly) NSUUID *contextUUID;
@property (readonly, copy) NSString *dataAccessReason;
@property (readonly, copy) NSDictionary *headerAccessLevels;
@property (readonly) BOOL bodyAccess;
@property (readonly) BOOL hasMessageContentAccess;
@property (readonly, nonatomic) NSObject<MEComposeSessionHandler_Private> *synchronousComposeSessionInterface;
@property (readonly, nonatomic) NSObject<MEMessageSecurityHandler> *synchronousMessageSecurityInterface;
@property (readonly, nonatomic) NSObject<MEMessageActionHandler_Private> *synchronousMessageActionProviderInterface;
@property (readonly, nonatomic) NSObject<MEContentBlocker_Private> *synchronousContentBlockerInterface;
@property (readonly, nonatomic) NSObject<MEMessageActionHandler_Private> *messageActionProviderInterface;
@property (readonly, nonatomic) NSObject<MEComposeSessionHandler> *composeSessionInterface;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *displayVersion;
@property (readonly, nonatomic) NSString *containingAppDisplayName;
@property (readonly, nonatomic) NSURL *containingAppURL;
@property (readonly, nonatomic) NSString *descriptionText;
@property (nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) NSArray *capabilities;
@property (readonly, nonatomic) BOOL outboundNetworkingAllowed;
@property (readonly, nonatomic) BOOL inboundNetworkingAllowed;
@property (readonly, nonatomic) MEMailComposeToolbarItemInfo *composeWindowToolbarButtonInfo;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)log;
+ (id)allCapabilities;
+ (id)allCapabilitiesRequiringMessageContentAccess;

/* instance methods */
- (id)initWithExtension:(id)extension;
- (void)setEnabled:(BOOL)enabled;
- (id)toolbarIconTooltip;
- (id)_remoteExtensionProxyFuture;
- (id)_loadRemoteExtesionProxyFuture;
- (id)interfaceForExtensionCapability:(id)capability;
- (void)getMailComposeExtensionViewControllerForSession:(id)session hostDelegate:(id)delegate completionHandler:(id /* block */)handler;
- (id)contentBlockerInterface;
- (void)getMailSignatureVerificationExtensionViewControllerForMessageSigners:(id)signers completionHandler:(id /* block */)handler;
- (void)getDecodedMailViewControllerForMessageContext:(id)context completionHandler:(id /* block */)handler;
- (void)primaryActionClickedForMessageContext:(id)context completionHandler:(id /* block */)handler;
- (id)_interfaceForExtensionCapability:(id)capability;
- (id)_synchronousInterfaceForExtensionCapability:(id)capability;
- (void)_nts_loadDataAccessReason;
- (void)_nts_loadBodyAccess;
- (BOOL)isEqual:(id)equal;
@end

#endif /* MERemoteExtension_h */