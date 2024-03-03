//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSSetItem_h
#define AMSSetItem_h
@import Foundation;

@class NSString;

@interface AMSSetItem : NSObject

@property (readonly, nonatomic) id object;
@property (readonly, nonatomic) NSString *hashKey;

/* class methods */
+ (id)setItemWithObject:(id)object hashKey:(id)key;

/* instance methods */
- (id)initWithObject:(id)object hashKey:(id)key;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* AMSSetItem_h */