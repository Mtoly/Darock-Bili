//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef ML3QuerySection_h
#define ML3QuerySection_h
@import Foundation;

@interface ML3QuerySection : NSObject

@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (nonatomic) unsigned long long sectionIndex;

/* instance methods */
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range sectionIndex:(unsigned long long)index;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* ML3QuerySection_h */