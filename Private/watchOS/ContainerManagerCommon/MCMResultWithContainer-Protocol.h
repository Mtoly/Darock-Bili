//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMResultWithContainer_Protocol_h
#define MCMResultWithContainer_Protocol_h
@import Foundation;

@protocol MCMResultWithContainer <MCMResult>
/* instance methods */
- (id)initWithMetadata:(id)metadata sandboxToken:(const char *)token includePath:(BOOL)path includeInfo:(BOOL)info includeUserManagedAssetsRelPath:(BOOL)path;
- (id)initWithContainerPath:(id)path containerIdentity:(id)identity uuid:(id)uuid sandboxToken:(const char *)token includePath:(BOOL)path;
- (id)initWithUUID:(id)uuid containerPathIdentifier:(id)identifier identifier:(id)identifier containerClass:(unsigned long long)class POSIXUser:(id)posixuser personaUniqueString:(id)string sandboxToken:(const char *)token existed:(BOOL)existed url:(id)url info:(id)info transient:(BOOL)transient userManagedAssetsRelPath:(id)path;
@end

#endif /* MCMResultWithContainer_Protocol_h */