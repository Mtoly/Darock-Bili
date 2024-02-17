//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef NSURL_AFBundleResourceSupport_h
#define NSURL_AFBundleResourceSupport_h
@import Foundation;

@interface NSURL (AFBundleResourceSupport) <_AFBundleResourceURLProviding, AFSecurityDigestibleChunksProviding>
/* class methods */
+ (id)_af_URLWithMessageIdentifier:(id)identifier;

/* instance methods */
- (BOOL)isAMOSIdentifier;
- (BOOL)isAMOSCommittedIdentifier;
- (id)_af_messageIdentifierValue;
- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)options usingBlock:(id /* block */)block;
- (id)af_getBundleResourceURL;
@end

#endif /* NSURL_AFBundleResourceSupport_h */