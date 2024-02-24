//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBUGeneratedPasswordCredentialUpdateRequest_h
#define WBUGeneratedPasswordCredentialUpdateRequest_h
@import Foundation;

@class NSString, NSURL, NSURLProtectionSpace;

@interface WBUGeneratedPasswordCredentialUpdateRequest : NSObject

@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *generatedPassword;
@property (readonly, copy, nonatomic) NSString *lastGeneratedPassword;
@property (readonly, nonatomic) NSURLProtectionSpace *protectionSpace;
@property (readonly, nonatomic) NSURL *urlForCredential;
@property (readonly, nonatomic) BOOL shouldSaveNewCredential;

/* class methods */
+ (id)requestWithNewUsername:(id)username newGeneratedPassword:(id)password lastGeneratedPassword:(id)password credentialURL:(id)url protectionSpace:(id)space shouldSaveNewCredential:(BOOL)credential;

/* instance methods */
- (id)_initRequestWithNewUsername:(id)username newGeneratedPassword:(id)password lastGeneratedPassword:(id)password credentialURL:(id)url protectionSpace:(id)space shouldSaveNewCredential:(BOOL)credential;
@end

#endif /* WBUGeneratedPasswordCredentialUpdateRequest_h */