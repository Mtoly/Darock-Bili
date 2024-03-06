//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 163.3.3.0.0
//
#ifndef _EXExtensionRepresenting_Protocol_h
#define _EXExtensionRepresenting_Protocol_h
@import Foundation;

@protocol _EXExtensionRepresenting <NSObject>

@property (readonly) NSString *extensionPointIdentifier;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSUUID *uniqueIdentifier;
@property (readonly) NSString *localizedName;
@property (readonly) BOOL presentsUserInterface;
@property (readonly) BOOL requiresMacCatalystBehavior;
@property (readonly) BOOL requiresSceneHosting;
@property (readonly) NSDictionary *attributes;
@property (readonly) NSArray *roles;
@property (readonly) ISIcon *icon;
@property (readonly) BOOL requiresLegacyInfrastructure;

/* instance methods */
- (id)entitlementNamed:(id)named ofClass:(Class)class;
- (id)makeXPCConnectionWithError:(id *)error;
@end

#endif /* _EXExtensionRepresenting_Protocol_h */