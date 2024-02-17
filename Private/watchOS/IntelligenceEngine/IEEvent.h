//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.31.1.0.0
//
#ifndef IEEvent_h
#define IEEvent_h
@import Foundation;

#include "IENLParameters.h"

@class NSArray, NSDictionary, NSString;

@interface IEEvent : NSObject

@property (retain, nonatomic) NSString *eventId;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *slots;
@property (retain, nonatomic) NSArray *parsers;
@property (retain, nonatomic) IENLParameters *producer;

/* class methods */
+ (id)normalizeUtterance:(id)utterance;

/* instance methods */
- (id)initWithName:(id)name;
- (id)initWithName:(id)name withId:(id)id;
- (id)initWithId:(id)id;
- (id)initWithId:(id)id withName:(id)name;
- (BOOL)isEqual:(id)equal;
@end

#endif /* IEEvent_h */