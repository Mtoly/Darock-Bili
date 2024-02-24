//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef SGModelHead_h
#define SGModelHead_h
@import Foundation;

@class NSArray, NSString;

@interface SGModelHead : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long numberOfDimensions;
@property (readonly, nonatomic) NSArray *labels;

/* instance methods */
- (id)initWithDictionary:(id)dictionary key:(id)key;
@end

#endif /* SGModelHead_h */