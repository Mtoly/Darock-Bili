//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKRemoteThumbnailKey_h
#define PKRemoteThumbnailKey_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface PKRemoteThumbnailKey : NSObject<NSCopying>

@property (retain, nonatomic) NSString *requestIdentifier;
@property (retain, nonatomic) NSDictionary *requestDictionary;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToRemoteThumbnailKey:(id)key;
@end

#endif /* PKRemoteThumbnailKey_h */