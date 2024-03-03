//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 331.0.0.0.0
//
#ifndef ACUIAccountViewsProviderProtocol_Protocol_h
#define ACUIAccountViewsProviderProtocol_Protocol_h
@import Foundation;

@protocol ACUIAccountViewsProviderProtocol <NSObject>
/* instance methods */
- (id)supportedAccountTypeIdentifiers;
- (Class)viewControllerClassForViewingAccount:(id)account;
- (Class)viewControllerClassForCreatingAccountWithType:(id)type;
- (id)configurationInfoForViewingAccount:(id)account;
- (id)configurationInfoForCreatingAccountWithType:(id)type;
@optional
/* instance methods */
- (Class)controllerClassForCreatingAccountWithType:(id)type;
- (BOOL)setDelegate:(id)delegate forSignInController:(id)controller;
- (id)localizedStringForDataclass:(id)dataclass withSuffix:(id)suffix forAccount:(id)account;
- (Class)controllerClassForCreatingRemoteAccountWithType:(id)type;
@end

#endif /* ACUIAccountViewsProviderProtocol_Protocol_h */