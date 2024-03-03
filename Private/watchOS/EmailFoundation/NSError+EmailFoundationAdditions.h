//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef NSError_EmailFoundationAdditions_h
#define NSError_EmailFoundationAdditions_h
@import Foundation;

@interface NSError (EmailFoundationAdditions) <EFPubliclyDescribable>
/* class methods */
+ (id)ef_SQLiteErrorWithCode:(int)code;
+ (void)ef_setDecoder:(id /* block */)decoder forDomain:(id)domain;
+ (id)ef_cancelledError;
+ (id)ef_timeoutError;
+ (id)ef_notSupportedError;
+ (id)ef_connectionInterruptedError;
+ (id)ef_temporarilyUnavailableError;

/* instance methods */
- (id)ef_publicDescription;
- (id)ef_initWithDomain:(id)domain code:(long long)code underlyingError:(id)error;
- (BOOL)ef_isCancelledError;
- (BOOL)ef_isTimeoutError;
- (BOOL)ef_isNotSupportedError;
- (BOOL)ef_isConnectionInterruptedError;
- (BOOL)ef_isTemporarilyUnavailableError;
- (id)ef_underlyingError;
- (id /* block */)ef_match;
- (id)ef_secureCodableError;
@end

#endif /* NSError_EmailFoundationAdditions_h */