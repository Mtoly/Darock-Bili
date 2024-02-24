//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.1.1.0.0
//
#ifndef EXExtensionPointCatalog_h
#define EXExtensionPointCatalog_h
@import Foundation;

@class NSDictionary;

@interface EXExtensionPointCatalog : NSObject

@property (readonly) NSDictionary *extensionPointByIdentifierPlatform;

/* instance methods */
- (id)init;
- (id)initWithEnumerator:(id)enumerator;
- (id)extensionPointForIdentifier:(id)identifier;
- (id)extensionPointForIdentifier:(id)identifier platform:(unsigned int)platform;
@end

#endif /* EXExtensionPointCatalog_h */