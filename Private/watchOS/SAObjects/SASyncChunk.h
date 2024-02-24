//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SASyncChunk_h
#define SASyncChunk_h
@import Foundation;

#include "SABaseClientBoundCommand.h"
#include "SAServerBoundCommand-Protocol.h"
#include "SASyncAppMetaData.h"

@class NSArray, NSString;

@interface SASyncChunk : SABaseClientBoundCommand<SAServerBoundCommand>

@property (copy, nonatomic) NSString *appBundleId;
@property (retain, nonatomic) SASyncAppMetaData *appMetaData;
@property (copy, nonatomic) NSString *intentSlotName;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *postGen;
@property (copy, nonatomic) NSString *preGen;
@property (copy, nonatomic) NSArray *toAdd;
@property (copy, nonatomic) NSArray *toRemove;
@property (copy, nonatomic) NSString *validity;
@property (copy, @dynamic, nonatomic) NSString *aceId;
@property (copy, @dynamic, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)chunk;
+ (id)chunkWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;
@end

#endif /* SASyncChunk_h */