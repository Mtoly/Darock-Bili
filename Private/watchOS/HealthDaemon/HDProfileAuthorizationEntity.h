//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDProfileAuthorizationEntity_h
#define HDProfileAuthorizationEntity_h
@import Foundation;

#include "HDHealthEntity.h"

@interface HDProfileAuthorizationEntity : HDHealthEntity
/* class methods */
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)count;
+ (long long)protectionClass;
+ (BOOL)setStatusIfNeeded:(long long)needed profile:(id)profile bundleIdentifier:(id)identifier error:(id *)error;
+ (BOOL)setStatus:(long long)status profile:(id)profile bundleIdentifier:(id)identifier dateModified:(id)modified error:(id *)error;
+ (BOOL)fetchStatus:(long long *)status profile:(id)profile bundleIdentifier:(id)identifier error:(id *)error;
+ (id)anyForBundleIdentifier:(id)identifier profile:(id)profile error:(id *)error;

/* instance methods */
- (BOOL)unitTest_getBundleIdentifier:(id *)identifier status:(long long *)status dateModified:(id *)modified forProfile:(id)profile error:(id *)error;
@end

#endif /* HDProfileAuthorizationEntity_h */