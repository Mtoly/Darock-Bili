//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKPageScrollViewControllerDataSource_Protocol_h
#define NTKPageScrollViewControllerDataSource_Protocol_h
@import Foundation;

@protocol NTKPageScrollViewControllerDataSource <NSObject>
/* instance methods */
- (unsigned long long)pageScrollViewControllerNumberOfPages:(id)pages;
- (id)pageScrollViewController:(id)controller viewControllerForPageAtIndex:(unsigned long long)index;
@optional
/* instance methods */
- (void)pageScrollViewController:(id)controller didPurgePageViewController:(id)controller;
@end

#endif /* NTKPageScrollViewControllerDataSource_Protocol_h */