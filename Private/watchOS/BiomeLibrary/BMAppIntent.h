//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMAppIntent_h
#define BMAppIntent_h
@import Foundation;

#include "BMEventBase.h"
#include "BMIdentifiable-Protocol.h"
#include "BMStoreData-Protocol.h"

@class NSData, NSDate, NSString;

@interface BMAppIntent : BMEventBase<BMIdentifiable, BMStoreData> {
  /* instance variables */
  BOOL _hasRaw_absoluteTimestamp;
  double _raw_absoluteTimestamp;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *sourceID;
@property (readonly, nonatomic) NSString *intentClass;
@property (readonly, nonatomic) NSString *intentVerb;
@property (readonly, nonatomic) int intentType;
@property (readonly, nonatomic) int handlingStatus;
@property (readonly, nonatomic) NSData *interaction;
@property (readonly, nonatomic) NSString *itemID;
@property (readonly, nonatomic) BOOL donatedBySiri;
@property (nonatomic) BOOL hasDonatedBySiri;
@property (readonly, nonatomic) int interactionDirection;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;
+ (id)columns;
+ (id)validKeyPaths;

/* instance methods */
- (id)initWithAbsoluteTimestamp:(id)timestamp bundleID:(id)id sourceID:(id)id intentClass:(id)class intentVerb:(id)verb intentType:(int)type handlingStatus:(int)status interaction:(id)interaction itemID:(id)id donatedBySiri:(id)siri interactionDirection:(int)direction;
- (id)initWithAbsoluteTimestamp:(id)timestamp bundleID:(id)id sourceID:(id)id intentClass:(id)class intentVerb:(id)verb intentType:(int)type handlingStatus:(int)status interaction:(id)interaction itemID:(id)id donatedBySiri:(id)siri interactionDirection:(int)direction groupIdentifier:(id)identifier;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMAppIntent_h */