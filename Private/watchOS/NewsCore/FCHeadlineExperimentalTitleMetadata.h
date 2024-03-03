//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCHeadlineExperimentalTitleMetadata_h
#define FCHeadlineExperimentalTitleMetadata_h
@import Foundation;

@class NSString;

@interface FCHeadlineExperimentalTitleMetadata : NSObject

@property (readonly, nonatomic) BOOL isTitleExperimental;
@property (readonly, nonatomic) long long arrayIndexUsedforTitle;
@property (readonly, nonatomic) int treatmentState;
@property (readonly, copy, nonatomic) NSString *chosenTitle;

/* instance methods */
- (id)initWithChosenTitle:(id)title isTitleExperimental:(BOOL)experimental arrayIndexUsedforTitle:(long long)title treatmentState:(int)state;
@end

#endif /* FCHeadlineExperimentalTitleMetadata_h */