//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMMessagesMediaRendered_h
#define BMMessagesMediaRendered_h
@import Foundation;

#include "BMEventBase.h"
#include "BMStoreData-Protocol.h"

@class NSArray, NSDate, NSString;

@interface BMMessagesMediaRendered : BMEventBase<BMStoreData> {
  /* instance variables */
  BOOL _hasRaw_absoluteTimestamp;
  double _raw_absoluteTimestamp;
}

@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSArray *mediaAttributes;
@property (readonly, nonatomic) BOOL isOnScreen;
@property (nonatomic) BOOL hasIsOnScreen;
@property (readonly, nonatomic) BOOL isFirstView;
@property (nonatomic) BOOL hasIsFirstView;
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
- (id)initWithAbsoluteTimestamp:(id)timestamp mediaAttributes:(id)attributes isOnScreen:(id)screen isFirstView:(id)view;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)_mediaAttributesJSONArray;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMMessagesMediaRendered_h */