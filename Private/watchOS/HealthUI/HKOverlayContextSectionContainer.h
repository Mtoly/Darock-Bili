//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKOverlayContextSectionContainer_h
#define HKOverlayContextSectionContainer_h
@import Foundation;

#include "HKDisplayType.h"

@class NSArray, NSString;

@interface HKOverlayContextSectionContainer : NSObject

@property (readonly, nonatomic) NSString *localizedContainerTitle;
@property (readonly, nonatomic) NSArray *overlayContextSections;
@property (readonly, nonatomic) HKDisplayType *primaryDisplayType;

/* instance methods */
- (id)initWithContainerTitle:(id)title overlayContextSections:(id)sections;
- (id)initWithContainerTitle:(id)title overlayContextSections:(id)sections primaryDisplayType:(id)type;
@end

#endif /* HKOverlayContextSectionContainer_h */