//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 752.2.0.0.0
//
#ifndef ASFriendListDisplayContext_h
#define ASFriendListDisplayContext_h
@import Foundation;

@interface ASFriendListDisplayContext : NSObject

@property (nonatomic) long long displayMode;
@property (nonatomic) long long displayFilter;

/* instance methods */
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* ASFriendListDisplayContext_h */