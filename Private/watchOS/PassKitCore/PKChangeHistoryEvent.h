//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKChangeHistoryEvent_h
#define PKChangeHistoryEvent_h
@import Foundation;

@class NSDate, NSString;

@interface PKChangeHistoryEvent : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long type;
@property (nonatomic) long long recordType;
@property (retain, nonatomic) NSString *recordUniqueID;
@property (retain, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) BOOL representsPassAddition;
@property (readonly, nonatomic) BOOL representsPassUpdate;
@property (readonly, nonatomic) BOOL representsPassRemoval;
@property (readonly, nonatomic) BOOL representsCatalogUpdate;

/* instance methods */
- (id)init;
- (id)initWithType:(long long)type recordType:(long long)type recordUniqueID:(id)id timestamp:(id)timestamp;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* PKChangeHistoryEvent_h */