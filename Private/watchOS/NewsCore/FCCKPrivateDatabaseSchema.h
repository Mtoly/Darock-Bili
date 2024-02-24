//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCCKPrivateDatabaseSchema_h
#define FCCKPrivateDatabaseSchema_h
@import Foundation;

@class NSArray, NSDictionary;

@interface FCCKPrivateDatabaseSchema : NSObject {
  /* instance variables */
  NSDictionary *_zoneSchemasByClientName;
  NSDictionary *_zoneSchemasByServerName;
  NSArray *_defaultZoneSchemas;
}

/* instance methods */
- (id)init;
@end

#endif /* FCCKPrivateDatabaseSchema_h */