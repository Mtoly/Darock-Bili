//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 356.6.0.0.0
//
#ifndef SPOfflineAdvertisingConfiguration_h
#define SPOfflineAdvertisingConfiguration_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface SPOfflineAdvertisingConfiguration : NSObject<NSSecureCoding>

@property (nonatomic) long long shortIntervalCount;
@property (nonatomic) long long longIntervalCount;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithShortIntervalCount:(long long)count longIntervalCount:(long long)count;
- (id)initWithDictionaryRepresentation:(id)representation;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* SPOfflineAdvertisingConfiguration_h */