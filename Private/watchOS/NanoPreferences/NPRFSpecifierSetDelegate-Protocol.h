//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1108.10.0.0.0
//
#ifndef NPRFSpecifierSetDelegate_Protocol_h
#define NPRFSpecifierSetDelegate_Protocol_h
@import Foundation;

@protocol NPRFSpecifierSetDelegate 
/* instance methods */
- (void)specifierSet:(id)set didInsertSpecifiers:(id)specifiers atIndex:(long long)index;
- (void)specifierSet:(id)set didRemoveSpecifiers:(id)specifiers atIndex:(long long)index fromIndexPaths:(id)paths;
- (void)specifierSet:(id)set didUpdateToSpecifiers:(id)specifiers fromSpecifiers:(id)specifiers;
@end

#endif /* NPRFSpecifierSetDelegate_Protocol_h */