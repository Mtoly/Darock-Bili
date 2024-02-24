//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 22.0.0.0.0
//
#ifndef MFAuthScheme_h
#define MFAuthScheme_h
@import Foundation;

@interface MFAuthScheme : NSObject
/* class methods */
+ (void)initialize;
+ (id)knownSchemes;
+ (void)registerSchemeClass:(Class)class;
+ (id)schemeWithName:(id)name;
+ (id)authSchemesForAccount:(id)account connection:(id)connection;

/* instance methods */
- (Class)connectionClassForAccountClass:(Class)class;
- (Class)authenticatorClass;
- (unsigned int)defaultPortForAccount:(id)account;
- (BOOL)hasEncryption;
- (BOOL)canAuthenticateAccountClass:(Class)class connection:(id)connection;
- (id)authenticatorForAccount:(id)account connection:(id)connection;
- (BOOL)requiresPassword;
- (id)name;
- (id)humanReadableName;
@end

#endif /* MFAuthScheme_h */