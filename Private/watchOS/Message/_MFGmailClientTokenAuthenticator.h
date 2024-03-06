//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef _MFGmailClientTokenAuthenticator_h
#define _MFGmailClientTokenAuthenticator_h
@import Foundation;

#include "ECSASLAuthenticator.h"

@interface _MFGmailClientTokenAuthenticator : ECSASLAuthenticator {
  /* instance variables */
  BOOL _sentResponse;
}

/* instance methods */
- (id)saslName;
- (BOOL)supportsInitialClientResponse;
- (BOOL)justSentPlainTextPassword;
- (id)responseForServerData:(id)data;
@end

#endif /* _MFGmailClientTokenAuthenticator_h */