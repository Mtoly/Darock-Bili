//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef ISAuthenticationChallenge_h
#define ISAuthenticationChallenge_h
@import Foundation;

@class NSString, NSURLAuthenticationChallenge;
@protocol NSURLAuthenticationChallengeSender;

@interface ISAuthenticationChallenge : NSObject {
  /* instance variables */
  NSURLAuthenticationChallenge *_challenge;
}

@property (retain) NSString *localizedMessage;
@property (retain) NSString *localizedTitle;
@property (readonly) BOOL hasPassword;
@property (readonly, retain) NSString *password;
@property (readonly, retain) NSString *user;
@property (readonly) long long failureCount;
@property (readonly) BOOL userNameIsEditable;
@property (readonly) BOOL userNameIsEmail;
@property (readonly) NSObject<NSURLAuthenticationChallengeSender> *sender;

/* instance methods */
- (id)initWithAuthenticationChallenge:(id)challenge;
- (void)dealloc;
- (void)cancelAuthentication;
- (void)useCredential:(id)credential;
@end

#endif /* ISAuthenticationChallenge_h */