//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1304.0.0.0.0
//
#ifndef SCWZone_h
#define SCWZone_h
@import Foundation;

#include "SCWZoneDiff.h"
#include "SCWZoneSchema.h"
#include "SCWZoneStore-Protocol.h"

@class NSArray;

@interface SCWZone : NSObject

@property (retain, nonatomic) NSObject<SCWZoneStore> *store;
@property (readonly, nonatomic) SCWZoneSchema *schema;
@property (readonly, copy, nonatomic) NSArray *clientRecords;
@property (readonly, copy, nonatomic) SCWZoneDiff *clientDiff;
@property (readonly, nonatomic) BOOL needsFirstSync;
@property (readonly, nonatomic) BOOL dirty;

/* instance methods */
- (id)initWithSchema:(id)schema store:(id)store;
- (BOOL)isDirty;
@end

#endif /* SCWZone_h */